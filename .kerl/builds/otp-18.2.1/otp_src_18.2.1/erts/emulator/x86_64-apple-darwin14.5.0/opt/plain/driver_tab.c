#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif /* HAVE_CONFIG_H */
#include <stdio.h>
#include "global.h"


extern ErlDrvEntry efile_driver_entry;
extern ErlDrvEntry inet_driver_entry;
extern ErlDrvEntry zlib_driver_entry;
extern ErlDrvEntry ram_file_driver_entry;
extern ErlDrvEntry ttsl_driver_entry;

ErlDrvEntry *driver_tab[] =
{
    &efile_driver_entry,
    &inet_driver_entry,
    &zlib_driver_entry,
    &ram_file_driver_entry,
    &ttsl_driver_entry,
    NULL
};
void erts_init_static_drivers() {
}

typedef struct ErtsStaticNifEntry_ {
    const char *nif_name;
    ErtsStaticNifInitFPtr nif_init;
} ErtsStaticNifEntry;

static ErtsStaticNifEntry static_nif_tab[] =
{
    {NULL,NULL}
};
ErtsStaticNifInitFPtr erts_static_nif_get_nif_init(const char *name, int len) {
    ErtsStaticNifEntry* p;
    for (p = static_nif_tab; p->nif_name != NULL; p++)
        if (strncmp(p->nif_name, name, len) == 0 && p->nif_name[len] == 0)
            return p->nif_init;
    return NULL;
}

int erts_is_static_nif(void *handle) {
    ErtsStaticNifEntry* p;
    for (p = static_nif_tab; p->nif_name != NULL; p++)
        if (((void*)p->nif_init) == handle)
            return 1;
    return 0;
}

