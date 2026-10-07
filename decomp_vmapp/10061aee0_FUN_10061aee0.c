
void FUN_10061aee0(long param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  param_2[1] = 0;
  *param_2 = 0;
  uVar1 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0xd1) != '\0') {
    uVar2 = *(ulong *)(param_1 + 0xc1);
    *param_2 = uVar2;
    uVar1 = *(ulong *)(param_1 + 0xc9);
    param_2[1] = uVar1;
  }
  if (param_3 != (ulong *)0x0) {
    *param_2 = uVar2 ^ *param_3;
    param_2[1] = uVar1 ^ param_3[1];
  }
  return;
}

