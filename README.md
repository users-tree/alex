# osx
=============
default template for a OSX user's home account.  Do the following after clone

## Update vim packages
```
./bin/viminstall
```

## Added utilities homebrew, nvm, rvm, pyenv, gvm
```
ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
curl -o- https://raw.githubusercontent.com/creationix/nvm/v0.29.0/install.sh | bash
curl -sSL https://get.rvm.io | bash -s stable --rails
curl -L https://raw.githubusercontent.com/yyuu/pyenv-installer/master/bin/pyenv-installer | bash
bash < <(curl -s -S -L https://raw.githubusercontent.com/moovweb/gvm/master/binscripts/gvm-installer)
```

V1.0.0
