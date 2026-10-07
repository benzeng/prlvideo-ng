
void FUN_1005791e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  
  if (3 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar4 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar4 = "Disabled";
    }
    else {
      pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar2,
                  local_30 + *(long *)(local_30 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar4);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_1005792aa;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_1005792aa:
  uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x70))();
  FUN_10057a630(param_1,uVar3);
  if (3 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar4 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar4 = "Disabled";
    }
    else {
      pcVar4 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar2,
                  local_38 + *(long *)(local_38 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar4);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
  return;
}

