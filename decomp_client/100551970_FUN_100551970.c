
QVariant * FUN_100551970(QVariant *param_1,long param_2,undefined8 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  QString local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_4 != 1) {
LAB_100551b7f:
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
    return param_1;
  }
  if (param_5 != 0) {
    QAbstractItemModel::headerData(param_1,param_2,param_3,1);
    return param_1;
  }
  iVar2 = (int)param_3;
  if (iVar2 == 2) {
    if ((((*(long *)(param_2 + 0x18) == 0) || (*(int *)(*(long *)(param_2 + 0x18) + 4) == 0)) ||
        (lVar3 = *(long *)(param_2 + 0x20), lVar3 == 0)) ||
       (iVar2 = FUN_10018f860(lVar3), iVar2 == 0xff)) {
      QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,0x1e0116d);
    }
    else {
      QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1e01167);
      FUN_10018f860(lVar3);
      EnumUtils::OsTypeToString((uint)&local_30);
      QString::arg(&local_78,&local_28,&local_30,0,0x20);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_19 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100551cd3;
        }
        QArrayData::deallocate(local_30,2,8);
      }
LAB_100551cd3:
      if (*(int *)local_28 != -1) {
        if (*(int *)local_28 != 0) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + -1;
          local_19 = *(int *)local_28 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100551aea;
        }
        QArrayData::deallocate(local_28,2,8);
      }
    }
LAB_100551aea:
    QVariant::QVariant(param_1,&local_78);
    if (*(int *)local_78.field0_0x0 == -1) {
      return param_1;
    }
    local_70.field0_0x0 = local_78.field0_0x0;
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_78.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    goto LAB_100551e23;
  }
  if (iVar2 != 1) {
    if (iVar2 != 0) goto LAB_100551b7f;
    QMetaObject::tr((char *)&local_68,"",0x1ded987);
    QVariant::QVariant(param_1,&local_68);
    if (*(int *)local_68.field0_0x0 == -1) {
      return param_1;
    }
    local_70.field0_0x0 = local_68.field0_0x0;
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    goto LAB_100551e23;
  }
  lVar3 = 0;
  if ((*(long *)(param_2 + 0x18) != 0) && (lVar3 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0))
  {
    lVar3 = *(long *)(param_2 + 0x20);
  }
  if ((lVar3 == 0) || (lVar3 = FUN_10018d490(), lVar3 == 0)) {
LAB_100551dcf:
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1e01162);
  }
  else {
    cVar1 = FUN_10015a680(lVar3);
    if (cVar1 == '\0') {
      cVar1 = FUN_10015ab20(lVar3);
      if (cVar1 == '\0') {
        cVar1 = FUN_10015ab00(lVar3);
        if (cVar1 == '\0') goto LAB_100551dcf;
        QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,0x1e0115a);
        local_60 = (QArrayData *)QString::fromAscii_helper("macOS",5);
        QString::arg(&local_70,&local_58,&local_60,0,0x20);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_19 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100551d9d;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100551d9d:
        if (*(int *)local_58 == -1) goto LAB_100551dee;
        local_38 = local_58;
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          iVar2 = *(int *)local_58;
          UNLOCK();
          goto joined_r0x000100551db8;
        }
      }
      else {
        QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1e0115a);
        local_50 = (QArrayData *)QString::fromAscii_helper("Linux",5);
        QString::arg(&local_70,&local_48,&local_50,0,0x20);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_19 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100551c26;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_100551c26:
        if (*(int *)local_48 == -1) goto LAB_100551dee;
        local_38 = local_48;
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          iVar2 = *(int *)local_48;
          UNLOCK();
          goto joined_r0x000100551db8;
        }
      }
    }
    else {
      QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1e0115a);
      local_40 = (QArrayData *)QString::fromAscii_helper("Windows",7);
      QString::arg(&local_70,&local_38,&local_40,0,0x20);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_19 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100551a6e;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100551a6e:
      if (*(int *)local_38 == -1) goto LAB_100551dee;
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        iVar2 = *(int *)local_38;
        UNLOCK();
joined_r0x000100551db8:
        local_19 = iVar2 != 0;
        if ((bool)local_19) goto LAB_100551dee;
      }
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100551dee:
  QVariant::QVariant(param_1,&local_70);
  if (*(int *)local_70.field0_0x0 == -1) {
    return param_1;
  }
  if (*(int *)local_70.field0_0x0 != 0) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_70.field0_0x0 != 0) {
      return param_1;
    }
    local_19 = 0;
  }
LAB_100551e23:
  QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  return param_1;
}

