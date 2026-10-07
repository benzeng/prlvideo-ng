
undefined1 FUN_1003f5d30(QString *param_1,QString *param_2)

{
  char cVar1;
  long lVar2;
  undefined1 uVar3;
  QArrayData *pQVar4;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  long local_58 [2];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    if (*(int *)(param_1->field0_0x0 + 4) == 0) {
      return 0;
    }
  }
  else {
    QString::operator=(param_1,param_2);
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(".pvs",4);
  cVar1 = QString::endsWith(param_1,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f5dbc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003f5dbc:
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","ConfigConverter",0,"Not supported config file: [%s]",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    return 0;
  }
  QFile::QFile((QFile *)local_58,param_1);
  cVar1 = QFile::open((QFile *)local_58,0x11);
  if (cVar1 != '\0') {
    do {
      cVar1 = (**(code **)(local_58[0] + 0x90))(local_58);
      uVar3 = 1;
      if (cVar1 != '\0') goto LAB_1003f5f63;
      QIODevice::readLine((longlong)&local_60);
      pQVar4 = local_60 + *(long *)(local_60 + 0x10);
      if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_60 + 4) != 0)) {
        lVar2 = 0;
        do {
          if (pQVar4[lVar2] == (QArrayData)0x0) break;
          lVar2 = lVar2 + 1;
        } while ((uint)lVar2 < *(uint *)(local_60 + 4));
        if ((int)lVar2 == -1) {
          _strlen((char *)pQVar4);
        }
      }
      QString::fromUtf8_helper((char *)&local_70,(int)pQVar4);
      QString::normalized(&local_68,&local_70,1,0);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f5eaf;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1003f5eaf:
      QString::trimmed();
      cVar1 = FUN_1003f69d0(param_1,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f5ef8;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003f5ef8:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f5f28;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1003f5f28:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f5f58;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_1003f5f58:
    } while (cVar1 != '\0');
  }
  uVar3 = 0;
LAB_1003f5f63:
  QFile::~QFile((QFile *)local_58);
  return uVar3;
}

