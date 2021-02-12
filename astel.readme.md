git remote add upstream https://github.com/qmk/qmk_firmware.git
git fetch upstream
git checkout master
git merge upstream/master

make git-submodule
./util/qmk_install.sh

# meishi2
vi keyboards/meishi2/keymaps/astel-mac/keymap.c
make meishi2:astel-mac
make meishi2:astel-mac:avrdude
