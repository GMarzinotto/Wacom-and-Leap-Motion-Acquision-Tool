#include "TestManager.h"

void WacomTabletApplication::TestManager::prepareFunctions() {
	switch (this->testType) {
	case TestTypes::Broca_French: 
		CurrentTest_Broca		= BrocaExercises::Task0A;
		CurrentTest_Leap		= LeapExercises::None;
		CurrentTest_Signatures	= SignatureExercises::None;
		break;
	case TestTypes::Broca_Arab: 
		CurrentTest_Broca		= BrocaExercises::Task0A;
		CurrentTest_Leap		= LeapExercises::None;
		CurrentTest_Signatures	= SignatureExercises::None;
		break;
	case TestTypes::Signatures: 
		CurrentTest_Broca		= BrocaExercises::None;
		CurrentTest_Leap		= LeapExercises::None;
		CurrentTest_Signatures	= SignatureExercises::Task1;
		break;
	case TestTypes::LeapTools: 
		CurrentTest_Broca		= BrocaExercises::None;
		CurrentTest_Leap		= LeapExercises::Digit0;
		CurrentTest_Signatures	= SignatureExercises::None;
		break;
	case TestTypes::LeapHand: 
		CurrentTest_Broca		= BrocaExercises::None;
		CurrentTest_Leap		= LeapExercises::Digit0;
		CurrentTest_Signatures	= SignatureExercises::None;
		break;
		
	default: break;
	}
}


void WacomTabletApplication::TestManager::moveInterfaceNextExercise() {
	switch (this->testType) {
	case TestTypes::Broca_French:	moveInterfaceNextExercise_Broca();		break;
	case TestTypes::Broca_Arab:		moveInterfaceNextExercise_Broca();		break;
	case TestTypes::Signatures:		moveInterfaceNextExercise_Signatures();	break;
	case TestTypes::LeapTools:		moveInterfaceNextExercise_Leap();		break;
	case TestTypes::LeapHand:		moveInterfaceNextExercise_Leap();		break;
	default: break;
	}
}

void WacomTabletApplication::TestManager::moveInterfacePreviousExercise() {
	switch (this->testType) {
	case TestTypes::Broca_French:	moveInterfacePreviousExercise_Broca();		break;
	case TestTypes::Broca_Arab:		moveInterfacePreviousExercise_Broca();		break;
	case TestTypes::Signatures:		moveInterfacePreviousExercise_Signatures();	break;
	case TestTypes::LeapTools:		moveInterfacePreviousExercise_Leap();		break;
	case TestTypes::LeapHand:		moveInterfacePreviousExercise_Leap();		break;
	default: break;
	}
}

void WacomTabletApplication::TestManager::refreshInterface() {
	switch (this->testType) {
	case TestTypes::Broca_French:	refreshInterface_Broca();		break;
	case TestTypes::Broca_Arab:		refreshInterface_Broca();		break;
	case TestTypes::Signatures:		refreshInterface_Signatures();	break;
	case TestTypes::LeapTools:		refreshInterface_Leap();		break;
	case TestTypes::LeapHand:		refreshInterface_Leap();		break;
	default: break;
	}
}

void WacomTabletApplication::TestManager::createRecordResultsFile() {
	switch (this->testType) {
	case TestTypes::Broca_French:	createRecordResultsFile_Broca();		break;
	case TestTypes::Broca_Arab:		createRecordResultsFile_Broca();		break;
	case TestTypes::Signatures:		createRecordResultsFile_Signatures();	break;
	case TestTypes::LeapTools:		createRecordResultsFile_Leap();			break;
	case TestTypes::LeapHand:		createRecordResultsFile_Leap();			break;
	default: break;
	}
}

void WacomTabletApplication::TestManager::startRecordingExercise() {
	switch (this->testType) {
	case TestTypes::Broca_French:	startRecordingExercise_Broca();			break;
	case TestTypes::Broca_Arab:		startRecordingExercise_Broca();			break;
	case TestTypes::Signatures:		startRecordingExercise_Signatures();	break;
	case TestTypes::LeapTools:		startRecordingExercise_Leap();			break;
	case TestTypes::LeapHand:		startRecordingExercise_Leap();			break;
	default: break;
	}
}

