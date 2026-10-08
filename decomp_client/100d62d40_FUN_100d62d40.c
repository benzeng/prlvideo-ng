
undefined8 FUN_100d62d40(long param_1,QString *param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40 [2];
  undefined1 local_29;
  
  QFile::QFile((QFile *)local_40,param_2);
  cVar2 = QFile::open((QFile *)local_40,1);
  if (cVar2 != '\0') {
    iVar3 = QFile::size();
    (**(code **)(local_40[0] + 0x88))(local_40,0);
    QIODevice::readAll();
    QByteArray::operator=((QByteArray *)(param_1 + 0x10),(QByteArray *)&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d62de2;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100d62de2:
    if (iVar3 == *(int *)(*(long *)(param_1 + 0x10) + 4)) {
      uVar4 = 0x8000000;
      QString::operator=((QString *)(param_1 + 8),param_2);
      goto LAB_100d62eb5;
    }
  }
  pQVar1 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","WinRegistry",0,"OA00006.01:\t%s",local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d62e80;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100d62e80:
  uVar4 = 0x8158001;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d62eb5;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d62eb5:
  QFile::~QFile((QFile *)local_40);
  return uVar4;
}

