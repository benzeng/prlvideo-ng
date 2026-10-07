
void FUN_100576cd0(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  QArrayData *local_48;
  QArrayData *local_40;
  
  if (3 < DAT_1011b55f8) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar2 = *(int *)(param_1 + 0x30);
    if ((long)iVar2 == -1) {
      pcVar7 = "Invalid";
    }
    else if (iVar2 == -2) {
      pcVar7 = "Disabled";
    }
    else {
      pcVar7 = (&PTR_s_None_100bc6390)[iVar2];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar3,
                  local_40 + *(long *)(local_40 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar7);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_100576da8;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_100576da8:
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar3 = *(undefined8 *)((*(long **)(param_1 + 0x20))[0x225] + *(long *)(param_1 + 0x28) * 8);
  uVar6 = (**(code **)(**(long **)(param_1 + 0x20) + 0x250))();
  FUN_100595bb0(uVar3,FUN_100579b10,param_1,uVar6,1,param_1 + 0x38);
  if (*(long *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 7;
    FUN_100577e90(param_1);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(lVar4 + 0x13a8);
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0xf0);
    *plVar1 = *plVar1 + 1;
  }
  if (3 < DAT_1011b55f8) {
    QString::toUtf8();
    iVar2 = *(int *)(param_1 + 0x30);
    if ((long)iVar2 == -1) {
      pcVar7 = "Invalid";
    }
    else if (iVar2 == -2) {
      pcVar7 = "Disabled";
    }
    else {
      pcVar7 = (&PTR_s_None_100bc6390)[iVar2];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",lVar4,
                  local_48 + *(long *)(local_48 + 0x10),*(long *)(param_1 + 0x28),pcVar7);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
  return;
}