void WacomTabletApplication::TestManager::stopRecordingExercise() {
	switch (this->testType) {
	case TestTypes::Broca_French:	stopRecordingExercise_Broca();		break;
	case TestTypes::Broca_Arab:		stopRecordingExercise_Broca();		break;
	case TestTypes::Signatures:		stopRecordingExercise_Signatures();	break;
	case TestTypes::LeapTools:		stopRecordingExercise_Leap();		break;
	case TestTypes::LeapHand:		stopRecordingExercise_Leap();		break;
	default: break;
	}
}

String^ WacomTabletApplication::TestManager::getPathToDestinationFile() {
	switch (this->testType) {
	case TestTypes::Broca_French:	return(getPathToDestinationFile_Broca());		break;
	case TestTypes::Broca_Arab:		return(getPathToDestinationFile_Broca());		break;
	case TestTypes::Signatures:		return(getPathToDestinationFile_Signatures());	break;
	case TestTypes::LeapTools:		return(getPathToDestinationFile_Leap());		break;
	case TestTypes::LeapHand:		return(getPathToDestinationFile_Leap());		break;
	default: break;
	}
}



void WacomTabletApplication::TestManager::moveInterfacePreviousExercise_Broca() {

	switch (this->CurrentTest_Broca)
	{
	case BrocaExercises::Task0A: 	break;
	case BrocaExercises::Task0B: 	CurrentTest_Broca = BrocaExercises::Task0A; break;
	case BrocaExercises::Task1:		CurrentTest_Broca = BrocaExercises::Task0B; break;
	case BrocaExercises::Task2:		CurrentTest_Broca = BrocaExercises::Task1; 	break;
	case BrocaExercises::Task3:		CurrentTest_Broca = BrocaExercises::Task2; 	break;
	case BrocaExercises::Task4:		CurrentTest_Broca = BrocaExercises::Task3; 	break;
	case BrocaExercises::Task5:		CurrentTest_Broca = BrocaExercises::Task4; 	break;
	case BrocaExercises::Task6:		CurrentTest_Broca = BrocaExercises::Task5; 	break;
	case BrocaExercises::Task7:		CurrentTest_Broca = BrocaExercises::Task6; 	break;
	case BrocaExercises::Task8:		CurrentTest_Broca = BrocaExercises::Task7; 	break;
	case BrocaExercises::Task9:		CurrentTest_Broca = BrocaExercises::Task8; 	break;
	case BrocaExercises::Task10:	CurrentTest_Broca = BrocaExercises::Task9; 	break;
	case BrocaExercises::Task11:	CurrentTest_Broca = BrocaExercises::Task10; break;
	case BrocaExercises::Task12:	CurrentTest_Broca = BrocaExercises::Task11; break;
	default: break;
	}
}

void WacomTabletApplication::TestManager::moveInterfacePreviousExercise_Leap() {

	switch (this->CurrentTest_Leap)
	{
	case LeapExercises::Digit0: 	if (leapCounter) { CurrentTest_Leap = LeapExercises::Digit9;	leapCounter--; } break;
	case LeapExercises::Digit1: 	CurrentTest_Leap = LeapExercises::Digit0;	leapCounter--;	break;
	case LeapExercises::Digit2:		CurrentTest_Leap = LeapExercises::Digit1;	leapCounter--;	break;
	case LeapExercises::Digit3:		CurrentTest_Leap = LeapExercises::Digit2; 	leapCounter--;	break;
	case LeapExercises::Digit4:		CurrentTest_Leap = LeapExercises::Digit3; 	leapCounter--;	break;
	case LeapExercises::Digit5:		CurrentTest_Leap = LeapExercises::Digit4; 	leapCounter--;	break;
	case LeapExercises::Digit6:		CurrentTest_Leap = LeapExercises::Digit5; 	leapCounter--;	break;
	case LeapExercises::Digit7:		CurrentTest_Leap = LeapExercises::Digit6; 	leapCounter--;	break;
	case LeapExercises::Digit8:		CurrentTest_Leap = LeapExercises::Digit7; 	leapCounter--;	break;
	case LeapExercises::Digit9:		CurrentTest_Leap = LeapExercises::Digit8; 	leapCounter--;	break;
	default: break;
	}
}

void WacomTabletApplication::TestManager::moveInterfacePreviousExercise_Signatures() {

	switch (this->CurrentTest_Signatures)
	{
	case SignatureExercises::Task1: 	if (signatureCounter) signatureCounter--; break;
	case SignatureExercises::Task2: 	signatureCounter--; if (signatureCounter < SIGNATURES_PER_EXERCISE)			CurrentTest_Signatures = SignatureExercises::Task1;	break;
	case SignatureExercises::Task3:		signatureCounter--; if (signatureCounter < 2 * SIGNATURES_PER_EXERCISE)	CurrentTest_Signatures = SignatureExercises::Task2;	break;
	default: break;
	}
}




