#pragma once
class Engine
{
public:
    virtual void Init();

    virtual void Tick();

    virtual void Loop();

    virtual void Exit();
};

