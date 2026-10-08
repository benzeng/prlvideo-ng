
void FUN_1000f9ff0(undefined8 param_1,QByteArray *param_2)

{
  char cVar1;
  undefined4 local_5c;
  QIODevice local_58 [32];
  QBuffer local_38 [16];
  QArrayData *local_28;
  undefined1 local_19;
  
  cVar1 = QPixmap::isNull();
  if (cVar1 == '\0') {
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
    QBuffer::QBuffer(local_38,(QByteArray *)&local_28,(QObject *)0x0);
    QBuffer::open(local_38,2);
    QPixmap::toImage();
    QImage::save(local_58,(char *)local_38,0x1dbf6fd);
    QImage::~QImage((QImage *)local_58);
    local_5c = *(undefined4 *)(local_28 + 4);
    QByteArray::append((char *)param_2,(int)&local_5c);
    QByteArray::append(param_2);
    QBuffer::~QBuffer(local_38);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return;
}

