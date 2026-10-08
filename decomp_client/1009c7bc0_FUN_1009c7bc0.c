
ulong * FUN_1009c7bc0(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long local_20;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  uVar2 = *(ulong *)(param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x18);
  if (uVar1 < uVar2) {
    *param_1 = uVar1;
    param_1[1] = uVar1;
    FUN_100c8abb0(param_1 + 1,&local_20,param_1 + 4,(long)param_1 + 0x24,
                  (long)((int)uVar2 - (int)uVar1));
    uVar2 = local_20 + param_1[1];
    param_1[2] = uVar2;
    param_1[3] = param_1[1];
    *(ulong *)(param_2 + 0x18) = uVar2;
  }
  return param_1;
}

