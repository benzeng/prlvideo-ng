
undefined8 *
FUN_100a69f00(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  int iVar2;
  QDataStream local_70 [24];
  undefined4 local_58;
  QArrayData *local_50;
  QBuffer local_48 [23];
  undefined1 local_31;
  
  iVar2 = 0;
  QBuffer::QBuffer(local_48,(QObject *)0x0);
  if (*param_2 != 0) {
    iVar2 = (int)*(undefined8 *)(*param_2 + 0x10);
  }
  QByteArray::fromRawData((char *)&local_50,iVar2);
  QBuffer::setBuffer((QByteArray *)local_48);
  cVar1 = QBuffer::open(local_48,1);
  if (cVar1 == '\0') {
    FUN_100df99c0("","IOCommunication",0,"Can\'t open Qt buffer for reading!");
    *param_1 = 0;
  }
  else {
    QDataStream::QDataStream(local_70,(QIODevice *)local_48);
    local_58 = 7;
    FUN_100a6afb0(param_1,local_70,param_4,param_5);
    QDataStream::~QDataStream(local_70);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a69ff1;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100a69ff1:
  QBuffer::~QBuffer(local_48);
  return param_1;
}

