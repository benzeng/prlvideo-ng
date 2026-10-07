
long FUN_10089a900(int *param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  if (param_1[1] == 0x17) {
    iVar2 = FUN_100899e30(param_1);
  }
  else {
    if (param_1[1] != 0x18) {
      return 0;
    }
    iVar2 = FUN_10089a360(param_1);
  }
  lVar4 = 0;
  if (iVar2 != 0) {
    if ((param_2 == (long *)0x0) || (lVar3 = *param_2, lVar3 == 0)) {
      lVar3 = FUN_1008a8780();
      if (lVar3 == 0) {
        return 0;
      }
      if (param_2 != (long *)0x0) {
        *param_2 = lVar3;
      }
    }
    if (param_1[1] == 0x18) {
      iVar2 = FUN_1008afb30(lVar3,*(undefined8 *)(param_1 + 2),*param_1);
      lVar4 = 0;
      if (iVar2 != 0) {
        lVar4 = lVar3;
      }
    }
    else {
      iVar2 = FUN_1008afb30(lVar3,0,*param_1 + 2);
      lVar4 = 0;
      if (iVar2 != 0) {
        iVar2 = *param_1;
        uVar1 = *(undefined8 *)(lVar3 + 8);
        if (**(byte **)(param_1 + 2) < 0x35) {
          pcVar5 = "20";
        }
        else {
          pcVar5 = "19";
        }
        FUN_10087d1f0(uVar1,pcVar5,(long)iVar2 + 3);
        FUN_10087d250(uVar1,*(undefined8 *)(param_1 + 2),(long)iVar2 + 3);
        lVar4 = lVar3;
      }
    }
  }
  return lVar4;
}

