
void FUN_10007cd50(long param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = FUN_100080630();
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar3 = FUN_100080600(*(undefined8 *)(param_1 + 0x28),iVar1);
        if (lVar3 != 0) {
          FUN_10008bf70(lVar3,param_2);
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100080630(*(undefined8 *)(param_1 + 0x28));
      } while (iVar1 < iVar2);
    }
  }
  return;
}

