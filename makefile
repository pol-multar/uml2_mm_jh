#=======================================================================
# Basic C++: classe Robot
#-----------------------------------------------------------------------
# Maxime MULTARI & Hong JIN --- Copyright 2014
#=======================================================================

CXXFLAGS = -g -Wall -std=c++11
CXX = g++
CXX_COMPILE = $(CXX) $(CXXFLAGS)

LIBS =
CXX_LINK = $(CXX)

# Default rules

%.o :	%.cpp
	$(CXX_COMPILE) -c $*.cpp

% :	%.cpp
	$(CXX_COMPILE) -o $@ -c $*.cpp

#targets

tst_Robot : main_Robot.o Robot.o
	$(CXX_LINK) -o tst_Robot main_Robot.o Robot.o







#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------

Robot.o : Robot.h EtatRobot.h Objet.h Plot.h Position.h EtatAVide.h EtatEnCharge.h EtatAVideFacePlot.h EtatEnCharge.h EtatEnChargeFacePlot.h EtatEnRoute.h EtatFige.h common_defs.h
main_Robot.o : Robot.h EtatRobot.h Objet.h Plot.h Position.h EtatAVide.h EtatEnCharge.h EtatAVideFacePlot.h EtatEnCharge.h EtatEnChargeFacePlot.h EtatEnRoute.h EtatFige.h common_defs.h
Observable.o : Observable.h IObserver.h