void WacomTabletApplication::TestManager::moveInterfaceNextExercise_Broca() {

	switch (this->CurrentTest_Broca)
	{
	case BrocaExercises::Task0A: 	this->CurrentTest_Broca = BrocaExercises::Task0B;	break;
	case BrocaExercises::Task0B: 	this->CurrentTest_Broca = BrocaExercises::Task1; 	break;
	case BrocaExercises::Task1:		this->CurrentTest_Broca = BrocaExercises::Task2;  break;
	case BrocaExercises::Task2:		this->CurrentTest_Broca = BrocaExercises::Task3; 	break;
	case BrocaExercises::Task3:		this->CurrentTest_Broca = BrocaExercises::Task4; 	break;
	case BrocaExercises::Task4:		this->CurrentTest_Broca = BrocaExercises::Task5; 	break;
	case BrocaExercises::Task5:		this->CurrentTest_Broca = BrocaExercises::Task6; 	break;
	case BrocaExercises::Task6:		this->CurrentTest_Broca = BrocaExercises::Task7; 	break;
	case BrocaExercises::Task7:		this->CurrentTest_Broca = BrocaExercises::Task8; 	break;
	case BrocaExercises::Task8:		this->CurrentTest_Broca = BrocaExercises::Task9; 	break;
	case BrocaExercises::Task9:		this->CurrentTest_Broca = BrocaExercises::Task10;	break;
	case BrocaExercises::Task10:	this->CurrentTest_Broca = BrocaExercises::Task11;	break;
	case BrocaExercises::Task11:	this->CurrentTest_Broca = BrocaExercises::Task12;	break;
	case BrocaExercises::Task12:	break;
	default: break;
	}
}

void WacomTabletApplication::TestManager::moveInterfaceNextExercise_Leap() {

	switch (this->CurrentTest_Leap)
	{
	case LeapExercises::Digit0: 	CurrentTest_Leap = LeapExercises::Digit1;	leapCounter++;	break;
	case LeapExercises::Digit1: 	CurrentTest_Leap = LeapExercises::Digit2;	leapCounter++;	break;
	case LeapExercises::Digit2:		CurrentTest_Leap = LeapExercises::Digit3;	leapCounter++;	break;
	case LeapExercises::Digit3:		CurrentTest_Leap = LeapExercises::Digit4; 	leapCounter++;	break;
	case LeapExercises::Digit4:		CurrentTest_Leap = LeapExercises::Digit5; 	leapCounter++;	break;
	case LeapExercises::Digit5:		CurrentTest_Leap = LeapExercises::Digit6; 	leapCounter++;	break;
	case LeapExercises::Digit6:		CurrentTest_Leap = LeapExercises::Digit7; 	leapCounter++;	break;
	case LeapExercises::Digit7:		CurrentTest_Leap = LeapExercises::Digit8; 	leapCounter++;	break;
	case LeapExercises::Digit8:		CurrentTest_Leap = LeapExercises::Digit9; 	leapCounter++;	break;
	case LeapExercises::Digit9:		CurrentTest_Leap = LeapExercises::Digit0; 	leapCounter++;	break;
	default: break;
	}
}

void WacomTabletApplication::TestManager::moveInterfaceNextExercise_Signatures() {

	switch (this->CurrentTest_Signatures)
	{
	case SignatureExercises::Task1: 	signatureCounter++; if (signatureCounter >= SIGNATURES_PER_EXERCISE )		CurrentTest_Signatures = SignatureExercises::Task2; break;
	case SignatureExercises::Task2: 	signatureCounter++; if (signatureCounter >= 2 * SIGNATURES_PER_EXERCISE)	CurrentTest_Signatures = SignatureExercises::Task3;	break;
	case SignatureExercises::Task3:		if (signatureCounter < 3 * SIGNATURES_PER_EXERCISE -1)	signatureCounter++;	break;
	default: break;
	}
}




