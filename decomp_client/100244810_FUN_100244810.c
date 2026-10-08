
void FUN_100244810(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = DAT_100e152a0;
  uVar2 = param_2 - 0x18a88;
  if (uVar2 < 9) {
    if ((0x18dU >> (uVar2 & 0x1f) & 1) != 0) goto LAB_1002448b7;
    if ((0x30U >> (uVar2 & 0x1f) & 1) != 0) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      iVar1 = FUN_10018f860(uVar3);
      if (iVar1 == 8) {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar2 = FUN_10018f890(uVar3);
        if (0x808 < uVar2) {
          uVar3 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar3 = *(undefined8 *)(param_1 + 0x20);
          }
          uVar2 = FUN_10018f890(uVar3);
          iVar4 = iVar4 << (uVar2 < 0x811);
        }
      }
      goto LAB_1002448b7;
    }
  }
  iVar4 = 0;
LAB_1002448b7:
  FUN_100243d10(param_1,iVar4);
  return;
}

