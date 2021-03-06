#include "Player.h"
#include <QGraphicsObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QSize>
#include <QTimer>
#include <QKeyEvent>
#include "PlayAgain.h"
#include "Enemy.h"
#include "WomanEnemy.h"
#include "Zombie.h"
#include "Robot.h"
#include "Game.h"
#include <QDebug>
#include <QTimer>
#include <QPainter>
#include <stdlib.h>
extern Game * game;
void Player::spawn(){

    if(!game->pause && game->started){
        // Koliko kojih protivnika se stvara
        int randEnemy = rand()% 5 + 1;
        int randRobot = rand()% 5 + 1;
        int randWomen = rand()% 5 + 1;
        int randZombie = rand()% 5 + 1;
        // Pravimo protivnike
        for (int i = 0; i < randEnemy; i++){
        Enemy * enemy = new Enemy();
        scene()->addItem(enemy);
        }
        // Pravimo robota
        for (int i = 0; i < randRobot; i++){
        Robot * robot = new Robot();
        scene()->addItem(robot);
        }
        // Pravimo neprijatelja
        for (int i = 0; i < randWomen; i++){
        WomanEnemy * woman = new WomanEnemy();
        scene()->addItem(woman);
        }
        //Pravimo zombije
        for(int i = 0; i<randZombie;i++)
        {
        Zombie * zombie = new Zombie();
        scene()->addItem(zombie);
        }
    }

}




