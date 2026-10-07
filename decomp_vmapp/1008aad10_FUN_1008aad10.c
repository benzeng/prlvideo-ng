
undefined4 FUN_1008aad10(undefined1 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined1 *local_28;
  
  uVar1 = FUN_1008af920(0,1,1);
  if (param_2 != (long *)0x0) {
    local_28 = (undefined1 *)*param_2;
    FUN_1008af7d0(&local_28,0,1,1,0);
    *local_28 = param_1;
    *param_2 = (long)(local_28 + 1);
  }
  return uVar1;
}

