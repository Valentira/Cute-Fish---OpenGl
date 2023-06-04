#include <gl/glut.h>
#include <math.h>

const double PI = 3.141;
int i,radius, jumlah_titik, x_tengah, y_tengah;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    //--------------Background Gradasi----------------------------------
   glBegin(GL_QUADS);
   // Warna sudut kiri atas (biru muda)
   glColor3f(0.4, 0.6, 1.0);
   glVertex2f(-1.0, 1.0);

   // Warna sudut kanan atas (biru tua)
   glColor3f(0.0, 0.2, 0.6);
   glVertex2f(1.0, 1.0);

   // Warna sudut kanan bawah (biru tua)
   glColor3f(0.0, 0.2, 0.6);
   glVertex2f(1.0, -1.0);

   // Warna sudut kiri bawah (biru muda)
   glColor3f(0.4, 0.6, 1.0);
   glVertex2f(-1.0, -1.0);
   glEnd();

   //----------------------Ekor------------------------
    // ekor (merah)
    glBegin(GL_TRIANGLES);
    glColor3f(0.86, 0.01, 0.01);
    glVertex2f(-0.9, -0.7);
    glVertex2f(-0.9, 0.7);
    glVertex2f(0.0, 0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1, 0.26, 0);
    glVertex2f(-0.9, 0.6);
    glVertex2f(-0.9, 0.3);
    glVertex2f(0.0, 0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1, 0.26, 0);
    glVertex2f(-0.9, 0.2);
    glVertex2f(-0.9, -0.1);
    glVertex2f(0.0, 0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1, 0.26, 0);
    glVertex2f(-0.9, -0.2);
    glVertex2f(-0.9, -0.6);
    glVertex2f(0.0, 0.0);
    glEnd();
    //----------------------------------------------------
    //lengkungan....
    glColor3f(0.4, 0.6, 1.0);
    glBegin(GL_POLYGON);
    radius = 110;
    jumlah_titik = 60;
    x_tengah = -180;
    y_tengah = 0;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    //----------------------------------------------------

    //sirip atas
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.1, 0.6);  // Titik atas kiri
    glVertex2f(-0.0, -0.0); // Titik bawah kiri
    glVertex2f(0.6, 0.2);   // Titik kanan bawah
    glEnd();

    //Badan Ikan 
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    radius = 43;
    jumlah_titik = 60;
    x_tengah = 25;
    y_tengah = 0;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    //sirip merah 
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0); 
    glVertex2f(-0.2, 0.2);  // Titik atas kiri
    glVertex2f(-0.2, -0.2); // Titik bawah kiri
    glVertex2f(0.1, 0.0);   //kiri bawah
    glEnd();

    //-------------------------bagian mata kanan---------------------
    //Mata Ikan (putih)
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    radius = 16;
    jumlah_titik = 60;
    x_tengah = 60;
    y_tengah = -1;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    
    //Mata Ikan (hitam)
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    radius = 10;
    jumlah_titik = 60;
    x_tengah = 61;
    y_tengah = -1;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    glFlush();

    //Mata Ikan (putih)
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    radius = 4;
    jumlah_titik = 60;
    x_tengah = 65;
    y_tengah = 3;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    //-------------------bagian mata kiri-----------------------

    //Mata Ikan (putih) kiri
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    radius = 16;
    jumlah_titik = 60;
    x_tengah = 30;
    y_tengah = -1;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();


    //Mata Ikan (hitam)
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    radius = 10;
    jumlah_titik = 60;
    x_tengah = 31;
    y_tengah = -1;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    glFlush();

    //Mata Ikan (putih)
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    radius = 4;
    jumlah_titik = 60;
    x_tengah = 35;
    y_tengah = 3;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    //mulut
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.4, -0.2);  // Titik atas kiri
    glVertex2f(0.5, -0.3); // Titik bawah kiri
    glVertex2f(0.6, -0.2);   //kiri bawah
    glEnd();

    //--------------bubble--------------
	//1
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
	radius=10;
	jumlah_titik=20;
	x_tengah=80;
	y_tengah=50;
	for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
		glVertex2f(x/100,y/100);
	}
	glEnd();
    
    //2
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
	radius=6;
	jumlah_titik=20;
	x_tengah=74;
	y_tengah=32;
	for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
		glVertex2f(x/100,y/100);
	}
	glEnd();

    //3
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
	radius=3;
	jumlah_titik=20;
	x_tengah=86;
	y_tengah=35;
	for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
		glVertex2f(x/100,y/100);
	}
	glEnd();


    //1
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
	radius=10;
	jumlah_titik=20;
	x_tengah=80;
	y_tengah=9;
	for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
		glVertex2f(x/100,y/100);
	}
	glEnd();
    
    //2
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
	radius=5;
	jumlah_titik=20;
	x_tengah=88;
	y_tengah=-8;
	for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
		glVertex2f(x/100,y/100);
	}
	glEnd();

    //3
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
	radius=3;
	jumlah_titik=20;
	x_tengah=76;
	y_tengah=-7;
	for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
		glVertex2f(x/100,y/100);
	}
	glEnd();

    //4
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
	radius=3;
	jumlah_titik=20;
	x_tengah=80;
	y_tengah=-19;
	for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
		glVertex2f(x/100,y/100);
	}
	glEnd();
    //-------------------------------------------------

    //pasir 
    glColor3f(1, 0.85, 0.54);
    glBegin(GL_POLYGON);
    radius = 150;
    jumlah_titik = 60;
    x_tengah = -70;
    y_tengah =-230;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    glColor3f(1, 0.85, 0.54);
    glBegin(GL_POLYGON);
    radius = 150;
    jumlah_titik = 60;
    x_tengah = 0;
    y_tengah =-230;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    glColor3f(1, 0.85, 0.54);
    glBegin(GL_POLYGON);
    radius = 150;
    jumlah_titik = 60;
    x_tengah = 70;
    y_tengah =-230;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    //------------komponen---------------
    //1
    glColor3f(1, 0, 0.27);
    glBegin(GL_POLYGON);
    radius = 5;
    jumlah_titik = 60;
    x_tengah = 45;
    y_tengah = -89;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    glColor3f(1, 0, 0.27);
    glBegin(GL_POLYGON);
    radius = 5;
    jumlah_titik = 60;
    x_tengah = 45;
    y_tengah = -98;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
  
    //2
    glBegin(GL_POLYGON);
    glColor3f(1, 0.1, 0.34);
    radius = 5;
    jumlah_titik = 60;
    x_tengah = 45;
    y_tengah = -79;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    //3
    glColor3f(1, 0.3, 0.49);
    glBegin(GL_POLYGON);
    radius = 4;
    jumlah_titik = 60;
    x_tengah = 47;
    y_tengah = -70;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    //4
    glColor3f(0.99, 0.47, 0.61);
    glBegin(GL_POLYGON);
    radius = 3;
    jumlah_titik = 60;
    x_tengah = 48;
    y_tengah = -63;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    //------------kom.2----------
    //1
    glColor3f(1, 0, 0.27);
    glBegin(GL_POLYGON);
    radius = 5;
    jumlah_titik = 60;
    x_tengah = 35;
    y_tengah = -99;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
  
    //2
    glBegin(GL_POLYGON);
    glColor3f(1, 0.1, 0.34);
    radius = 5;
    jumlah_titik = 60;
    x_tengah = 35;
    y_tengah = -89;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    //3
    glColor3f(1, 0.3, 0.49);
    glBegin(GL_POLYGON);
    radius = 4;
    jumlah_titik = 60;
    x_tengah = 37;
    y_tengah = -80;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    //4
    glColor3f(0.99, 0.47, 0.61);
    glBegin(GL_POLYGON);
    radius = 3;
    jumlah_titik = 60;
    x_tengah = 38;
    y_tengah = -73;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    //ac.batu
    glColor3f(0, 0.76, 0.09);
    glBegin(GL_POLYGON);
    radius = 5;
    jumlah_titik = 60;
    x_tengah = -42;
    y_tengah = -80;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    glColor3f(0, 0.76, 0.09);
    glBegin(GL_POLYGON);
    radius = 4;
    jumlah_titik = 60;
    x_tengah = -48;
    y_tengah = -75;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    //---------------batu
    glColor3f(0.22, 0.21, 0.21);
    glBegin(GL_POLYGON);
    radius = 11;
    jumlah_titik = 60;
    x_tengah = -45;
    y_tengah = -92;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    glColor3f(0.22, 0.21, 0.21);
    glBegin(GL_POLYGON);
    radius = 15;
    jumlah_titik = 60;
    x_tengah = -60;
    y_tengah = -88;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    //acc.batu pink 
    //1
    glColor3f(1, 0, 0.27);
    glBegin(GL_POLYGON);
    radius = 5;
    jumlah_titik = 60;
    x_tengah = -65;
    y_tengah = -88;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();

    glColor3f(1, 0, 0.27);
    glBegin(GL_POLYGON);
    radius = 5;
    jumlah_titik = 60;
    x_tengah = -65;
    y_tengah = -98;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
  
    //2
    glBegin(GL_POLYGON);
    glColor3f(1, 0.1, 0.34);
    radius = 5;
    jumlah_titik = 60;
    x_tengah = -60;
    y_tengah = -79;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    //3
    glColor3f(1, 0.3, 0.49);
    glBegin(GL_POLYGON);
    radius = 4;
    jumlah_titik = 60;
    x_tengah = -57;
    y_tengah = -70;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    //4
    glColor3f(0.99, 0.47, 0.61);
    glBegin(GL_POLYGON);
    radius = 3;
    jumlah_titik = 60;
    x_tengah = -58;
    y_tengah = -63;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(400,400);
    glutCreateWindow("Lingkaran");
    glClearColor(1.0, 1.0, 1.0, 1.0);  // Warna latar belakang putih
    glutDisplayFunc(display);
    glEnd();
    glutMainLoop();
    return 4;
}