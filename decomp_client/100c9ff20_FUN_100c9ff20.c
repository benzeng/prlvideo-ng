
undefined8 FUN_100c9ff20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 local_38;
  
  local_38 = 0;
  iVar1 = -1;
  do {
    iVar1 = FUN_100c96de0(param_1,0x30,iVar1);
    if (iVar1 < 0) {
      iVar1 = FUN_100c60800(param_2);
      if (iVar1 < 1) {
        return local_38;
      }
      iVar1 = 0;
      while ((piVar4 = (int *)FUN_100c60820(param_2,iVar1), *piVar4 != 1 ||
             (iVar2 = FUN_100ca00a0(&local_38,*(undefined8 *)(piVar4 + 2)), iVar2 != 0))) {
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(param_2);
        if (iVar2 <= iVar1) {
          return local_38;
        }
      }
      return 0;
    }
    uVar3 = FUN_100c96d80(param_1,iVar1);
    uVar3 = FUN_100c96d60(uVar3);
    iVar2 = FUN_100ca00a0(&local_38,uVar3);
  } while (iVar2 != 0);
  return 0;
}

