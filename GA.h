//
// Created by NaturalVStudio on 2020/11/24.
//

#ifndef GA_01BAG_GA_H
#define GA_01BAG_GA_H
#include <random>
#include <ctime>

class GA {
private: //memory
    static const int MaxPopulation = 300;
    static const int MaxDNALength = 1010;
public:
    struct DNAtype{ //detailed data of DNA
        bool gene[MaxDNALength] = {false}; //gene list
        /*Encode agreement: each bit represent the corresponding item,
         * 0 for not choose, 1 for choose*/
    };
    DNAtype DNA[MaxPopulation]; //population

    int Population = 250;
    int DNALength = 8;
    int TargetGeneration = 100000;
    int BestValue = 0, BestGeneration = 0;
    DNAtype BestSolution;
    int MaxWeight = 100;

    double BeginCrossProbability = 0.9;
    double BeginMutationProbability = 0.3;
    double EndCrossProbability = 0.015;
    double EndMutationProbability = 0.004;
    double CrossProbability;
    double MutationProbability;

    //int weight[MaxDNALength] = {30, 40, 20, 5, 15, 60, 25, 10};
    //int value[MaxDNALength] = {47, 30, 9, 8, 15, 66, 12, 11};
    int weight[MaxDNALength];
    int value[MaxDNALength];

public:
    GA();
    ~GA();
    double GetFitness(bool[]);
    double Critical(bool[]);
    void Iteration();
    void Variation();
    void Selection();
    void Crossover();
};


#endif //GA_01BAG_GA_H
