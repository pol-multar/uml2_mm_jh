#=======================================================================
# Basic C++: classe Robot
#-----------------------------------------------------------------------
# Maxime MULTARI & Hong JIN --- Copyright 2014
#=======================================================================

include default.mk

#-----------------------------------------------------------------------

ALL = tst_Robot tst_Ex

#targets

tst_Robot : main_Robot.o Robot.o
	$(CXX_LINK) -o tst_Robot main_Robot.o Robot.o

tst_Ex : main_exemple.o Observable.o
	$(CXX_LINK) -o tst_Ex main_exemple.o Observable.o


#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------

Robot.o : Robot.h EtatRobot.h Objet.h Plot.h Position.h $(INCL_DIR)/common_defs.h
main_Robot.o : Robot.h EtatAVide.h EtatAVideFacePlot.h EtatEnCharge.h EtatEnChargeFacePlot.h EtatRobot.h Objet.h Plot.h Position.h $(INCL_DIR)/common_defs.h
main_exemple.o : Display.h Exemple.h $(INCL_DIR)/common_defs.h
Observable.o : IObserver.h Observable.h
