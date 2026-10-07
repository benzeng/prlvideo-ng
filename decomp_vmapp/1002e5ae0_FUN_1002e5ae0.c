
void FUN_1002e5ae0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  QString *this;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  undefined4 local_70;
  undefined4 local_6c;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  FUN_1002dbac0(param_1,param_2,0,&PTR_DAT_1011170e8,&PTR_DAT_101117128,&PTR_DAT_101117168);
  *param_1 = &PTR_FUN_100bb4a00;
  param_1[8] = 0;
  local_58 = *(QArrayData **)(param_2 + 0x20);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_48.field0_0x0._0_1_ = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::QString(&local_48,0x7c);
  QString::section(&local_50,&local_58,&local_48,5,0xffffffff,0);
  piVar1 = (int *)CONCAT71(local_48.field0_0x0._1_7_,local_48.field0_0x0._0_1_);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_29 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e5b9b;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_48.field0_0x0._1_7_,local_48.field0_0x0._0_1_),2,8);
  }
LAB_1002e5b9b:
  QString::QString(&local_40,0x40);
  QString::section(param_1 + 9,&local_50,&local_40,1,0xffffffff,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e5bfc;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002e5bfc:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e5c2c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002e5c2c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e5c5c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002e5c5c:
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x12] = PTR_shared_null_100ba20d0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((long)param_1 + 0x181) = 1;
  *(undefined1 *)((long)param_1 + 0x182) = 1;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x13d] = PTR_shared_null_100ba2188;
  if (2 < DAT_1011c568c) {
    local_68 = *(QArrayData **)(param_1[1] + 0x20);
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
    }
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"[MSC] constructing <%s>",local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002e5d5c;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1002e5d5c:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002e5d8c;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1002e5d8c:
  uVar2 = FUN_1007da300("devices.usb.msc_read_mode",0);
  *(undefined4 *)((long)param_1 + 0x184) = uVar2;
  uVar2 = FUN_1007da300("devices.usb.msc_write_mode",0);
  *(undefined4 *)(param_1 + 0x31) = uVar2;
  lVar3 = FUN_10070e6f0("A@devices.usb.msc.bufsz.max_rd");
  param_1[0xc] = lVar3;
  *(undefined8 *)(lVar3 + 0xf0) = 0;
  uVar4 = FUN_10070e6f0("A@devices.usb.msc.bufsz.last_rd");
  param_1[0xd] = uVar4;
  lVar3 = FUN_10070e6f0("A@devices.usb.msc.bufsz.max_wr");
  param_1[0xe] = lVar3;
  *(undefined8 *)(lVar3 + 0xf0) = 0;
  uVar4 = FUN_10070e6f0("A@devices.usb.msc.bufsz.last_wr");
  param_1[0xf] = uVar4;
  local_6c = 0x409;
  uVar4 = FUN_1002e4d40(param_1 + 6,&local_6c);
  local_70 = 3;
  this = (QString *)FUN_1002e4ea0(uVar4,&local_70);
  local_90 = *(QArrayData **)(param_1[1] + 0x20);
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_29 = *(int *)local_90 != 0;
    UNLOCK();
  }
  QString::QString(&local_38,0x7c);
  QString::section(&local_88,&local_90,&local_38,5,0xffffffff,0);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e5ebe;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002e5ebe:
  QString::left((int)&local_80);
  QString::toUpper();
  QString::operator=(this,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e5f19;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002e5f19:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e5f49;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002e5f49:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e5f79;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002e5f79:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
  return;
}

