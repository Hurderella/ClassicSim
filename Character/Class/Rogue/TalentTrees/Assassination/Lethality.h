#ifndef LETHALITY_H
#define LETHALITY_H

#include "Talent.h"

class Backstab;
class SinisterStrike;
class TalentTree;

class Lethality: public Talent {
public:
    Lethality(Character *pchar, TalentTree* tree);

private:
    Backstab* backstab;
    SinisterStrike* sinister_strike;

    void apply_rank_effect() override;
    void remove_rank_effect() override;
};

#endif // LETHALITY_H
