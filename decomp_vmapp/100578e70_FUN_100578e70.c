
void FUN_100578e70(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar9;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  uVar9 = (undefined4)((ulong)in_stack_ffffffffffffffa0 >> 0x20);
  if (3 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar7 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar7 = "Disabled";
    }
    else {
      pcVar7 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar2,
                  local_38 + *(long *)(local_38 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar7);
    uVar9 = (undefined4)((ulong)pcVar7 >> 0x20);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_100578f45;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_100578f45:
  plVar8 = (long *)(param_1 + 0x28);
  uVar5 = FUN_1005970c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x1128) + *plVar8 * 8)
                       );
  if (uVar5 < *(uint *)(param_1 + 100)) {
    *(undefined4 *)(param_1 + 0x30) = 7;
    FUN_100577e90(param_1);
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    lVar3 = *(long *)(local_40 + 0x10);
    lVar4 = *plVar8;
    uVar6 = FUN_1005970c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x1128) + lVar4 * 8)
                         );
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar7 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar7 = "Disabled";
    }
    else {
      pcVar7 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,
                  "[%p]%s[%zu] Too less free blocks (%u < %u). Done in state [%s]",uVar2,
                  local_40 + lVar3,lVar4,CONCAT44(uVar9,uVar6),*(undefined4 *)(param_1 + 100),pcVar7
                 );
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 == 0) goto LAB_100579106;
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    iVar1 = *(int *)local_40;
    UNLOCK();
  }
  else {
    FUN_100595d70(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x1128) + *plVar8 * 8),
                  FUN_100579b10,param_1);
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar7 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar7 = "Disabled";
    }
    else {
      pcVar7 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar2,
                  local_48 + *(long *)(local_48 + 0x10),*plVar8,pcVar7);
    if (*(int *)local_48 == -1) {
      return;
    }
    local_40 = local_48;
    if (*(int *)local_48 == 0) goto LAB_100579106;
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    iVar1 = *(int *)local_48;
    UNLOCK();
  }
  if (iVar1 != 0) {
    return;
  }
LAB_100579106:
  QArrayData::deallocate(local_40,1,8);
  return;
}

