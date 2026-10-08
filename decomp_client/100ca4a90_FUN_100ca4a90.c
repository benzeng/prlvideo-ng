
undefined8 FUN_100ca4a90(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 1;
  if ((param_1 != (int *)0x0) && (*param_1 == 1)) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    lVar5 = FUN_100c7c750(param_2);
    *(long *)(param_1 + 4) = lVar5;
    uVar4 = 0;
    if (lVar5 != 0) {
      iVar2 = FUN_100c60800(uVar1);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          uVar4 = FUN_100c60820(uVar1,iVar2);
          iVar3 = FUN_100c97050(*(undefined8 *)(param_1 + 4),uVar4,0xffffffff,iVar2 == 0);
          if (iVar3 == 0) goto LAB_100ca4b29;
          iVar2 = iVar2 + 1;
          iVar3 = FUN_100c60800(uVar1);
        } while (iVar2 < iVar3);
      }
      iVar2 = FUN_100c7c6f0(*(undefined8 *)(param_1 + 4),0);
      uVar4 = 1;
      if (iVar2 < 0) {
LAB_100ca4b29:
        FUN_100c7c730(*(undefined8 *)(param_1 + 4));
        param_1[4] = 0;
        param_1[5] = 0;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

