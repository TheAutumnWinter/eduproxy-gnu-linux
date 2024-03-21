echo "compiling survey"
gcc settings.c -o surveyproxy
./surveyproxy
gcc main.c -o eduproxy-gnu-linux
mkdir ~/.EDUPROXY
rm surveyproxy
mv eduproxy-gnu-linux ~/.EDUPROXY
mv setting1 ~/.EDUPROXY
mv setting2 ~/.EDUPROXY
echo -e "~/.EDUPROXY/eduproxy-gnu-linux" >> ~/.bashrc
echo "Install complete!"
