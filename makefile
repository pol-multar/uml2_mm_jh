#=======================================================================
# Basic C++: classe Robot
#-----------------------------------------------------------------------
# Maxime MULTARI & Hong JIN --- Copyright 2014
#=======================================================================

include default.mk

#-----------------------------------------------------------------------

ALL = tst_Robot

#targets

tst_Robot : main_Robot.o Robot.o EtatAVide.o EtatAVideFacePlot.o EtatEnCharge.o EtatEnChargeFacePlot.o EtatEnRoute.o EtatFige.o EtatRobot.o Objet.o Plot.o Position.o Observable.o IObserver.o Commande.o Invocateur.o CommandeAvancer.o MacroCommande.o CommandeAppeler.o CommandeDefmacro.o CommandeEvaluerObst.o CommandeFiger.o CommandePeserObjet.o CommandePoser.o CommandeRencontrerObst.o CommandeRepartir.o CommandeSaisir.o CommandeTourner.o
	$(CXX_LINK) -o tst_Robot main_Robot.o Robot.o EtatAVide.o EtatAVideFacePlot.o EtatEnCharge.o EtatEnChargeFacePlot.o EtatEnRoute.o EtatFige.o EtatRobot.o Objet.o Plot.o Position.o Observable.o IObserver.o Commande.o Invocateur.o CommandeAvancer.o MacroCommande.o CommandeAppeler.o CommandeDefmacro.o CommandeEvaluerObst.o CommandeFiger.o CommandePeserObjet.o CommandePoser.o CommandeRencontrerObst.o CommandeRepartir.o CommandeSaisir.o CommandeTourner.o


#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------

Robot.o : Robot.h EtatRobot.h Objet.h Plot.h Position.h IObserver.h Observable.h $(INCL_DIR)/common_defs.h
main_Robot.o : Robot.h EtatAVide.h EtatAVideFacePlot.h EtatEnCharge.h EtatEnChargeFacePlot.h EtatRobot.h Objet.h Plot.h Position.h $(INCL_DIR)/common_defs.h Invocateur.h
Observable.o : IObserver.h Observable.h
IObserver.o : IObserver.h Observable.h
EtatAVide.o : EtatAVide.h EtatAVideFacePlot.h
EtatAVideFacePlot.o : EtatAVideFacePlot.h EtatAVide.h EtatEnChargeFacePlot.h
EtatEnCharge.o : EtatEnCharge.h EtatEnChargeFacePlot.h
EtatEnChargeFacePlot.o : EtatEnChargeFacePlot.h EtatAVideFacePlot.h EtatEnCharge.h
EtatEnRoute.o : EtatEnRoute.h EtatFige.h
EtatFige.o : EtatFige.h
EtatRobot.o : EtatRobot.h EtatAVide.h
Objet.o : Objet.h
Plot.o : Plot.h
Position.o : Position.h
Invocateur.o : Invocateur.h Commande.h Observable.h
Commande.o : Commande.h Invocateur.h
CommandeAppeler.o : CommandeAppeler.h MacroCommande.h Invocateur.h Robot.h
MacroCommande.o : MacroCommande.h Commande.h Invocateur.h Robot.h
CommandeAvancer.o : CommandeAvancer.h Commande.h Position.h
CommandeDefmacro.o : CommandeDefmacro.h MacroCommande.h Invocateur.h Robot.h
CommandeEvaluerObst.o : CommandeEvaluerObst.h Commande.h Invocateur.h Robot.h
CommandeFiger.o : CommandeFiger.h Commande.h Invocateur.h Robot.h
CommandePeserObjet.o : CommandePeserObjet.h Commande.h Invocateur.h Robot.h
CommandePoser.o : CommandePoser.h Commande.h Invocateur.h Robot.h
CommandeRencontrerObst.o : CommandeRencontrerObst.h Commande.h Invocateur.h Robot.h
CommandeRepartir.o : CommandeRepartir.h Commande.h Invocateur.h Robot.h
CommandeSaisir.o : CommandeSaisir.h Commande.h Invocateur.h Robot.h
CommandeTourner.o : CommandeTourner.h Commande.h Robot.h
