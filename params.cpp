#include "params.h"

// Getters
int Params::getGrade() const{
    if (isFreshman){
        return FRESHMAN_SCORE;
    } else if (isSophomore){
        return SOPHOMORE_SCORE;
    } else if (isJunior){
        return JUNIOR_SCORE;
    } else if (isSenior){
        return SENIOR_SCORE;
    }
}

bool Params::getProbation() const{
    return (hasBeenProbated);
}

int Params::getTAOrRA() const{
    
    if (isTA && isRA){
        std::cout << "Warning - set as TA and RA which is invalid" << std::endl;
        return 0;
    }
    
    if (isTA){
        return TA_SCORE;
    } else if (isRA){
        return RA_SCORE;
    }
}

int Params::getAthlete() const{
    if (isAthlete){
        return ATHLETE_SCORE;
    }
}

int Params::setGrade(string grade){
    isFreshman = false;
    isSophomore = false;
    isJunior = false;
    isSenior = false;
    isGrad = false;
    
    string parsedGrade = parseString(grade);
    if (parsedGrade == "freshman"){
        isFreshman = true;
        return FRESHMAN_SCORE;
    } else if (parsedGrade == "sophomore"){
        isSophomore = true;
        return SOPHOMORE_SCORE;
    } else if (parsedGrade == "junior"){
        isJunior = true;
        return JUNIOR_SCORE;
    } else if (parsedGrade == "senior"){
        isSenior = true;
        return SENIOR_SCORE;
    } else if (parsedGrade == "grad" || parsedGrade == "graduate"){
        isGrad = true;
        return GRAD_SCORE;
    } else {
        std::cout << "No valid grade entered" << std::endl;
        return 0;
    }
}

int Params::setProbation(){

}

int Params::setTAOrRA(string position){
    isTA = false;
    isRA = false;
    string parsed = parseString(position);
    if (parsed == "ta"){
        isTA = true;
        return TA_SCORE;
    } else if (parsed == "ra"){
        isRA = true;
        return RA_SCORE;
    } else {
        std::cout << "No valid entry" << std::endl;
        return 0;
    }
}

int Params::setAthlete(string command){
    isAthlete = false;
    string parsed = parseString(command);
    if (parsed == "yes"){
        isAthlete = true;
        return ATHLETE_SCORE;
    } else if (parsed != "no"){
        std::cout << "No valid entry" << std::endl;
    }
    return 0;
}

string Params::parseString(string original){
    string parsed;
    for (char c : original){
        if (c == ' '){
            parsed += tolower(c);
        }
    }
    return parsed;
}