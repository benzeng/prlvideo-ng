
undefined8 FUN_10076f850(undefined8 param_1,long param_2)

{
  char cVar1;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100def650(&local_38,*(undefined8 *)(param_2 + 8),1);
  FUN_100def650(&local_40,*(undefined8 *)(param_2 + 0x10),1);
  QString::right((int)&local_48);
  QString::right((int)&local_50);
  cVar1 = operator==(&local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076f8f8;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10076f8f8:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076f928;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10076f928:
  if (cVar1 != '\0') {
    FUN_100def650(&local_58,*(undefined8 *)(param_2 + 8),0);
    QString::operator=(&local_38,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076f978;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_10076f978:
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1dda878);
  QString::arg(&local_70,&local_60,&local_38,0,0x20);
  QString::arg(&local_68,&local_70,&local_40,0,0x20);
  QString::operator=(&local_30,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076fa06;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10076fa06:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076fa36;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10076fa36:
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_100def650(&local_78,*(int *)(param_2 + 0x18),1);
    QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,0x1dda881);
    QString::arg(&local_80,&local_88,&local_78,0,0x20);
    QString::append(&local_30);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076fac6;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10076fac6:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076faf6;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10076faf6:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076fb26;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_10076fb26:
  if (*(int *)(param_2 + 0x1c) != 0) {
    FUN_100defbb0(&local_90,*(int *)(param_2 + 0x1c),1);
    QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,0x1dda88b);
    QString::arg(&local_98,&local_a0,&local_90,0,0x20);
    QString::append(&local_30);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076fbcd;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10076fbcd:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_21 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076fc03;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10076fc03:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10076fc39;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_10076fc39:
  QString::simplified();
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076fc75;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10076fc75:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076fca5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10076fca5:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10076fcd5;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10076fcd5:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

