#ifndef PVZOBJECT_H
#define PVZOBJECT_H
#include <QString>
#include <QLabel>
class PvzObject :public QLabel
{
public:
    PvzObject();
    bool isDead = false, lootDropped = true, isShown = true;
    float atk, def, hp = 1, *dropChance;
    QString *deathLootTable;
    int frozenTick = 0;
    int Pos[2] = {0}, Motion[2] = {0};
};

#endif // PVZOBJECT_H
