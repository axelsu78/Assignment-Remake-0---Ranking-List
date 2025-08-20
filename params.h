#pragma once

#include <string>

using string = std::string;

class Params {

    // Grade Values
    const int FRESHMAN_SCORE = 5;
    const int SOPHOMORE_SCORE = 4;
    const int JUNIOR_SCORE = 3;
    const int SENIOR_SCORE = 2;
    const int GRAD_SCORE = 1;
    // Age Basemark Value
    const int OLDEST_AGE_BASEMARK_SCORE = 30;
    // Probation Values
    const int ACADEMIC_PROBATION_SCORE = -1;
    const int SUSPENSION_SCORE = -2;
    // TA / RA Values
    const int TA_SCORE = 3;
    const int RA_SCORE = 10;
    // Student Athlete Score
    const int ATHLETE_SCORE = 3;

    private:

    // Grade Flags
    bool isFreshman = false;
    bool isSophomore = false;
    bool isJunior = false;
    bool isSenior = false;
    bool isGrad = false;
    // Probation Flags
    bool hasBeenProbated;
    bool hasProbation;
    bool hasSuspension;
    // TA/RA Flags
    bool isTA;
    bool isRA;
    // Student Athlete Flags;
    bool isAthlete;

    public:

    int getGrade() const;
    int getProbation() const;
    int getTAOrRA() const;
    int getAthlete() const;

    int setGrade();
    int setProbation();
    int setTAOrRA();
    int setAthlete();
    
};