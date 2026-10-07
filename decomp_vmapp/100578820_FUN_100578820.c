
void FUN_100578820(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar9;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  if (3 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar8 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar8 = "Disabled";
    }
    else {
      pcVar8 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar2,
                  local_40 + *(long *)(local_40 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar8);
    uVar9 = (undefined4)((ulong)pcVar8 >> 0x20);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_1005788ef;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_1005788ef:
  if (*(char *)(param_1 + 0x68) == '\0') {
    uVar5 = FUN_1005970c0(*(undefined8 *)
                           (*(long *)(*(long *)(param_1 + 0x20) + 0x1128) +
                           *(long *)(param_1 + 0x28) * 8));
    if (2 < DAT_1011b55f8) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      uVar7 = CONCAT44(uVar9,uVar5);
      FUN_1008e3970("Compact","vdisk",3,"[%p]%s[%zu] # of free blocks = %u",uVar2,
                    local_50 + *(long *)(local_50 + 0x10),*(undefined8 *)(param_1 + 0x28),uVar7);
      uVar9 = (undefined4)((ulong)uVar7 >> 0x20);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          UNLOCK();
          if (*(int *)local_50 != 0) goto LAB_1005789e8;
        }
        QArrayData::deallocate(local_50,1,8);
      }
    }
LAB_1005789e8:
    if (uVar5 < *(uint *)(param_1 + 100)) {
      *(undefined4 *)(param_1 + 0x30) = 7;
      FUN_100577e90(param_1);
      if (DAT_1011b55f8 < 4) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar8 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar8 = "Disabled";
      }
      else {
        pcVar8 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",4,
                    "[%p]%s[%zu] Too less free blocks (%u < %u). Done in state [%s]",uVar2,
                    local_58 + *(long *)(local_58 + 0x10),*(undefined8 *)(param_1 + 0x28),
                    CONCAT44(uVar9,uVar5),*(undefined4 *)(param_1 + 100),pcVar8);
      if (*(int *)local_58 == -1) {
        return;
      }
      local_48 = local_58;
      if (*(int *)local_58 == 0) goto LAB_100578cdd;
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      iVar1 = *(int *)local_58;
      UNLOCK();
    }
    else {
      if (3 < DAT_1011b55f8) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        QString::toUtf8();
        lVar3 = *(long *)(local_60 + 0x10);
        lVar4 = *(long *)(param_1 + 0x28);
        uVar6 = FUN_1005970c0(*(undefined8 *)
                               (*(long *)(*(long *)(param_1 + 0x20) + 0x1128) + lVar4 * 8));
        FUN_1008e3970("Compact","vdisk",4,
                      "[%p]%s[%zu] Threshold exceeded (%u >= %u) - start moving.",uVar2,
                      local_60 + lVar3,lVar4,CONCAT44(uVar9,uVar6),*(undefined4 *)(param_1 + 100));
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            UNLOCK();
            if (*(int *)local_60 != 0) goto LAB_100578af2;
          }
          QArrayData::deallocate(local_60,1,8);
        }
      }
LAB_100578af2:
      uVar2 = *(undefined8 *)((*(long **)(param_1 + 0x20))[0x225] + *(long *)(param_1 + 0x28) * 8);
      uVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x250))();
      FUN_100595bb0(uVar2,FUN_100579b10,param_1,uVar7,2,param_1 + 0x38);
      if (*(long *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x30) = 7;
        FUN_100577e90(param_1);
      }
      if (DAT_1011b55f8 < 4) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar8 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar8 = "Disabled";
      }
      else {
        pcVar8 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar2,
                    local_68 + *(long *)(local_68 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar8);
      if (*(int *)local_68 == -1) {
        return;
      }
      local_48 = local_68;
      if (*(int *)local_68 == 0) goto LAB_100578cdd;
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      iVar1 = *(int *)local_68;
      UNLOCK();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 7;
    FUN_100577e90(param_1);
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar8 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar8 = "Disabled";
    }
    else {
      pcVar8 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Compaction is paused. Done in state [%s]",uVar2,
                  local_48 + *(long *)(local_48 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar8);
    if (*(int *)local_48 == -1) {
      return;
    }
    if (*(int *)local_48 == 0) goto LAB_100578cdd;
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    iVar1 = *(int *)local_48;
    UNLOCK();
  }
  if (iVar1 != 0) {
    return;
  }
LAB_100578cdd:
  QArrayData::deallocate(local_48,1,8);
  return;
}

