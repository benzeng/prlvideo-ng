
void FUN_100452850(undefined2 *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  
  puVar5 = param_2;
  if (1 < param_3) {
    uVar1 = param_3 - 2;
    uVar3 = uVar1 >> 1;
    uVar2 = (ulong)uVar3;
    puVar5 = param_2 + uVar2 * 8 + 8;
    lVar4 = 0;
    do {
      *(ushort *)((long)param_1 + lVar4) = CONCAT11(param_2[lVar4 + 1],param_2[lVar4 * 2]);
      *(ushort *)((long)param_1 + lVar4 + 2) = CONCAT11(param_2[lVar4 + 2],param_2[lVar4 * 2 + 4]);
      param_3 = param_3 - 2;
      lVar4 = lVar4 + 4;
    } while (1 < param_3);
    param_3 = uVar1 + uVar3 * -2;
    param_2 = param_2 + uVar2 * 4 + 4;
    param_1 = param_1 + uVar2 * 2 + 2;
  }
  if (param_3 != 0) {
    *param_1 = CONCAT11(param_2[1],*puVar5);
    param_1[1] = CONCAT11(param_2[2],*puVar5);
  }
  return;
}

