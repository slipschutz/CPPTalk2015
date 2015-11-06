wget http://pa.msu.edu/pgo/adg_linux.tar.bz2
tar -xjvf ./adg_linux.tar.bz2
current_dir="$PWD"
echo "alias debug='$current_dir/adg/adg'" >> $HOME/.bashrc
source $HOME/.bashrc