void WacomTabletApplication::TestManager::refreshInterface_Broca() {

	switch (CurrentTest_Broca)
	{
	case BrocaExercises::Task0A:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #0A: Signer le Consentement (Copie 1)";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit écrire la mention 'lu et approuvé' et signer";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task0.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = false;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task0B:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #0B: Signer le Consentement (Copie 2)";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit écrire la mention 'lu et approuvé' et signer";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task0.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task1:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #1: Texte à Recopier";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit récopier le texte proposé  sur la partie haute à gauche de la feuille";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task1.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task2:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #2: Écriture Libre";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit écrire un texte libre  sur la partie haute à droite de la feuille (minimum 4 lignes)";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task2.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task3:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #3: Dessiner des Boucles";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit dessiner 4 fois des boucles sur les lignes de la partie basse à gauche de la feuille. Pour chaque ligne, il doit faire 4 boucles suivant l'ordre proposé";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task3.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task4:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #4: Fitts' Test";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit faire des aller-retour le plus vite possible, entre les deux carrés dessinés  sur la partie basse au centre de la feuille, durant 15 secondes.";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task4.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task5:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #5: Dessiner une Spirale";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit dessiner une spirale en suivant les pointillés. Il faut le faire le plus vite possible.";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task5.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task6:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #6: Dessiner des Cercles";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit dessiner des cercles le plus vite possible en suivant la circonférence proposeé dans la partie basse à droite de la feuille, durant 15 secondes";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task6.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task7:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #7: Tenir le Stylo";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit seulement maintenir la pointe du stylo sur le point d'intersection proposé sur la partie basse à droite de la feuille; durant 15 secondes";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task7.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task8:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #8: Enveloppe Prédéterminée";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit écrire sur l’enveloppe une adresse prédéterminée";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task8.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task9:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #9: Enveloppe Libre";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit écrire sur l’enveloppe une adresse choisie librement";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task9.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task10:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #10: Chèque Prédéterminé";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit remplir un chèque avec des informations prédéterminées";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task10.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task11:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #11: Chèque Libre";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit remplir un chèque de façon libre";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task11.gif";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case BrocaExercises::Task12:
		INSTRUCTIONS_TITLE_LABEL->Text = "Exercice #12: Description d'une Scène";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Le patient doit décrire la scène autant que possible";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\Task12.jpg";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = false;
		break;
	default:
		INSTRUCTIONS_TITLE_LABEL->Text = "Error...";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Error......................";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\error.gif";
	}

}

void WacomTabletApplication::TestManager::refreshInterface_Leap() {

	INSTRUCTIONS_TITLE_LABEL->Text = "Exercice " + this->leapCounter;

	switch (CurrentTest_Leap)
	{
	case LeapExercises::Digit0:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 0";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\zero.png";
		if (leapCounter)	PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		else				PREVIOUS_EXERCISE_BUTTON->Enabled = false;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case LeapExercises::Digit1:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 1";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\one.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case LeapExercises::Digit2:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 2";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\two.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case LeapExercises::Digit3:
		
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 3";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\three.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case LeapExercises::Digit4:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 4";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\four.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case LeapExercises::Digit5:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 5";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\five.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case LeapExercises::Digit6:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 6";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\six.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case LeapExercises::Digit7:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 7";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\seven.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case LeapExercises::Digit8:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 8";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\eight.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case LeapExercises::Digit9:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Dessiner le Chiffre 9";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\nine.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	default:
		INSTRUCTIONS_TITLE_LABEL->Text = "Error...";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Error......................";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\error.gif";
	}

}

void WacomTabletApplication::TestManager::refreshInterface_Signatures() {

	INSTRUCTIONS_TITLE_LABEL->Text = "Exercice " + this->signatureCounter;

	switch (CurrentTest_Signatures)
	{
	case SignatureExercises::Task1:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Sign Normally";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\sign.png";
		if (signatureCounter)	PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		else					PREVIOUS_EXERCISE_BUTTON->Enabled = false;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case SignatureExercises::Task2:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Sign with Initials";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\initials.png";
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		NEXT_EXERCISE_BUTTON->Enabled = true;
		break;
	case SignatureExercises::Task3:
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Invent a new Signature";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\fakeSign.png";
		if (signatureCounter<74)	NEXT_EXERCISE_BUTTON->Enabled = true;
		else						NEXT_EXERCISE_BUTTON->Enabled = false;
		PREVIOUS_EXERCISE_BUTTON->Enabled = true;
		break;
	default:
		INSTRUCTIONS_TITLE_LABEL->Text = "Error...";
		INSTRUCTIONS_DETAIL_LABEL->Text = L"Error......................";
		INSTRUCTIONS_PICTUREBOX->ImageLocation = "Images\\error.gif";
	}

}




