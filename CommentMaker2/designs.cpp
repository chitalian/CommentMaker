#include <designs.h>
#include <mainwindow.h>



void designs::printDesign_0(QString * text,int sizex, int indent, bool * overLoad,char fill)
{
    int j = 0;
    int index = 0;


    //each loop in the do_while can be thought of an individual line
    do
    {
        text->insert(j,fill);//left line of *
        text->insert(j,fill);

        for(int i=0; i<indent;i++)//this will insert how much indent
            text->insert(j+2," ");

        index = text->indexOf("\n", j);//finds where the next \n is and finds its place and puts it into index

        for (int i = index; i<(j + sizex); i++)//this adds the correct amount of spacing between the text and the right column of *
            text->insert(index," ");

        text->insert(j+sizex,fill);//right line of *
        text->insert(j+sizex,fill);

        j += sizex+3;

        //if ((j-index) >= sizex && index != -1) // checks to make sure the text inputed does not exceed the size.
        if (index+indent-1>j)
            *overLoad = true;
    }while(index != -1);

    //Top line:
    text->insert(0,"/*");
    for (int i = 2; i<sizex+2; i++)
        text->insert(2,fill);
    text->insert(sizex+2,"\n");


    //Bottom Line:
    *text += "\n";
    for (int i = 1; i<sizex+2; i++)
        *text += fill;
    *text += "*/";
}


void designs::printDesign_1(QString * text,int sizex, int indent, bool * overLoad,char fill)
{
    int j = 0;
    int index = 0;


    //each loop in the do_while can be thought of an individual line
    do
    {
        text->insert(j,fill);//left line of *
        text->insert(j,fill);

        for(int i=0; i<indent;i++)//this will insert how much indent
            text->insert(j+2," ");

        index = text->indexOf("\n", j);//finds where the next \n is and finds its place and puts it into index

        for (int i = index; i<(j + sizex); i++)//this adds the correct amount of spacing between the text and the right column of *
            text->insert(index," ");

        text->insert(j+sizex,fill);//right line of *
        text->insert(j+sizex,fill);

        j += sizex+3;

        //if ((j-index) >= sizex && index != -1) // checks to make sure the text inputed does not exceed the size.
        if (index+indent-1>j)
            *overLoad = true;
    }while(index != -1);

    //Top line:
    text->insert(0,"/*\n");
    for (int i = 2; i<sizex+4; i++)
        text->insert(3,fill);
    text->insert(sizex+5,"\n");


    //Bottom Line:
    *text += "\n";
    for (int i = 1; i<sizex+3; i++)
        *text += fill;
    *text += "\n*/";
}



void designs::printDesign_2(QString * text,int sizex, int indent, bool * overLoad, char fill)
{
    int j = 0;
    int index = 0;
    //each loop in the do_while can be thought of an individual line
    do
    {
        for(int i=0; i<indent;i++)//this will insert how much indent
            text->insert(j," ");

        index = text->indexOf("\n", j);//finds where the next \n is and finds its place and puts it into index

        for (int i = index; i<(j + sizex); i++)//this adds the correct amount of spacing between the text and the right column of *
            text->insert(index," ");

        text->insert(j+sizex,fill);//right line of *
        text->insert(j+sizex,fill);
        text->insert(j+sizex,"//");

        j += sizex+5;

        if (index+indent-1>j)
            *overLoad = true;
    }while(index != -1);

    //Top line:
    text->insert(0,"//");
    for (int i = 2; i<sizex+4; i++)
        text->insert(2,fill);
    text->insert(sizex+4,"\n");


    //Bottom Line:
    *text += "\n";
    *text += "//";
    for (int i = 1; i<sizex+4; i++)
        *text += fill;

    *text += "\n\n\nNote: This configuration will not comment, this is meant to box in code.";

}



