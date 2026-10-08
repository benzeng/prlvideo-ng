
undefined8 FUN_100b1da30(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[4];
  *(int *)(lVar1 + 0x10) =
       (int)((ulong)*(uint *)(param_1 + 0x30a4) /
            *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1));
  *(long *)(lVar1 + 0x18) = param_1[0x30a2];
  *(long *)(lVar1 + 0x20) = param_1[0x30a1];
  *(int *)(lVar1 + 0x28) = (int)param_1[0x3121];
  *(undefined4 *)(lVar1 + 0x30) = 0x200;
  return 0;
}

