
QString * FUN_100d81f90(QString *param_1)

{
  char cVar1;
  ulong uVar2;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)QString::fromAscii_helper("PARALLELS_CONFIG_DIR",0x14);
  FUN_100ddaee0(&local_38,&local_40);
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d82006;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d82006:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d82036;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d82036:
  if (*(int *)(param_1->field0_0x0 + 4) != 0) {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"PVS_DISPATCHER_CONFIG_DIR_ENV: was set from enviroment: \'%s\'",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return param_1;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return param_1;
  }
  cVar1 = FUN_100d80520();
  if ((cVar1 == '\0') && (uVar2 = FUN_100d7e9f0(), (uVar2 & 2) == 0)) {
    QString::fromUtf8_helper((char *)&local_30,0x1e31cd3);
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d82158;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  else {
    FUN_100d82500(&local_50);
    QString::operator=(param_1,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_19 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d82158;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_100d82158:
  QString::fromUtf8_helper((char *)&local_28,0x1e2468c);
  QString::append(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d821a9;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d821a9:
  QString::fromUtf8_helper((char *)&local_60,0x1de8568);
  QString::normalized(&local_58,&local_60,1,0);
  QString::append(param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d8220e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d8220e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d8223e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d8223e:
  QDir::fromNativeSeparators(&local_68);
  QString::operator=(param_1,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
  return param_1;
}

