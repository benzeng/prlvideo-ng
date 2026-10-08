
undefined1 FUN_100d08df0(long param_1,QString *param_2)

{
  QString *this;
  char cVar1;
  long lVar2;
  undefined1 uVar3;
  QArrayData *pQVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48 [2];
  undefined1 local_31;
  
  this = (QString *)(param_1 + 8);
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    if (*(int *)(this->field0_0x0 + 4) == 0) {
      return 0;
    }
  }
  else {
    QString::operator=(this,param_2);
  }
  QFile::QFile((QFile *)local_48,this);
  cVar1 = QFile::open((QFile *)local_48,0x11);
  if (cVar1 != '\0') {
    do {
      cVar1 = (**(code **)(local_48[0] + 0x90))(local_48);
      uVar3 = 1;
      if (cVar1 != '\0') goto LAB_100d08f96;
      QIODevice::readLine((longlong)&local_50);
      pQVar4 = local_50 + *(long *)(local_50 + 0x10);
      if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_50 + 4) != 0)) {
        lVar2 = 0;
        do {
          if (pQVar4[lVar2] == (QArrayData)0x0) break;
          lVar2 = lVar2 + 1;
        } while ((uint)lVar2 < *(uint *)(local_50 + 4));
        if ((int)lVar2 == -1) {
          _strlen((char *)pQVar4);
        }
      }
      QString::fromUtf8_helper((char *)&local_60,(int)pQVar4);
      QString::normalized(&local_58,&local_60,1,0);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d08f1d;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100d08f1d:
      cVar1 = FUN_100d08410(param_1,&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d08f5b;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100d08f5b:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d08f8b;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100d08f8b:
    } while (cVar1 != '\0');
  }
  uVar3 = 0;
LAB_100d08f96:
  QFile::~QFile((QFile *)local_48);
  return uVar3;
}

