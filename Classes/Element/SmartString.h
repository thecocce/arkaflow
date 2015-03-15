#ifndef _SMARTSTRING_H_
#define _SMARTSTRING_H_

#include "cocos2d.h"
#include "MainBall.h"

#define SS_SPEEDRATIO 4
#define SS_ANI_MOVING 20.0f
class SmartString : public cocos2d::Sprite
{
    public:
        SmartString();
        ~SmartString();
        static SmartString* create();
		void go();
		void _update();
		virtual void setPosition(const cocos2d::Vec2& pos);
		virtual void setPositionY(float y);
		void setStartingPoint(const cocos2d::Vec2& p);
		void setEndingPoint(const cocos2d::Vec2& p);
		void setWidth(int w);
		void setColors(int color);
		void setOpacity(GLubyte opacity);
		float getRadius();
		float getMaxWidth();
		float getSpeed();
		float getWidth();
		bool isEnemy;
		cocos2d::Vec2 m_startingPoint;
		int checkCollision(MainBall *wheel);

    private:
		cocos2d::Sprite* m_middle;
		cocos2d::Sprite* m_right;
		cocos2d::Sprite* m_leftInner;
		cocos2d::Sprite* m_middleInner;
		cocos2d::Sprite* m_rightInner;
		void initOpt();
		void _updatePosition();
		bool m_isGoing;
		long m_tick;
		int m_width;
		float m_speed;

};

#endif // _SMARTSTRING_H_
