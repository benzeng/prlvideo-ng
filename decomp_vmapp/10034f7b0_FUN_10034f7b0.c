
undefined8 FUN_10034f7b0(long param_1,uint *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar10 = (ulong)*param_2;
  *(uint *)(param_1 + 4) = *param_2;
  lVar9 = uVar10 * 0x10;
  puVar5 = operator_new__(lVar9 + 8);
  *puVar5 = uVar10;
  puVar5 = puVar5 + 1;
  puVar6 = puVar5;
  if (uVar10 == 0) {
    *(ulong **)(param_1 + 8) = puVar5;
    uVar7 = 0;
  }
  else {
    do {
      *(undefined1 *)((long)puVar6 + 0xc) = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = 0;
      lVar9 = lVar9 + -0x10;
      puVar6 = puVar6 + 2;
    } while (lVar9 != 0);
    uVar7 = 0;
    *(ulong **)(param_1 + 8) = puVar5;
    if (*(int *)(param_1 + 4) != 0) {
      param_2 = param_2 + 4;
      uVar8 = 0;
      lVar9 = 0xc;
      while( true ) {
        uVar3 = param_2[-2];
        uVar4 = param_2[-1];
        bVar2 = (byte)*param_2;
        *(undefined4 *)((long)puVar5 + lVar9 + -0xc) = 0;
        *(uint *)((long)puVar5 + lVar9 + -8) = uVar4;
        *(uint *)((long)puVar5 + lVar9 + -4) = uVar3;
        *(byte *)((long)puVar5 + lVar9) = bVar2;
        uVar7 = 3;
        if (4 < (ulong)uVar3) break;
        piVar1 = (int *)(param_1 + 0x10 + (ulong)uVar3 * 4);
        *piVar1 = *piVar1 + ((uint)(bVar2 >> 3 & 1) +
                            (uint)(bVar2 >> 2 & 1) + (uint)(bVar2 >> 1 & 1) + (uint)(bVar2 & 1)) * 4
        ;
        uVar8 = uVar8 + 1;
        if (*(uint *)(param_1 + 4) <= uVar8) {
          return 0;
        }
        lVar9 = lVar9 + 0x10;
        param_2 = param_2 + 3;
        puVar5 = *(ulong **)(param_1 + 8);
      }
    }
  }
  return uVar7;
}

