#=======================================================================
# Basic C++: classe Robot
#-----------------------------------------------------------------------
# Maxime MULTARI & Hong JIN --- Copyright 2014
#=======================================================================

include default.mk

# Variables needed by default.mk

INITIAL_FILES = $(SOURCES)
SOLUTION_FILES = $(SOURCES)

#targets

tst_Robot : main_Robot.o Robot.o EtatEnChargeFacePlot.o EtatEnCharge.o EtatAVideFacePlot.o EtatAVide.o EtatFige.o EtatEnRoute.o EtatRobot.o Position.o Plot.o Objet.o
	$(CXX_LINK) -o tst_Robot main_Robot.o Robot.o EtatEnChargeFacePlot.o EtatEnCharge.o EtatAVideFacePlot.o EtatAVide.o EtatFige.o EtatEnRoute.o EtatRobot.o Position.o Plot.o Objet.o

#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------
Plot.o  : Plot.h $(INCL_DIR)/common_defs.h
Objet.o : Objet.h $(INCL_DIR)/common_defs.h
Position.o : Position.h $(INCL_DIR)/common_defs.h
EtatRobot.o : EtatRobot.h $(INCL_DIR)/common_defs.h
EtatFige.o : EtatRobot.h EtatFige.h $(INCL_DIR)/common_defs.h
EtatEnRoute.o : EtatRobot.h EtatEnRoute.h EtatFige.h $(INCL_DIR)/common_defs.h
EtatEnChargeFacePlot.o : EtatEnRoute.h EtatEnCharge.h EtatAVideFacePlot.h EtatEnChargeFacePlot.h $(INCL_DIR)/common_defs.h
EtatEnCharge.o : EtatEnRoute.h EtatEnCharge.h EtatEnChargeFacePlot.h $(INCL_DIR)/common_defs.h
EtatAVideFacePlot.o : EtatEnRoute.h EtatAVide.h EtatAVideFacePlot.h EtatEnChargeFacePlot.h $(INCL_DIR)/common_defs.h
EtatAVide.o : EtatEnRoute.h EtatAVide.h EtatAVideFacePlot.h $(INCL_DIR)/common_defs.h
Robot.o : Robot.h EtatRobot.h Objet.h Plot.h Position.h $(INCL_DIR)/common_defs.h
main_Robot.o : Robot.h EtatRobot.h EtatAVide.h EtatAVideFacePlot.h EtatEnCharge.h EtatEnChargeFacePlot.h $(INCL_DIR)/common_defs.h
