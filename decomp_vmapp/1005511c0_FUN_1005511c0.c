
undefined2 * FUN_1005511c0(long param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar7 = *(long *)(param_1 + 0x20);
  puVar11 = *(undefined2 **)(lVar7 + (long)param_3 * 8);
  if ((puVar11 == (undefined2 *)0x0) &&
     (puVar11 = *(undefined2 **)(lVar7 + (long)*(int *)(param_1 + 0x28) * 8),
     puVar11 == (undefined2 *)0x0)) {
    return (undefined2 *)0x0;
  }
  uVar3 = *(uint *)(puVar11 + 2);
  uVar6 = uVar3 - 1;
  bVar2 = *(byte *)(param_1 + 0x10);
  if (bVar2 < uVar6) {
    uVar6 = (uint)bVar2;
  }
  if (*(long *)(puVar11 + 4) == 0) {
    *(undefined8 *)(lVar7 + (long)(int)uVar6 * 8) = *(undefined8 *)(puVar11 + 8);
  }
  else {
    *(undefined8 *)(*(long *)(puVar11 + 4) + 0x10) = *(undefined8 *)(puVar11 + 8);
  }
  if (*(long *)(puVar11 + 8) != 0) {
    *(undefined8 *)(*(long *)(puVar11 + 8) + 8) = *(undefined8 *)(puVar11 + 4);
  }
  uVar13 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == uVar6) {
    uVar13 = (ulong)uVar6;
    if (*(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar6 * 8) == 0) {
      uVar6 = ~(uint)bVar2;
      if (uVar6 < -uVar3) {
        uVar6 = -uVar3;
      }
      lVar7 = (long)(int)~uVar6;
      uVar8 = (long)(int)(-2 - uVar6);
      do {
        uVar13 = uVar8;
        if (lVar7 < 1) break;
        lVar7 = lVar7 + -1;
        uVar8 = uVar13 - 1;
      } while (*(long *)(*(long *)(param_1 + 0x20) + uVar13 * 8) == 0);
      *(int *)(param_1 + 0x28) = (int)uVar13;
    }
  }
  uVar6 = param_3 + 1;
  iVar9 = uVar3 - uVar6;
  if (uVar6 <= uVar3 && iVar9 != 0) {
    uVar8 = (ulong)(uint)(iVar9 * *(int *)(param_1 + 0xc));
    uVar12 = (ulong)(*(int *)(param_1 + 0xc) * uVar6);
    puVar1 = (undefined2 *)((long)puVar11 + uVar12);
    *(int *)((long)puVar11 + uVar12 + 4) = iVar9;
    *(short *)((long)puVar11 + uVar12 + 2) = (short)uVar6;
    if (uVar8 + uVar12 + (long)puVar11 != (ulong)*(uint *)(param_1 + 8) + *(long *)(param_1 + 0x18))
    {
      *(short *)((long)puVar11 + uVar12 + 2 + uVar8) = (short)iVar9;
      iVar9 = *(int *)((long)puVar11 + uVar12 + 4);
    }
    *puVar1 = 0;
    uVar6 = iVar9 - 1;
    if (bVar2 < uVar6) {
      uVar6 = (uint)bVar2;
    }
    lVar5 = (long)(int)uVar6;
    lVar7 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(lVar7 + lVar5 * 8);
    uVar10 = 0;
    if (lVar4 != 0) {
      *(undefined2 **)(lVar4 + 8) = puVar1;
      uVar10 = *(undefined8 *)(lVar7 + lVar5 * 8);
    }
    *(undefined8 *)(uVar12 + 0x10 + (long)puVar11) = uVar10;
    *(undefined8 *)(uVar12 + 8 + (long)puVar11) = 0;
    *(undefined2 **)(lVar7 + lVar5 * 8) = puVar1;
    if ((int)uVar13 < (int)uVar6) {
      *(uint *)(param_1 + 0x28) = uVar6;
    }
  }
  *puVar11 = param_2;
  return puVar11 + 2;
}

