
void FUN_100576710(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  if (3 < DAT_1011b55f8) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar2 = *(int *)(param_1 + 0x30);
    if ((long)iVar2 == -1) {
      pcVar3 = "Invalid";
    }
    else if (iVar2 == -2) {
      pcVar3 = "Disabled";
    }
    else {
      pcVar3 = (&PTR_s_None_100bc6390)[iVar2];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar1,
                  local_30 + *(long *)(local_30 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar3);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_1005767da;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_1005767da:
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == -1) {
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_TerminatedState != CompactContext::Invalid","DiskStatesImp.cpp",0x1634,
                  "TerminatedStateProcess");
    iVar2 = *(int *)(param_1 + 0x44);
  }
  if (iVar2 == -2) {
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_TerminatedState != CompactContext::Disabled","DiskStatesImp.cpp",0x1635,
                  "TerminatedStateProcess");
  }
  FUN_100595d30(*(undefined8 *)
                 (*(long *)(*(long *)(param_1 + 0x20) + 0x1128) + *(long *)(param_1 + 0x28) * 8),
                param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  if (*(uint *)(param_1 + 0x44) < 2) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar2 = *(int *)(param_1 + 0x30);
    if ((long)iVar2 == -1) {
      pcVar3 = "Invalid";
    }
    else if (iVar2 == -2) {
      pcVar3 = "Disabled";
    }
    else {
      pcVar3 = (&PTR_s_None_100bc6390)[iVar2];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Done in state [%s]",uVar1,
                  local_38 + *(long *)(local_38 + 0x10),pcVar3);
    if (*(int *)local_38 == -1) {
      return;
    }
    if (*(int *)local_38 == 0) goto LAB_1005769f3;
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    iVar2 = *(int *)local_38;
    UNLOCK();
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 8;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar2 = *(int *)(param_1 + 0x30);
    if ((long)iVar2 == -1) {
      pcVar3 = "Invalid";
    }
    else if (iVar2 == -2) {
      pcVar3 = "Disabled";
    }
    else {
      pcVar3 = (&PTR_s_None_100bc6390)[iVar2];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Done in state [%s]",uVar1,
                  local_40 + *(long *)(local_40 + 0x10),pcVar3);
    if (*(int *)local_40 == -1) {
      return;
    }
    local_38 = local_40;
    if (*(int *)local_40 == 0) goto LAB_1005769f3;
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    iVar2 = *(int *)local_40;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return;
  }
LAB_1005769f3:
  QArrayData::deallocate(local_38,1,8);
  return;
}

