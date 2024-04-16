echo "compiling survey"
gcc settings.c -o surveyproxy
touch settings1
touch settings2
touch run.sh
chmod 777 run.sh
./surveyproxy
gcc main.c -o eduproxy-gnu-linux
mkdir ~/.EDUPROXY
rm surveyproxy
mv eduproxy-gnu-linux ~/.EDUPROXY
mv settings1 ~/.EDUPROXY
mv settings2 ~/.EDUPROXY
mv run.sh ~/.EDUPROXY
echo -e "~/.EDUPROXY/eduproxy-gnu-linux" >> ~/.bashrc
echo -e " ~/.EDUPROXY/run.sh" >> ~/.bashrc
echo "Install complete!"
