
void FUN_100087d00(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  uVar1 = (ulong)*(uint *)(param_1 + 0x46c) << 0x14;
  if (0xafffffff < uVar1 && (ulong)*(uint *)(param_1 + 0x46c) != 0xb00) {
    uVar1 = 0xb0000000;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0xa20) != 0) {
    *(undefined4 *)((long)param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 1) = 0xf00000;
    *(int *)((long)param_2 + 4) = (int)uVar1 + -0xf00000;
    iVar2 = 0xf00000;
  }
  *(undefined4 *)(param_2 + 2) = 0x5000;
  *(int *)((long)param_2 + 0xc) = ((int)uVar1 + -0x5000) - iVar2;
  return;
}

