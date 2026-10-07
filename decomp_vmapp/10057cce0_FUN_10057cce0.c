
undefined8 FUN_10057cce0(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar8;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  uVar8 = (undefined4)((ulong)in_stack_ffffffffffffffa8 >> 0x20);
  if (DAT_1011cc9b8 == 0) {
    return 0;
  }
  cVar4 = *param_2;
  if (*(long *)(param_1 + 0x12d8) == 0) {
    uVar7 = CONCAT44(uVar8,0x18c1);
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "disk->m_CompactContext != NULL","DiskStatesImp.cpp",uVar7,"PauseCompactBlocksCb")
    ;
    uVar8 = (undefined4)((ulong)uVar7 >> 0x20);
  }
  if (cVar4 == '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x12d8) + 0x68) = 0;
    return 0;
  }
  cVar4 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x50))();
  if ((cVar4 == '\0') || ((*(uint *)(*(long *)(param_1 + 0x12d8) + 0x30) & 0xfffffffe) != 4)) {
    *(undefined1 *)(*(long *)(param_1 + 0x12d8) + 0x68) = 1;
    return 0;
  }
  cVar4 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x50))();
  if (cVar4 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("Compact","vdisk",0,"[%p]%s: Unable set pending Pause for device in STOPPED state"
                  ,param_1,local_38 + *(long *)(local_38 + 0x10));
    uVar7 = 0x80021035;
    if (*(int *)local_38 == -1) {
      return 0x80021035;
    }
    local_40 = local_38;
    if (*(int *)local_38 == 0) goto LAB_10057cfbe;
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    iVar1 = *(int *)local_38;
    UNLOCK();
  }
  else if (*(int *)(*(long *)(param_1 + 0x12d8) + 0x60) == 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x12d8) + 0x60) = 4;
    QString::toUtf8();
    iVar1 = *(int *)(*(long *)(param_1 + 0x12d8) + 0x30);
    if ((long)iVar1 == -1) {
      pcVar6 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar6 = "Disabled";
    }
    else {
      pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
    }
    uVar7 = 0;
    FUN_1008e3970("Compact","vdisk",0,"[%p]%s: pending Pause in state [%s]",param_1,
                  local_48 + *(long *)(local_48 + 0x10),pcVar6);
    if (*(int *)local_48 == -1) {
      return 0;
    }
    local_40 = local_48;
    if (*(int *)local_48 == 0) goto LAB_10057cfbe;
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    iVar1 = *(int *)local_48;
    UNLOCK();
  }
  else {
    QString::toUtf8();
    lVar2 = *(long *)(local_40 + 0x10);
    lVar3 = *(long *)(param_1 + 0x12d8);
    uVar5 = *(uint *)(lVar3 + 0x60);
    if (4 < (int)uVar5) {
      FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "m_Action < ActionCount","DiskStatesImp.cpp",CONCAT44(uVar8,0x176e),
                    "GetPendingActionName");
      uVar5 = *(uint *)(lVar3 + 0x60);
    }
    FUN_1008e3970("Compact","vdisk",0,
                  "[%p]%s: Unable set pending Pause, pending \'%s\' is in progress",param_1,
                  local_40 + lVar2,(&PTR_s_ActionNone_100bc63e0)[uVar5]);
    uVar7 = 0x80021035;
    if (*(int *)local_40 == -1) {
      return 0x80021035;
    }
    if (*(int *)local_40 == 0) goto LAB_10057cfbe;
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    iVar1 = *(int *)local_40;
    UNLOCK();
  }
  if (iVar1 != 0) {
    return uVar7;
  }
LAB_10057cfbe:
  QArrayData::deallocate(local_40,1,8);
  return uVar7;
}

