
undefined8 * FUN_100d83950(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  switch(param_2) {
  case 0:
    QString::fromUtf8_helper((char *)&local_40,0x1efe1b4);
    QString::operator=(&local_48,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
    break;
  case 1:
  case 5:
    QString::fromUtf8_helper((char *)&local_38,0x1efe1c0);
    QString::operator=(&local_48,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
    break;
  case 2:
    QString::fromUtf8_helper((char *)&local_30,0x1efe1d4);
    QString::operator=(&local_48,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
    break;
  case 3:
    QString::fromUtf8_helper((char *)&local_28,0x1efe1ec);
    QString::operator=(&local_48,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_19 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
    break;
  default:
    FUN_100df99c0("","cmn_utils",0,"Not supported appMode = %d",param_2);
    uVar1 = QString::fromAscii_helper("",0);
    *param_1 = uVar1;
    goto LAB_100d83c45;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  FUN_100d81f90(&local_68);
  QString::arg(&local_58,&local_60,&local_68,0,0x20);
  QString::arg(&local_50,&local_58,&local_48,0,0x20);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d83b9d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d83b9d:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d83bcd;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d83bcd:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d83bfd;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d83bfd:
  *param_1 = local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_19 = *(int *)local_50 != 0;
    UNLOCK();
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d83c45;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d83c45:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