String^ WacomTabletApplication::TestManager::getPathToDestinationFile_Broca() {

	String^ preResult;
	String^ pathDestiny;

	preResult = String::Concat(patientName, "\\TestDay", System::Convert::ToString((*testTime).wDay), "-", System::Convert::ToString((*testTime).wMonth), "-", System::Convert::ToString((*testTime).wYear));
	if (trialNumber > 1) preResult = String::Concat(preResult, " (", System::Convert::ToString(trialNumber), ")");
		
	switch(CurrentTest_Broca)
	{
	case BrocaExercises::Task0A:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test0A.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test0A.txt");
		break;
	case BrocaExercises::Task0B:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test0B.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test0B.txt");
		break;
	case BrocaExercises::Task1:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test1.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test1.txt");
		break;
	case BrocaExercises::Task2:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test2.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test2.txt");
		break;
	case BrocaExercises::Task3:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test3.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test3.txt");
		break;
	case BrocaExercises::Task4:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test4.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test4.txt");
		break;
	case BrocaExercises::Task5:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test5.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test5.txt");
		break;
	case BrocaExercises::Task6:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test6.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test6.txt");
		break;
	case BrocaExercises::Task7:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test7.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test7.txt");
		break;
	case BrocaExercises::Task8:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test8.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test8.txt");
		break;
	case BrocaExercises::Task9:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test9.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test9.txt");
		break;
	case BrocaExercises::Task10:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test10.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test10.txt");
		break;
	case BrocaExercises::Task11:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test11.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test11.txt");
		break;
	case BrocaExercises::Task12:
		if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\", preResult, "\\Test12.txt");
		if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\", preResult, "\\Test12.txt");
		break;
	default: break;

	}

	return pathDestiny;
}

String^ WacomTabletApplication::TestManager::getPathToDestinationFile_Leap() {

	String^ preResult;
	String^ pathDestiny;

	preResult = String::Concat(patientName, "\\TestDay", System::Convert::ToString((*testTime).wDay), "-", System::Convert::ToString((*testTime).wMonth), "-", System::Convert::ToString((*testTime).wYear));
	if (trialNumber > 1) preResult = String::Concat(preResult, " (", System::Convert::ToString(trialNumber), ")");

	switch (CurrentTest_Leap)
	{
	case LeapExercises::Digit0:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit0rep", System::Convert::ToString((leapCounter/10)+1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit0rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	case LeapExercises::Digit1:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit1rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit1rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	case LeapExercises::Digit2:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit2rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit2rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	case LeapExercises::Digit3:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit3rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit3rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	case LeapExercises::Digit4:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit4rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit4rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	case LeapExercises::Digit5:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit5rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit5rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	case LeapExercises::Digit6:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit6rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit6rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	case LeapExercises::Digit7:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit7rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit7rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	case LeapExercises::Digit8:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit8rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit8rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	case LeapExercises::Digit9:
		if (testType == TestTypes::LeapHand)	pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",  preResult, "\\TestDigit9rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		if (testType == TestTypes::LeapTools)	pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", preResult, "\\TestDigit9rep", System::Convert::ToString((leapCounter / 10) + 1),".txt");
		break;
	default: break;

	}

	return pathDestiny;
}

String^ WacomTabletApplication::TestManager::getPathToDestinationFile_Signatures() {

	String^ preResult;
	String^ pathDestiny;

	preResult = String::Concat(patientName, "\\TestDay", System::Convert::ToString((*testTime).wDay), "-", System::Convert::ToString((*testTime).wMonth), "-", System::Convert::ToString((*testTime).wYear));
	if (trialNumber > 1) preResult = String::Concat(preResult, " (", System::Convert::ToString(trialNumber), ")");

	switch (CurrentTest_Signatures)
	{
	case SignatureExercises::Task1: pathDestiny = String::Concat(L"Patients Records\\SIGNATURES\\", preResult, "\\Task1rep", System::Convert::ToString(signatureCounter % SIGNATURES_PER_EXERCISE),".txt"); break;
	case SignatureExercises::Task2: pathDestiny = String::Concat(L"Patients Records\\SIGNATURES\\", preResult, "\\Task2rep", System::Convert::ToString(signatureCounter % SIGNATURES_PER_EXERCISE),".txt"); break;
	case SignatureExercises::Task3: pathDestiny = String::Concat(L"Patients Records\\SIGNATURES\\", preResult, "\\Task3rep", System::Convert::ToString(signatureCounter % SIGNATURES_PER_EXERCISE),".txt"); break;
	default: break;

	}

	return pathDestiny;
}




