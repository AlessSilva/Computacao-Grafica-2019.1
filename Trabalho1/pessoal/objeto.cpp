#include "objeto.h"

Objeto::Objeto( int t ){
    tipo = t;
}

void Objeto::desenha() {
    glTranslatef(t.x,t.y,t.z);
    glRotatef(a.z,0,0,1);
    glRotatef(a.y,0,1,0);
    glRotatef(a.x,1,0,0);
    if( origem ){
        GUI::drawOrigin(2);
    }
    glScalef(s.x,s.y,s.z);
}
