
undefined4 FUN_100898cd0(long param_1,long *param_2)

{
  undefined4 uVar1;
  void *local_28;
  
  uVar1 = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = FUN_1008af920(0,*(undefined4 *)(param_1 + 0x14),6);
    if (param_2 != (long *)0x0) {
      local_28 = (void *)*param_2;
      FUN_1008af7d0(&local_28,0,*(undefined4 *)(param_1 + 0x14),6,0);
      _memcpy(local_28,*(void **)(param_1 + 0x18),(long)*(int *)(param_1 + 0x14));
      *param_2 = (long)*(int *)(param_1 + 0x14) + (long)local_28;
    }
  }
  return uVar1;
}

