#!/bin/bash

# Set command is used to set specific flags. This command is used to determins behaviour of script and helps is executing
# Option -e is used to exit the code when the return status is non-zero
# option -x is used to prints commands as they order of execution, can be used for the debug purpose

set -ex

# When assigning a value to the variable, there should be no space between the equal to sign

# When a command is passed as value, make sure to pass in the close brackets () 
# To store the value use the $ in front of the ()

# getopt command = used to pass arguments passed to them 
# -o short option
# --long long option
# -n name program = name used by getopt routine to report error 
# $@ = all of the parameters passed in command line 

PARSE_ARGUMENTS=$(getopt -o 'd:r:' --long 'distribution:,release'  -- "$@" )

# $? - the return value of previously executed command

if  [ $? -ne 0 ]; then 
	exit 1
fi

# eval - is used to execute the arguments  as shell command 
# The -- is the standard "don't treat anything following this as an option"

eval set -- "$PARSE_ARGUMENTS"

# We cant print PARSE ARGUMENT after unset
echo "${PARSE_ARGUMENTS}"
unset PARSE_ARGUMENTS

echo "$1"

# How to set the arguments
# Shift command is used to shift the positional arguments by the defined positon

# The reason behind -- in the while case and why the parse_argument output shows "--"
# Refer - https://stackoverflow.com/questions/48980653/shell-script-getopt-what-does-mean

while true; do
	case $1 in 
		'-d' | '--distribution')
			DISTRIBUTION=$2
			shift 2
			continue
			;;
		'-r' | '--release')
			RELEASE=$2
			shift 2
			continue
			;;
		--)
			shift
			break
			;;
		*)
			echo "Unknown option $1"
			exit 2
			;;
	esac
done

echo "DISTRIBUTION = $DISTRIBUTION"
echo "RELEASE = $RELEASE"

