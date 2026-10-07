
undefined8 FUN_10061a780(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  *param_2 = *param_2 ^ *(ulong *)(param_1 + 0x10);
  param_2[1] = param_2[1] ^ *(ulong *)(param_1 + 0x18);
  puVar2 = (ulong *)(param_1 + 0x28);
  uVar1 = 1;
  do {
    if (uVar1 < 10) {
      FUN_10061b150();
    }
    else {
      FUN_10061b420(param_2);
    }
    *param_2 = *param_2 ^ puVar2[-1];
    param_2[1] = param_2[1] ^ *puVar2;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (uVar1 != 0xb);
  return 0;
}

