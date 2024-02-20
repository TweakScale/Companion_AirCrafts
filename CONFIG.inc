source ../CONFIG.inc

PACKAGE=TweakScaleCompanion.AirCrafts
TARGETDIR="TweakScaleCompanion/AirCrafts"
TARGETBINDIR="$TARGETDIR/"
PROJECTSDIR="$PACKAGE/"
DLLS=""

PROJECT_BRANCH=`git branch | grep \* | cut -d ' ' -f2`
if [ "$PROJECT_BRANCH" == "master" ] ; then
	# Release mode
	# Don't forget the leading dash
	PROJECT_STATE="-RC"
else
	# PreRelease mode
	# Don't forget the leading dash
	PROJECT_STATE=""
fi

VERSION=$( cat $PACKAGE.version | tr '\n' ' ' | sed -n -E 's/^.*?"VERSION\":\{.*"MAJOR":([0-9]+?),.*?"MINOR":([0-9]+?),.*?"PATCH":([0-9]+?),.*?"BUILD":([0-9]+?).*?\}.*$/\1.\2.\3.\4/p' )
