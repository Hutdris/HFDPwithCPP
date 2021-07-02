#!/bin/bash

funtion Info() {
    echo "You should run this script at root of HFDPwithCPP."
}

funtion echon() {
    echo "$*" | tr -d '\n'
}

funtion chooseChapter() {
    echo "Valid chapers:"
    echo "  1. Strategy"
    echo "  2. Factory"
    echon "Choose Chapter: "
    read chapter
    echo "You choose"
    case $chapter in
      1 ) echo "CH1_Ducks" ;;
      2 ) echo "CH2_WeterStation" ;;
      * ) echo "Invalid chapter $chapter, set to CH1_ducks"
          $chapter=1 ;;
    esac

    export chapter
}

quickBuildNRun() {
    if [ ! -z ${chapter} ];
    then
        chapter=1
        echo "Run chooseChapter() first."
        echo "Set chapter to 1 for this run."
    fi
    chapters=("CH1_Ducks" "CH2_WetherStation")
    chaper_root="${chapters[$chapter]}"

    current_pwd=`pwd`
    cd ./$chaper_root
    rm -rf build
    mkdir build
    cd build
    cmake ..
    make
    ./${chaper_root} #!!?
    cd ${current_pwd}
}

funtion buildCH1() {
    Info
    cd ./CH1_Ducks
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