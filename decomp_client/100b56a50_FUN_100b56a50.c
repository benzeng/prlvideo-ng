
undefined1 FUN_100b56a50(QString *param_1,QString *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  undefined1 uVar5;
  QArrayData *pQVar6;
  bool bVar7;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48 [2];
  undefined1 local_31;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    if (*(int *)(param_1->field0_0x0 + 4) == 0) {
      return 0;
    }
  }
  else {
    QString::operator=(param_1,param_2);
  }
  QFile::QFile((QFile *)local_48,param_1);
  cVar3 = QFile::open((QFile *)local_48,0x11);
  if ((cVar3 != '\0') && (lVar4 = (**(code **)(local_48[0] + 0xa0))(local_48), lVar4 < 0x4001)) {
    FUN_100b58230(param_1 + 1);
    bVar1 = false;
    do {
      cVar3 = (**(code **)(local_48[0] + 0x90))(local_48);
      uVar5 = 1;
      if (cVar3 != '\0') goto LAB_100b56bf2;
      QIODevice::readLine((longlong)&local_50);
      pQVar6 = local_50 + *(long *)(local_50 + 0x10);
      if ((pQVar6 != (QArrayData *)0x0) && (*(uint *)(local_50 + 4) != 0)) {
        lVar4 = 0;
        do {
          if (pQVar6[lVar4] == (QArrayData)0x0) break;
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < *(uint *)(local_50 + 4));
        if ((int)lVar4 == -1) {
          _strlen((char *)pQVar6);
        }
      }
      QString::fromUtf8_helper((char *)&local_58,(int)pQVar6);
      cVar3 = FUN_100b575c0(param_1,&local_58);
      bVar2 = bVar1;
      if (cVar3 == '\x01') {
        bVar2 = true;
      }
      if (bVar1) {
        bVar2 = true;
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b56bb2;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100b56bb2:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b56be2;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100b56be2:
      bVar7 = cVar3 != '\0' || bVar1;
      bVar1 = bVar2;
    } while (bVar7);
  }
  uVar5 = 0;
LAB_100b56bf2:
  QFile::~QFile((QFile *)local_48);
  return uVar5;
}

