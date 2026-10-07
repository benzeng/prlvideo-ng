
int FUN_1002e2e50(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  QString *pQVar6;
  uint uVar7;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  QString local_98;
  undefined4 local_90;
  undefined4 local_8c;
  QString local_88;
  undefined4 local_80;
  undefined4 local_7c;
  QString local_78;
  undefined4 local_70;
  undefined4 local_6c;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  iVar3 = FUN_1002dc1f0();
  if (iVar3 < 0) {
    return iVar3;
  }
  pvVar4 = operator_new__(0x71c);
  *(void **)(param_1 + 0x90) = pvVar4;
  _memcpy(pvVar4,&DAT_100b38580,0x71c);
  local_68 = *(QArrayData **)(*(long *)(param_1 + 8) + 0x20);
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_29 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QString::QString(&local_58,0x7c);
  QString::section(&local_60,&local_68,&local_58,5,0xffffffff,0);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e2f13;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1002e2f13:
  uVar5 = FUN_1002e56c0(&local_60);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e2f53;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002e2f53:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e2f83;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002e2f83:
  if (*(long *)(param_1 + 0x88) == 0) {
    return -0x7ffffff7;
  }
  cVar2 = FUN_1002e2ad0(param_1);
  if (cVar2 == '\0') {
    return -0x7ffffff7;
  }
  lVar1 = param_1 + 0x30;
  local_6c = 0x409;
  uVar5 = FUN_1002e4d40(lVar1,&local_6c);
  local_70 = 2;
  pQVar6 = (QString *)FUN_1002e4ea0(uVar5,&local_70);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_78);
  QString::operator=(pQVar6,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e3022;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002e3022:
  local_7c = 0x409;
  uVar5 = FUN_1002e4d40(lVar1,&local_7c);
  local_80 = 3;
  pQVar6 = (QString *)FUN_1002e4ea0(uVar5,&local_80);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x18))(&local_88);
  QString::operator=(pQVar6,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e309a;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1002e309a:
  local_8c = 0x409;
  uVar5 = FUN_1002e4d40(lVar1,&local_8c);
  local_90 = 4;
  pQVar6 = (QString *)FUN_1002e4ea0(uVar5,&local_90);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_98);
  QString::operator=(pQVar6,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e3127;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1002e3127:
  local_9c = 0x409;
  uVar5 = FUN_1002e4d40(lVar1,&local_9c);
  local_a0 = 5;
  pQVar6 = (QString *)FUN_1002e4ea0(uVar5,&local_a0);
  QString::fromUtf8_helper((char *)&local_50,0xa1c9d6);
  QString::operator=(pQVar6,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e31af;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002e31af:
  local_a4 = 0x409;
  uVar5 = FUN_1002e4d40(lVar1,&local_a4);
  local_a8 = 6;
  pQVar6 = (QString *)FUN_1002e4ea0(uVar5,&local_a8);
  QString::fromUtf8_helper((char *)&local_48,0xa1c9ee);
  QString::operator=(pQVar6,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e3237;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002e3237:
  local_ac = 0x409;
  uVar5 = FUN_1002e4d40(lVar1,&local_ac);
  local_b0 = 7;
  pQVar6 = (QString *)FUN_1002e4ea0(uVar5,&local_b0);
  QString::fromUtf8_helper((char *)&local_40,0xa1ca08);
  QString::operator=(pQVar6,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002e32bf;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002e32bf:
  local_b4 = 0x409;
  uVar5 = FUN_1002e4d40(lVar1,&local_b4);
  local_b8 = 8;
  pQVar6 = (QString *)FUN_1002e4ea0(uVar5,&local_b8);
  QString::fromUtf8_helper((char *)&local_38,0xa1ca18);
  QString::operator=(pQVar6,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) goto LAB_1002e3347;
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002e3347:
  lVar1 = *(long *)(param_1 + 0x90);
  uVar7 = *(uint *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 0x9a);
  *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(lVar1 + 0x2e);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(lVar1 + 0x2a);
  uVar5 = *(undefined8 *)(lVar1 + 0x1a);
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(lVar1 + 0x22);
  *(undefined8 *)(param_1 + 0x3a) = uVar5;
  if (uVar7 < *(uint *)(lVar1 + 0x1e)) {
    uVar7 = *(uint *)(lVar1 + 0x1e);
  }
  if (*(uint *)(lVar1 + 4) < uVar7) {
    uVar7 = *(uint *)(lVar1 + 4);
  }
  *(uint *)(param_1 + 0x3e) = uVar7;
  *(int *)(param_1 + 0x50) =
       (int)(((ulong)*(uint *)(param_1 + 0x4c) * 10000000) / (ulong)uVar7 >> 0xd);
  *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_1 + 0x52);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x4a);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x42);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x3a);
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x58) / 10000;
  return 0;
}

