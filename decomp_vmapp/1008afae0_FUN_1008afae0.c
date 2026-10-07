
undefined8 FUN_1008afae0(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = param_2[1];
    iVar1 = FUN_1008afb30(param_1,*(undefined8 *)(param_2 + 2),*param_2);
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 4);
      uVar2 = 1;
    }
  }
  return uVar2;
}

