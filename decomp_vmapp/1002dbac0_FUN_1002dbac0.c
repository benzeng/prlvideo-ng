
void FUN_1002dbac0(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  QString *pQVar5;
  QArrayData *local_80;
  QString local_78;
  undefined4 local_70;
  undefined4 local_6c;
  QArrayData *local_68;
  QString local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *param_1 = &PTR_FUN_100bb43e0;
  param_1[1] = param_2;
  param_1[3] = 0;
  QReadWriteLock::QReadWriteLock((QReadWriteLock *)(param_1 + 4),1);
  param_1[5] = 0;
  puVar1 = param_1 + 6;
  param_1[6] = PTR_shared_null_100ba20d8;
  *(undefined2 *)(param_1 + 7) = 0;
  uVar2 = FUN_1002d6ce0(param_1[1]);
  switch(uVar2) {
  case 0:
    if (param_3 != 0) {
      param_1[5] = param_3;
    }
    break;
  case 1:
    if (param_4 != 0) {
      param_1[5] = param_4;
    }
    break;
  case 2:
    if (param_5 != 0) {
      param_1[5] = param_5;
    }
    break;
  case 3:
    if (param_6 != 0) {
      param_1[5] = param_6;
    }
  }
  local_4c = 0x409;
  uVar4 = FUN_1002e4d40(puVar1,&local_4c);
  local_50 = 1;
  pQVar5 = (QString *)FUN_1002e4ea0(uVar4,&local_50);
  QString::fromUtf8_helper((char *)&local_48,0x9f6c07);
  QString::operator=(pQVar5,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dbbf3;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002dbbf3:
  local_54 = 0x409;
  uVar4 = FUN_1002e4d40(puVar1,&local_54);
  local_58 = 2;
  pQVar5 = (QString *)FUN_1002e4ea0(uVar4);
  local_68 = *(QArrayData **)(param_1[1] + 0x20);
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  uVar3 = FUN_1002b9040(&local_68);
  if (uVar3 == 0xffffffff) {
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  }
  else {
    local_60.field0_0x0 =
         *(QTypedArrayData<unsigned_short> **)(&DAT_1011c4ac0 + (ulong)uVar3 * 0x30);
    if (1 < *(int *)local_60.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
    }
  }
  QString::operator=(pQVar5,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dbcc3;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002dbcc3:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dbcf3;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002dbcf3:
  local_6c = 0x409;
  uVar4 = FUN_1002e4d40(puVar1,&local_6c);
  local_70 = 3;
  pQVar5 = (QString *)FUN_1002e4ea0(uVar4,&local_70);
  local_80 = *(QArrayData **)(param_1[1] + 0x20);
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_31 = *(int *)local_80 != 0;
    UNLOCK();
  }
  QString::QString(&local_40,0x7c);
  QString::section(&local_78,&local_80,&local_40,5,0xffffffff,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dbd97;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002dbd97:
  QString::operator=(pQVar5,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dbdd3;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002dbdd3:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
  return;
}

