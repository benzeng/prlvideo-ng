
undefined8 FUN_0040ec40(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0xc) - 1U < 2) {
      iVar1 = FUN_0040ef30(param_2);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0xc);
      if (iVar1 != 0) {
        return 0xfffffff8;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

