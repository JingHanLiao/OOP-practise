#include "ShapeAnimator.cpp"
int main()
{
    // Create a tent and a box
    shared_ptr<Box2> box2 = make_shared<Box2>(0, 0, 4, 4);
    shared_ptr<Box> box1 = make_shared<Box>(0, 30, 4, 4);
    // Draw the tent and the box
    box2->draw();
    box1->draw();
    // Set direction of motion for the two shapes
    box2->setDirection(0, 1);  // Tent moves straight up
    box1->setDirection(0, -1);    // Box moves horizontally to the right

    // Simultaneously move the tent and the box
    for (int k = 0; k < 13; k++)
    {
        Sleep(75);
        box2->move();
        Sleep(75);
        box1->move();
    }

    box2->setDirection(0, -1);  // Tent moves straight up
    box1->setDirection(0, 1);

    for (int k = 0; k < 12; k++)
    {
        Sleep(75);
        box2->move();
        Sleep(75);
        box1->move();
    }

    return 0;
}

