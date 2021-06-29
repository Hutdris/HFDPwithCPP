# TODO: Use list and $1 to select chapter...

funtion Info() {
    echo "You should run this script at root of HFDPwithCPP."
}

funtion buildCH1() {
    Info
    cd ./CH1_ducks
    rm -rf build
    mkdir build
    cd build
    cmake ..
    make
    cd ../..
}
funtion buildNRunCH1() {
    buildCH1
    echo "Start CH1 Sample: "
    ./CH1_Ducks/build/CH1_Ducks
}

funtion buildCH2() {
    Info
    cd ./CH2_WetherStation
    rm -rf build
    mkdir build
    cd build
    cmake ..
    make
    cd ../..
}
funtion buildNRunCH2() {
    buildCH2
    echo "Start CH2 Sample: "
    ./CH2_WetherStation/build/CH2_WetherStation
}