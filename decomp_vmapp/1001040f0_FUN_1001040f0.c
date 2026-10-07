
undefined4 FUN_1001040f0(long param_1)

{
  int iVar1;
  char cVar2;
  CVmEventParameter *pCVar3;
  undefined4 uVar4;
  int iVar5;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  CVmEventParameter *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  undefined1 local_29;
  
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  pCVar3 = operator_new(0xd0);
  cVar2 = '\0';
  if (*(long *)(param_1 + 0x18) != 0) {
    cVar2 = (char)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  }
  CBaseNode::toString(SUB81(&local_58,0),(bool)(cVar2 + '\x10'));
  local_60 = (QArrayData *)QString::fromAscii_helper("vm_problem_report",0x11);
  CVmEventParameter::CVmEventParameter(pCVar3,1,&local_58,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010419e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10010419e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001041ce;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001041ce:
  local_50 = pCVar3;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = pCVar3;
    puStack_40 = puStack_40 + 1;
  }
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  pCVar3 = operator_new(0xd0);
  iVar5 = 1;
  if (iVar1 != 0x41e) {
    iVar5 = (uint)(iVar1 != 0x3ed) * 2;
  }
  QString::number((int)&local_68,iVar5);
  local_70 = (QArrayData *)QString::fromAscii_helper("vm_problem_report_version",0x19);
  CVmEventParameter::CVmEventParameter(pCVar3,2,&local_68,&local_70);
  local_50 = pCVar3;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100104299;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100104299:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001042c9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001042c9:
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = pCVar3;
    puStack_40 = puStack_40 + 1;
  }
  if (DAT_1011c3650 == 0) {
    uVar4 = 0x80000009;
    FUN_1008e3970("","vm",0,"Cannot get VmController instance!");
  }
  else {
    cVar2 = FUN_100063770(DAT_1011c3650,0x186b7,0,&local_48,0xbc0,param_1 + 0x10);
    if (cVar2 == '\0') {
      FUN_1008e3970("","vm",0,"can not post problem report from vm to dispatcher!");
    }
    else {
      FUN_1008e3970("","vm",0,"problem report data was posted from vm to dispatcher!");
    }
    uVar4 = 0x80000009;
    if (cVar2 != '\0') {
      uVar4 = 0;
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    if (puStack_40 != local_48) {
      puStack_40 = (undefined8 *)
                   ((~((long)puStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U) +
                   (long)puStack_40);
    }
    operator_delete(local_48);
  }
  return uVar4;
}

