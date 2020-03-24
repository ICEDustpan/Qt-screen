#ifndef IMAGES_CHANGE_H
#define IMAGES_CHANGE_H


class Images_Change
{
public:
    Images_Change();
    char *NextImage();
    /*图片的路径*/
    char* images[6] = {":/pic/1.png",":/pic/2.png",":/pic/3.png",":/pic/4.png",":/pic/5.png",":/pic/6.png"};
    int index;
};

#endif // IMAGES_CHANGE_H
