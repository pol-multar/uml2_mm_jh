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

tst_Date : main_Robot.o Robot.o
	$(CXX_LINK) -o tst_Robot main_Robot.o Robot.o

#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------

Robot.o : Robot.h EtatRobot.h Objet.h Plot.h Position.h $(INCL_DIR)/common_defs.h
main_Robot.o : Robot.h EtatRobot.h Objet.h Plot.h Position.h $(INCL_DIR)/common_defs.h