
void FUN_10057aa00(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  
  if (3 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar3 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar3 = "Disabled";
    }
    else {
      pcVar3 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar2,
                  local_38 + *(long *)(local_38 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar3);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_10057aad5;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_10057aad5:
  *(int *)(param_1 + 0x30) = -1;
  if (3 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar3 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar3 = "Disabled";
    }
    else {
      pcVar3 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar2,
                  local_40 + *(long *)(local_40 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar3);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  return;
}

