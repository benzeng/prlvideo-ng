
long FUN_1003731b0(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  
  puVar1 = (undefined1 *)param_1[0x41];
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)param_1[0x43];
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  puVar4 = (uint *)param_1[0x18];
  puVar1 = (undefined1 *)param_1[0x2c];
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)param_1[0x2e];
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  uVar7 = (ulong)(param_1[0x19] - param_1[0x18]) >> 2;
  if ((int)uVar7 != 0) {
    do {
      uVar6 = *puVar4;
      if ((int)uVar6 < 0) {
        uVar6 = uVar6 & 0x7fffffff;
        pcVar5 = "%c";
      }
      else {
        pcVar5 = "x%X";
      }
      FUN_10038e8e0(param_1 + 0x2b,pcVar5,uVar6);
      puVar4 = puVar4 + 1;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar6;
    } while (uVar6 != 0);
  }
  lVar2 = param_1[0x2c];
  if (lVar2 == 0) {
    lVar2 = param_1[0x2e];
  }
  puVar4 = (uint *)*param_1;
  puVar1 = (undefined1 *)param_1[0x14];
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)param_1[0x16];
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uVar7 = (ulong)(param_1[1] - *param_1) >> 2;
  if ((int)uVar7 != 0) {
    do {
      uVar6 = *puVar4;
      if ((int)uVar6 < 0) {
        uVar6 = uVar6 & 0x7fffffff;
        pcVar5 = "%c";
      }
      else {
        pcVar5 = "x%X";
      }
      FUN_10038e8e0(param_1 + 0x13,pcVar5,uVar6);
      puVar4 = puVar4 + 1;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar6;
    } while (uVar6 != 0);
  }
  lVar3 = param_1[0x14];
  if (lVar3 == 0) {
    lVar3 = param_1[0x16];
  }
  FUN_10038e8e0(param_1 + 0x40,"%s-%s",lVar2,lVar3);
  lVar2 = param_1[0x41];
  if (lVar2 == 0) {
    lVar2 = param_1[0x43];
  }
  return lVar2;
}

