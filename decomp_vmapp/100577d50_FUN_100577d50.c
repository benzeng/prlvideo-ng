
void FUN_100577d50(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  QArrayData *local_28;
  
  if (*(int *)(param_1 + 0x30) == 9) {
    FUN_100595d30(*(undefined8 *)
                   (*(long *)(*(long *)(param_1 + 0x20) + 0x1128) + *(long *)(param_1 + 0x28) * 8),
                  param_1 + 0x38);
  }
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  if (2 < DAT_1011b55f8) {
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
    FUN_1008e3970("Compact","vdisk",3,"[%p]%s: CompactContext destructed (%p) in state [%s]",uVar2,
                  local_28 + *(long *)(local_28 + 0x10),param_1,pcVar3);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return;
}

