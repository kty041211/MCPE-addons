#pragma once

#include "PathfinderMob.h"

// Size : 3216
class AgableMob : public PathfinderMob
{
public:
	int age;	// 3204

public:
	AgableMob(TileSource &);
	virtual ~AgableMob();
	virtual void getShadowRadius() const;
	virtual void setSize(float, float);
	virtual void readAdditionalSaveData(const CompoundTag *);
	virtual void addAdditionalSaveData(CompoundTag *);
	virtual void aiStep();
	virtual void isBaby() const;
	int getAge();
	bool getAnimalFlag(int);
	void internalSetSize(float);
	void setAge(int);
	void setAnimalFlag(int, bool);
	void updateSize(bool);
};
