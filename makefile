#=======================================================================
# Basic C++: classe Robot
#-----------------------------------------------------------------------
# Maxime MULTARI & Hong JIN --- Copyright 2014
#=======================================================================

include default.mk

#-----------------------------------------------------------------------

ALL = tst_Robot

#targets

tst_Robot : main_Robot.o Robot.o EtatAVide.o EtatAVideFacePlot.o EtatEnCharge.o EtatEnChargeFacePlot.o EtatEnRoute.o EtatFige.o EtatRobot.o Objet.o Plot.o Position.o Observable.o IObserver.o
	$(CXX_LINK) -o tst_Robot main_Robot.o Robot.o EtatAVide.o EtatAVideFacePlot.o EtatEnCharge.o EtatEnChargeFacePlot.o EtatEnRoute.o EtatFige.o EtatRobot.o Objet.o Plot.o Position.o Observable.o IObserver.o

#tst_Ex : main_exemple.o Observable.o
#	$(CXX_LINK) -o tst_Ex main_exemple.o Observable.o


#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------

Robot.o : Robot.h EtatRobot.h Objet.h Plot.h Position.h IObserver.h Observable.h $(INCL_DIR)/common_defs.h
main_Robot.o : Robot.h EtatAVide.h EtatAVideFacePlot.h EtatEnCharge.h EtatEnChargeFacePlot.h EtatRobot.h Objet.h Plot.h Position.h $(INCL_DIR)/common_defs.h
#main_exemple.o : Display.h Exemple.h $(INCL_DIR)/common_defs.h
Observable.o : IObserver.h Observable.h
IObserver.o : IObserver.h Observable.h
EtatAVide.o : EtatAVide.h EtatAVideFacePlot.h
EtatAVideFacePlot.o : EtatAVideFacePlot.h EtatAVide.h EtatEnChargeFacePlot.h
EtatEnCharge.o : EtatEnCharge.h EtatEnChargeFacePlot.h
EtatEnChargeFacePlot.o : EtatEnChargeFacePlot.h EtatAVideFacePlot.h EtatEnCharge.h
EtatEnRoute.o : EtatEnRoute.h EtatFige.h
EtatFige.o : EtatFige.h
EtatRobot.o : EtatRobot.h
Objet.o : Objet.h
Plot.o : Plot.h
Position.o : Position.h
