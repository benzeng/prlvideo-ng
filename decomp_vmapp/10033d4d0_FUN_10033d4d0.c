
void FUN_10033d4d0(long param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (ulong)param_2 * 0x10;
  *(undefined4 *)(param_1 + 0x210 + lVar1) = *param_3;
  *(undefined4 *)(param_1 + 0x214 + lVar1) = param_3[1];
  *(undefined4 *)(param_1 + 0x218 + lVar1) = param_3[2];
  *(undefined4 *)(param_1 + 0x21c + lVar1) = param_3[3];
  uVar2 = (ulong)(param_2 + 0x611);
  if (*(char *)(DAT_1011c8478 + 0x37) == '\0') {
    uVar2 = 0x60a;
  }
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + uVar2 * 8);
  return;
}

