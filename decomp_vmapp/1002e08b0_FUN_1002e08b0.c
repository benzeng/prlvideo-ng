
void FUN_1002e08b0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QString *pQVar3;
  undefined4 local_80;
  undefined4 local_7c;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  undefined4 local_60;
  undefined4 local_5c;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_1002dbac0(param_1,param_2,0,&PTR_DAT_101116eb8,&PTR_DAT_101116eb8,0);
  *param_1 = &PTR_FUN_100bb47c0;
  param_1[8] = 0;
  FUN_1002699d0(param_1 + 9);
  param_1[0xb] = PTR_shared_null_100ba20d0;
  local_58 = *(QArrayData **)(param_2 + 0x20);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  uVar1 = FUN_1002b9040(&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0963;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002e0963:
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_1002e2490(param_1 + 0xd,param_1);
  QMutex::QMutex((QMutex *)(param_1 + 0x13),0);
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"Usb virtual usb printer constructed");
  }
  local_5c = 0x409;
  uVar2 = FUN_1002e4d40(param_1 + 6,&local_5c);
  local_60 = 3;
  pQVar3 = (QString *)FUN_1002e4ea0(uVar2,&local_60);
  local_78 = *(QArrayData **)(param_2 + 0x20);
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  QString::QString(&local_50,0x7c);
  QString::section(&local_70,&local_78,&local_50,5,0xffffffff,0);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0a60;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002e0a60:
  QString::QString(&local_48,0x40);
  QString::section(&local_68,&local_70,&local_48,0,0,0);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0ab7;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002e0ab7:
  QString::operator=(pQVar3,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0af3;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002e0af3:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0b23;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002e0b23:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0b53;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002e0b53:
  local_7c = 0x409;
  uVar2 = FUN_1002e4d40(param_1 + 6,&local_7c);
  local_80 = 4;
  pQVar3 = (QString *)FUN_1002e4ea0(uVar2,&local_80);
  QString::fromUtf8_helper((char *)&local_40,0xa1c795);
  QString::operator=(pQVar3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e0bcd;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002e0bcd:
  FUN_1002e0e20(param_1);
  return;
}