void designs::printDesign_3(QString * text,int sizex, int indent, bool * overLoad,char fill)
{
    int j = 0;
    int index = 0;


    //each loop in the do_while can be thought of an individual line
    do
    {
        text->insert(j,fill);
        text->insert(j,fill);
        text->insert(j,"//");//left line of *

        for(int i=0; i<indent;i++)//this will insert how much indent
            text->insert(j+4," ");

        index = text->indexOf("\n", j);//finds where the next \n is and finds its place and puts it into index

        for (int i = index; i<(j + sizex); i++)//this adds the correct amount of spacing between the text and the right column of *
            text->insert(index," ");

        text->insert(j+sizex,fill);//right line of *
        text->insert(j+sizex,fill);

        j += sizex+3;

        //if ((j-index) >= sizex && index != -1) // checks to make sure the text inputed does not exceed the size.
        if (index+indent+1>j)
            *overLoad = true;
    }while(index != -1);

    //Top line:
    text->insert(0,"//");
    for (int i = 2; i<sizex+2; i++)
        text->insert(2,fill);
    text->insert(sizex+2,"\n");


    //Bottom Line:
    *text += "\n";
    *text += "//";
    for (int i = 1; i<sizex+1; i++)
        *text += fill;

}






void designs::printDesign_4(QString * text,int sizex, int indent, bool * overLoad,char fill)
{
    int j = 0;
    int index = 0;


    //each loop in the do_while can be thought of an individual line
    do
    {
        text->insert(j,"//");//left line of *

        for(int i=0; i<indent;i++)//this will insert how much indent
            text->insert(j+2," ");

        index = text->indexOf("\n", j);//finds where the next \n is and finds its place and puts it into index

        for (int i = index; i<(j + sizex); i++)//this adds the correct amount of spacing between the text and the right column of *
            text->insert(index," ");

        text->insert(j+sizex,fill);//right line of *
        text->insert(j+sizex,fill);

        j += sizex+3;

        //if ((j-index) >= sizex && index != -1) // checks to make sure the text inputed does not exceed the size.
        if (index+indent-1>j)
            *overLoad = true;
    }while(index != -1);

    //Top line:
    text->insert(0,"//");
    for (int i = 2; i<sizex+2; i++)
        text->insert(2,fill);
    text->insert(sizex+2,"\n");


    //Bottom Line:
    *text += "\n";
    *text += "//";
    for (int i = 1; i<sizex+1; i++)
        *text += fill;

}


void designs::printDesign_5(QString * text,int sizex, int indent, bool * overLoad,char fill)
{
    int j = 0;
    int index = 0;


    //each loop in the do_while can be thought of an individual line
    do
    {
        text->insert(j,"//");//left line of *

        for(int i=0; i<indent;i++)//this will insert how much indent
            text->insert(j+2," ");

        index = text->indexOf("\n", j);//finds where the next \n is and finds its place and puts it into index

        for (int i = index; i<(j + sizex); i++)//this adds the correct amount of spacing between the text and the right column of *
            text->insert(index," ");

        text->insert(j+sizex,fill);//right line of *
        text->insert(j+sizex,fill);

        j += sizex+3;

        //if ((j-index) >= sizex && index != -1) // checks to make sure the text inputed does not exceed the size.
        if (index+indent-1>j)
            *overLoad = true;
    }while(index != -1);


}
void designs::printDesign_6(QString * text,int sizex, int indent, bool * overLoad,char fill)
{
    int j = 0;
    int index = 0;


    //each loop in the do_while can be thought of an individual line
    do
    {
        text->insert(j,"//");//left line of *

        for(int i=0; i<indent;i++)//this will insert how much indent
            text->insert(j+2," ");

        index = text->indexOf("\n", j);//finds where the next \n is and finds its place and puts it into index

        for (int i = index; i<(j + sizex); i++)//this adds the correct amount of spacing between the text and the right column of *
            text->insert(index," ");
        j += sizex+1;
        //if ((j-index) >= sizex && index != -1) // checks to make sure the text inputed does not exceed the size.
        if (index+indent-1>j)
            *overLoad = true;
    }while(index != -1);

    *text += "\n\nNote: Most Common editors should be able to do this.";

}

