#!/usr/bin/env bash
# Time-stamp: <2014-07-16 11:03:52 Wednesday by work>

readonly PROGRAM_NAME="test.cpp"
readonly PROGRAM_VERSION="1.0.0"

HOME=`cd $(dirname "$0") && pwd`

if [ $# != 1 ] ; then
    echo "USAGE: $0 project_name"
    exit 1;
fi

function getdir(){
    for file in $1/*
    do
        if test -f $file
        then
            sed -i '' -e "s/EmptyCMakeProject/${2}/g" $file
        else
            getdir $file $2
        fi
    done
}

getdir $HOME/..   $1

rm -rf $HOME/../.git

echo "Succeeded"
