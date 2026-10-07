
void FUN_100405140(long *param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(0,0x1c,(ulong)param_1[4] / (ulong)param_1[5]);
  }
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    lVar2 = *(long *)(piVar1 + 8);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      param_1[1] = 0;
    }
    piVar1[8] = 0;
    piVar1[9] = 0;
    FUN_10070b090(piVar1 + 0x14,(long)((int)param_1[5] * *piVar1 - (int)param_1[4]) + param_1[0xb],0
                  ,piVar1[0x14]);
    if ((*(uint *)(param_1 + 2) & 0xfc) != 0) {
      piVar1[2] = piVar1[2] | *(uint *)(param_1 + 2) & 0xfc;
    }
    FUN_10070aed0(piVar1);
    piVar1 = (int *)*param_1;
  }
  bVar3 = (*(uint *)(param_1 + 2) & 0xfc) != 0;
  *(uint *)((long)param_1 + 0x14) = bVar3 + 1 + (uint)bVar3;
  return;
}