void WacomTabletApplication::TestManager::startRecordingExercise_Broca() {

	if (FindWindow(L"WacomRecorderWClass", L"Wacom Tablet Recorder")) return;

	String^ pathPrev = getPathToDestinationFile_Broca();
	std::string filePath = msclr::interop::marshal_as<std::string>(pathPrev);
	
	
	if (fileExists(filePath)) {
		if (MessageBox::Show("Ce test est déjà enregistré. Voulez-vous écraser l'enregistrement?",
			"Écraser Enregistrement", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) return;
	
	}


	switch (CurrentTest_Broca)
	{
	case BrocaExercises::Task0A:	launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task0B:	launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task1:		launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task2:		launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task3:		launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task4:		launchWacomRecording(TIME_LIMIT_15SEG_WACOM);	waitingWacomRecorder(); createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task5:		launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task6:		launchWacomRecording(TIME_LIMIT_15SEG_WACOM);	waitingWacomRecorder(); createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task7:		launchWacomRecording(TIME_LIMIT_15SEG_WACOM);	waitingWacomRecorder(); createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task8:		launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task9:		launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task10:	launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task11:	launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	case BrocaExercises::Task12:	launchWacomRecording(NO_TIME_LIMIT_WACOM);		break;
	default: break;
	}
		
}

void WacomTabletApplication::TestManager::startRecordingExercise_Leap() {

	if (myLeapListener == nullptr) {
		myLeapListener = new SampleListener();

		if (testType == TestTypes::LeapHand) 	myLeapListener->type = TypeLeap::Hand;
		if (testType == TestTypes::LeapTools)	myLeapListener->type = TypeLeap::Tool;

		myController->addListener(*myLeapListener);
		myController->setPolicy(Leap::Controller::POLICY_BACKGROUND_FRAMES);
	}
}

void WacomTabletApplication::TestManager::startRecordingExercise_Signatures() {

	if (FindWindow(L"WacomRecorderWClass", L"Wacom Tablet Recorder")) return;

	String^ pathPrev = getPathToDestinationFile_Signatures();
	std::string filePath = msclr::interop::marshal_as<std::string>(pathPrev);


	if (fileExists(filePath)) {
		if (MessageBox::Show("Ce test est déjà enregistré. Voulez-vous écraser l'enregistrement?",
			"Écraser Enregistrement", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) return;
	}

	launchWacomRecording(NO_TIME_LIMIT_WACOM);

}



void WacomTabletApplication::TestManager::stopRecordingExercise_Broca() {

	if (!FindWindow(L"WacomRecorderWClass", L"Wacom Tablet Recorder")) return;

	switch (CurrentTest_Broca)
	{
	case BrocaExercises::Task0A:	killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task0B:	killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task1:		killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task2:		killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task3:		killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task4:
		//launchWacomRecording(TIME_LIMIT_15SEG_WACOM);
		break;
	case BrocaExercises::Task5:		killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task6:
		//launchWacomRecording(TIME_LIMIT_15SEG_WACOM);
		break;
	case BrocaExercises::Task7:
		//launchWacomRecording(TIME_LIMIT_15SEG_WACOM);
		break;
	case BrocaExercises::Task8:		killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task9:		killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task10:	killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	case BrocaExercises::Task11:	killWacomRecording();	createRecordResultsFile_Broca(); runAndWaitVisualizer(); break;
	default: break;
	}

}

void WacomTabletApplication::TestManager::stopRecordingExercise_Leap() {

	if (myLeapListener != nullptr) {
		switch (CurrentTest_Leap)
		{
		case LeapExercises::Digit0:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		case LeapExercises::Digit1:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		case LeapExercises::Digit2:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		case LeapExercises::Digit3:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		case LeapExercises::Digit4:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		case LeapExercises::Digit5:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		case LeapExercises::Digit6:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		case LeapExercises::Digit7:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		case LeapExercises::Digit8:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		case LeapExercises::Digit9:	killLeapRecording();	createRecordResultsFile_Leap(); break;
		default: break;
		}
	}
	myLeapListener = nullptr;

}

void WacomTabletApplication::TestManager::stopRecordingExercise_Signatures() {

	if (!FindWindow(L"WacomRecorderWClass", L"Wacom Tablet Recorder")) return;

	killWacomRecording();	
	createRecordResultsFile_Signatures();
	runAndWaitVisualizer(); 

}



void WacomTabletApplication::TestManager::createRecordResultsFile_Broca() {

	msclr::interop::marshal_context context;

	String^ destinationFilePath = getPathToDestinationFile_Broca();
	String^ patientInfoFilePath = getPathToDestinationPatientInfo();

	LPCTSTR destFile = context.marshal_as<const TCHAR*>(destinationFilePath);
	LPCTSTR infoFile = context.marshal_as<const TCHAR*>(patientInfoFilePath);


	CopyFile(infoFile, destFile, false);
	ofstream fout(destFile, std::ios::out | std::ofstream::app);
	ifstream ifile("lastRecording.txt", std::ios::in);

	switch (CurrentTest_Broca)
	{
	case BrocaExercises::Task0A:	fout << endl << "Exercise 0A: Sign Consent Form 1" << endl << endl; break;
	case BrocaExercises::Task0B:	fout << endl << "Exercise 0B: Sign Consent Form 2" << endl << endl; break;
	case BrocaExercises::Task1:		fout << endl << "Exercise 1: Copying a Text" << endl << endl; break;
	case BrocaExercises::Task2:		fout << endl << "Exercise 2: Free Writing" << endl << endl; break;
	case BrocaExercises::Task3:		fout << endl << "Exercise 3: Drawing Loops" << endl << endl; break;
	case BrocaExercises::Task4:		fout << endl << "Exercise 4: Fitts' Test" << endl << endl; break;
	case BrocaExercises::Task5:		fout << endl << "Exercise 5: Drawing Spiral" << endl << endl; break;
	case BrocaExercises::Task6:		fout << endl << "Exercise 6: Drawing Circles" << endl << endl; break;
	case BrocaExercises::Task7:		fout << endl << "Exercise 7: Static Pen" << endl << endl; break;
	case BrocaExercises::Task8:		fout << endl << "Exercise 8: Imposed Envelope" << endl << endl; break;
	case BrocaExercises::Task9:		fout << endl << "Exercise 9: Free Envelope" << endl << endl; break;
	case BrocaExercises::Task10:	fout << endl << "Exercise 10: Imposed Check" << endl << endl; break;
	case BrocaExercises::Task11:	fout << endl << "Exercise 11: Free Check" << endl << endl; break;
	case BrocaExercises::Task12:	fout << endl << "Exercise 12: Scene Description" << endl << endl; break;
	default: break;
	}

	if (ifile.is_open()) fout << ifile.rdbuf();

	fout.close();
	ifile.close();

}

void WacomTabletApplication::TestManager::createRecordResultsFile_Leap() {

	msclr::interop::marshal_context context;

	String^ destinationFilePath = getPathToDestinationFile_Leap();
	String^ patientInfoFilePath = getPathToDestinationPatientInfo();

	LPCTSTR destFile = context.marshal_as<const TCHAR*>(destinationFilePath);
	LPCTSTR infoFile = context.marshal_as<const TCHAR*>(patientInfoFilePath);


	CopyFile(infoFile, destFile, false);
	ofstream fout(destFile, std::ios::out | std::ofstream::app);
	ifstream ifile("lastRecording.txt", std::ios::in);

	switch (CurrentTest_Leap)
	{
	case LeapExercises::Digit0:	fout << endl << "Digit 0" << endl << endl; break;
	case LeapExercises::Digit1:	fout << endl << "Digit 1" << endl << endl; break;
	case LeapExercises::Digit2:	fout << endl << "Digit 2" << endl << endl; break;
	case LeapExercises::Digit3:	fout << endl << "Digit 3" << endl << endl; break;
	case LeapExercises::Digit4:	fout << endl << "Digit 4" << endl << endl; break;
	case LeapExercises::Digit5:	fout << endl << "Digit 5" << endl << endl; break;
	case LeapExercises::Digit6:	fout << endl << "Digit 6" << endl << endl; break;
	case LeapExercises::Digit7:	fout << endl << "Digit 7" << endl << endl; break;
	case LeapExercises::Digit8:	fout << endl << "Digit 8" << endl << endl; break;
	case LeapExercises::Digit9:	fout << endl << "Digit 9" << endl << endl; break;
	default: break;
	}

	if (ifile.is_open()) {
		std::string line1;	
		std::string line2;

		std::getline(ifile, line1);
		std::getline(ifile, line2);
		
		while (line1 != "" && line2 != "" && !ifile.eof()) {
			fout << line1 << endl;
			line1 = line2;
			std::getline(ifile, line2);
		}
	} 

	fout.close();
	ifile.close();
}

void WacomTabletApplication::TestManager::createRecordResultsFile_Signatures() {

	msclr::interop::marshal_context context;

	String^ destinationFilePath = getPathToDestinationFile_Signatures();
	String^ patientInfoFilePath = getPathToDestinationPatientInfo();

	LPCTSTR destFile = context.marshal_as<const TCHAR*>(destinationFilePath);
	LPCTSTR infoFile = context.marshal_as<const TCHAR*>(patientInfoFilePath);


	CopyFile(infoFile, destFile, false);
	ofstream fout(destFile, std::ios::out | std::ofstream::app);
	ifstream ifile("lastRecording.txt", std::ios::in);

	switch (CurrentTest_Signatures)
	{
	case SignatureExercises::Task1:	fout << endl << "Signature" << endl << endl; break;
	case SignatureExercises::Task2:	fout << endl << "Initials" << endl << endl; break;
	case SignatureExercises::Task3:	fout << endl << "Invented Signature" << endl << endl; break;
	default: break;
	}

	if (ifile.is_open()) fout << ifile.rdbuf();

	fout.close();
	ifile.close();

}




void WacomTabletApplication::TestManager::waitingWacomRecorder() {
	while (FindWindow(L"WacomRecorderWClass", L"Wacom Tablet Recorder")) Sleep(100);
}

void WacomTabletApplication::TestManager::launchWacomRecording(int RecordTime) {
	
	HINSTANCE hInstance;
	HINSTANCE hPrevInstance;
	LPSTR lpCmdLine;
	HWND thisWindow;

	if (!FindWindow(L"WacomRecorderWClass", L"Wacom Tablet Recorder")) {
		thisWindow = GetActiveWindow();
		SetWindowPos(thisWindow, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE);
		TabletLaunch(hInstance, hPrevInstance, lpCmdLine, RecordTime);
	}

}

void WacomTabletApplication::TestManager::killWacomRecording() {

	HWND hWnd;
	hWnd = FindWindow(L"WacomRecorderWClass", L"Wacom Tablet Recorder");
	SendMessage(hWnd, WM_DESTROY, 0, 0L);
	DestroyWindow(hWnd);

}

void WacomTabletApplication::TestManager::killLeapRecording() {

	myController->removeListener(*myLeapListener);
	Sleep(1000);
	free(myLeapListener);

}


String^ WacomTabletApplication::TestManager::getPathToDestinationPatientInfo() {

	String^ pathDestiny;

	if (testType == TestTypes::Broca_Arab)		pathDestiny = String::Concat(L"Patients Records\\HW-ARAB\\",	patientName, "\\Info.txt");
	if (testType == TestTypes::Broca_French)	pathDestiny = String::Concat(L"Patients Records\\HW-FRENCH\\",	patientName, "\\Info.txt");
	if (testType == TestTypes::LeapHand)		pathDestiny = String::Concat(L"Patients Records\\LEAP-HAND\\",	patientName, "\\Info.txt");
	if (testType == TestTypes::LeapTools)		pathDestiny = String::Concat(L"Patients Records\\LEAP-TOOLS\\", patientName, "\\Info.txt");
	if (testType == TestTypes::Signatures)		pathDestiny = String::Concat(L"Patients Records\\SIGNATURES\\", patientName, "\\Info.txt");

	return pathDestiny;
}

BOOL WacomTabletApplication::TestManager::fileExists(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

void WacomTabletApplication::TestManager::runAndWaitVisualizer() {

	//char *a = "E:\\Dropbox\\Visual Studio Projects\\WacomTabletApplication\\Debug\\WacomTabletApplication.exe";
	//char *a = "aName.exe";
	//char *a = "E:\\Dropbox\\Visual Studio Projects\\HW Software Release 2.0\\Source Code\\Visualizer\\Debug\\Visualizer.exe";

	//char *b[2];
	//b[0] = a;
	//plotLastRecording(1, b);
	
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));


	if (CreateProcess(L"PlotTools\\Visualizer.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
		WaitForSingleObject(pi.hProcess, INFINITE);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}

}