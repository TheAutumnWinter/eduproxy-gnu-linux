This program is designed to make running internet related commands work better at schools with proxies required. This can easily be changed to work for other proxies, 
when running a command that requires sudo remember to add "-E" after sudo so that the proxy is also applied to the command






(GCC IS REQUIRED TO BE INSTALLED)


Keep in mind this has only been tested for arch linux

To install run "git clone https://github.com/TheAutumnWinter/eduproxy-gnu-linux.git"

then run "cd eduproxy-gnu-linux"

then run while connected to your schools network"./install.sh"


(if deleting or reinstalling program delete the eduproxy-gnu-linux line in .bashrc then delete the .EDUPROXY folder in your home directory)
