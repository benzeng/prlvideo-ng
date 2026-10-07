
long FUN_100373050(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  
  puVar3 = (uint *)*param_1;
  puVar1 = (undefined1 *)param_1[0x14];
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)param_1[0x16];
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uVar6 = (ulong)(param_1[1] - *param_1) >> 2;
  if ((int)uVar6 != 0) {
    do {
      uVar5 = *puVar3;
      if ((int)uVar5 < 0) {
        uVar5 = uVar5 & 0x7fffffff;
        pcVar4 = "%c";
      }
      else {
        pcVar4 = "x%X";
      }
      FUN_10038e8e0(param_1 + 0x13,pcVar4,uVar5);
      puVar3 = puVar3 + 1;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar5;
    } while (uVar5 != 0);
  }
  lVar2 = param_1[0x14];
  if (lVar2 == 0) {
    lVar2 = param_1[0x16];
  }
  return lVar2;
}

