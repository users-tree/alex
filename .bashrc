
export JAVA_HOME=/Library/Java/JavaVirtualMachines/jdk1.8.0_66.jdk/Contents/Home/
export IBM=/usr/local/ibm

[[ -s "$HOME/.gvm/scripts/gvm" ]] && source "$HOME/.gvm/scripts/gvm"


export NVM_DIR="/Users/z/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && . "$NVM_DIR/nvm.sh"  # This loads nvm

export REACT_EDITOR=/usr/local/bin/vim
export EDITOR=$REACT_EDITOR


export START=$START:bashrc
export PATH="$HOME/.rvm/bin:$HOME/.gvm/bin:$JAVA_HOME/bin:$IBM:/usr/local/bin:/usr/local/sbin:$PATH" # Add RVM to PATH for scripting

export LT_HOME="/Applications/local"
export BOOT_EMIT_TARGET=no
