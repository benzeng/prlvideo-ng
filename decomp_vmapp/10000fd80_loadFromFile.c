
/* CBaseNode::loadFromFile(QFile*, bool) */

undefined4 CBaseNode::loadFromFile(QFile *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  undefined7 in_register_00000031;
  QFile *pQVar4;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  pQVar4 = (QFile *)CONCAT71(in_register_00000031,param_2);
  if (pQVar4 == (QFile *)0x0) {
    QString::fromUtf8_helper((char *)&local_38,0x9e01cf);
    QString::operator=((QString *)(param_1 + 0x30),&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10000fee4;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_10000fee4:
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"%s",local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) goto LAB_100010110;
    local_70 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100010110;
      local_29 = 0;
    }
  }
  else {
    cVar1 = QIODevice::isOpen();
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pQVar4 + 0x70))(pQVar4);
    }
    cVar1 = (**(code **)(*(long *)pQVar4 + 0x68))(pQVar4);
    if (cVar1 != '\0') {
      local_78 = (QArrayData *)PTR_shared_null_100ba20d0;
      pQVar3 = (QArrayData *)QString::fromAscii_helper("",0);
      local_80 = pQVar3;
      iVar2 = fromString((CBaseNode *)param_1,(QTypedArrayData<unsigned_short> *)&local_78,
                         (QTypedArrayData<unsigned_short> *)&local_80,false,pQVar4,(QString *)0x0,
                         (int *)0x0,(int *)0x0);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10000fe42;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_10000fe42:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10000fe72;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10000fe72:
      if (iVar2 != 0) {
        (**(code **)(*(long *)pQVar4 + 0x70))(pQVar4);
        return *(undefined4 *)(param_1 + 8);
      }
      (**(code **)(*(long *)pQVar4 + 0xe0))(&local_88,pQVar4);
      QString::operator=((QString *)(param_1 + 0x28),&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_29 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10001017c;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_10001017c:
      (**(code **)(*(long *)pQVar4 + 0x70))(pQVar4);
      return 0;
    }
    local_58 = (QArrayData *)
               QString::fromAscii_helper("Error: cannot open XML file \'%1\', err=\'%2\'!",0x2b);
    (**(code **)(*(long *)pQVar4 + 0xe0))(&local_60,pQVar4);
    QString::arg(&local_50,&local_58,&local_60,0,0x20);
    QIODevice::errorString();
    QString::arg(&local_48,&local_50,&local_68,0,0x20);
    QString::operator=((QString *)(param_1 + 0x30),&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10000ffee;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_10000ffee:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10001001e;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10001001e:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10001004e;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10001004e:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10001007e;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10001007e:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000100ae;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1000100ae:
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"%s",local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 == -1) goto LAB_100010110;
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) goto LAB_100010110;
      local_29 = 0;
    }
  }
  QArrayData::deallocate(local_70,1,8);
LAB_100010110:
  *(undefined4 *)(param_1 + 8) = 0x80000036;
  return 0x80000036;
}

