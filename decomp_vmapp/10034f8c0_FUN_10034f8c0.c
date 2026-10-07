
undefined8 FUN_10034f8c0(long param_1,uint *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar10 = (ulong)*param_2;
  *(uint *)(param_1 + 4) = *param_2;
  lVar8 = uVar10 * 0x10;
  puVar5 = operator_new__(lVar8 + 8);
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
      lVar8 = lVar8 + -0x10;
      puVar6 = puVar6 + 2;
    } while (lVar8 != 0);
    uVar7 = 0;
    *(ulong **)(param_1 + 8) = puVar5;
    if (*(int *)(param_1 + 4) != 0) {
      uVar9 = 0;
      lVar8 = 0xc;
      while( true ) {
        uVar3 = *(undefined4 *)((long)param_2 + lVar8 + 4);
        uVar4 = *(uint *)((long)param_2 + lVar8);
        bVar2 = *(byte *)((long)param_2 + lVar8 + 8);
        *(undefined4 *)((long)puVar5 + lVar8 + -0xc) = *(undefined4 *)((long)param_2 + lVar8 + -4);
        *(undefined4 *)((long)puVar5 + lVar8 + -8) = uVar3;
        *(uint *)((long)puVar5 + lVar8 + -4) = uVar4;
        *(byte *)((long)puVar5 + lVar8) = bVar2;
        uVar7 = 3;
        if (4 < (ulong)uVar4) break;
        piVar1 = (int *)(param_1 + 0x10 + (ulong)uVar4 * 4);
        *piVar1 = *piVar1 + ((uint)(bVar2 >> 3 & 1) +
                            (uint)(bVar2 >> 2 & 1) + (uint)(bVar2 >> 1 & 1) + (uint)(bVar2 & 1)) * 4
        ;
        uVar9 = uVar9 + 1;
        if (*(uint *)(param_1 + 4) <= uVar9) {
          return 0;
        }
        lVar8 = lVar8 + 0x10;
        puVar5 = *(ulong **)(param_1 + 8);
      }
    }
  }
  return uVar7;
}

