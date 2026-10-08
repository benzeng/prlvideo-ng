
undefined8 FUN_100ca00a0(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2[1] == 0x16) {
    lVar4 = *(long *)(param_2 + 2);
    if (lVar4 == 0) {
      uVar3 = 1;
    }
    else if (*param_2 == 0) {
      uVar3 = 1;
    }
    else {
      lVar2 = *param_1;
      if (lVar2 == 0) {
        lVar2 = FUN_100c5ff30(FUN_100ca0640);
        *param_1 = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
        lVar4 = *(long *)(param_2 + 2);
      }
      iVar1 = FUN_100c60360(lVar2,lVar4);
      if (iVar1 == -1) {
        lVar4 = FUN_100c58250(*(undefined8 *)(param_2 + 2));
        if ((lVar4 != 0) && (iVar1 = FUN_100c604e0(*param_1,lVar4), iVar1 != 0)) {
          return 1;
        }
        FUN_100c60790(*param_1,FUN_100ca01e0);
        *param_1 = 0;
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

