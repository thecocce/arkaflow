#ifndef __LEVEL_6_H__
#define __LEVEL_6_H__

#include "EngineHelper.h"
#include "BaseLevel.h"
#include "Element/Target.h"
#include "Element/Ring.h"

class Level6 : public BaseLevel
{
public:
    virtual bool init();  
	virtual void restart();
	virtual void update(float);
	virtual int getLevel(){return 6;};
    CREATE_FUNC(Level6); 
private:
	Ring* ring1;
	Ring* ring2;
	Ring* ring3;
	Ring* ring4;
};

#endif // __LEVEL_6_H__