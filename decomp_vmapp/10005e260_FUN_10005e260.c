
void FUN_10005e260(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  QDateTime local_98 [8];
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined8 local_30;
  Data *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_30 = 0;
  local_28 = (Data *)PTR_shared_null_100ba2188;
  cVar1 = FUN_10005eb50(param_1,param_2,param_3,&local_38);
  if (cVar1 != '\0') {
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","vm",3,"removing app kind {%s}",local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_11 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_11) goto LAB_10005e310;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
LAB_10005e310:
    local_68 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3.%4",0xb);
    QString::arg(&local_60,&local_68,local_30 & 0xffff,0,10,0x20);
    QString::arg(&local_58,&local_60,local_30._2_2_,0,10,0x20);
    QString::arg(&local_50,&local_58,local_30._4_2_,0,10,0x20);
    QString::arg(&local_48,&local_50,local_30._6_2_,0,10,0x20);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_11 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e3d1;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10005e3d1:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_11 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e401;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10005e401:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_11 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e431;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10005e431:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_11 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e461;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10005e461:
    local_88 = (QArrayData *)QString::fromAscii_helper("%1GuestAppAction:Close:%2:%3",0x1c);
    QDateTime::currentDateTime();
    pQVar3 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_90);
    QString::arg(&local_80,&local_88,&local_90,0,0x20);
    QString::arg(&local_78,&local_80,&local_38,0,0x20);
    QString::arg(&local_70,&local_78,&local_48,0,0x20);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_11 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e532;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_10005e532:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_11 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e562;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10005e562:
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_11 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e598;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_10005e598:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_11 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e5ce;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_10005e5ce:
    QDateTime::~QDateTime(local_98);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_11 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e60a;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10005e60a:
    iVar2 = FUN_100430a30(*(undefined8 *)(DAT_1011c3698 + 0xf0));
    if (iVar2 != 0) {
      QString::fromUtf8_helper((char *)&local_20,0x9e400a);
      QString::append(&local_70);
      if (*(int *)local_20 != -1) {
        if (*(int *)local_20 != 0) {
          LOCK();
          *(int *)local_20 = *(int *)local_20 + -1;
          local_11 = *(int *)local_20 != 0;
          UNLOCK();
          if ((bool)local_11) goto LAB_10005e676;
        }
        QArrayData::deallocate(local_20,2,8);
      }
    }
LAB_10005e676:
    FUN_10005c750(&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_11 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e6af;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_10005e6af:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_11 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10005e6df;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10005e6df:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10005e705;
    }
    QListData::dispose(local_28);
  }
LAB_10005e705:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

