
undefined4 FUN_1008a7e90(long *param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + *(long *)(param_3 + 8));
  *(undefined4 *)(*param_1 + *(long *)(param_3 + 8)) = param_2;
  return uVar1;
}

