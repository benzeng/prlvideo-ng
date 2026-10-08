
void FUN_100a47680(long param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar9 = 0;
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + 8);
    uVar9 = 0;
    if (lVar5 != param_1) {
      uVar9 = 0;
      do {
        bVar1 = *(byte *)(*(long *)(lVar5 + 0x10) + 0x10);
        if ((bVar1 & 1) == 0) {
          uVar7 = (uint)(bVar1 >> 1);
        }
        else {
          uVar7 = (uint)*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x18);
        }
        uVar9 = (ulong)((int)uVar9 + 8 + uVar7 * 2);
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != param_1);
    }
  }
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 8);
    uVar11 = 0;
    if (lVar5 != param_2) {
      uVar11 = 0;
      do {
        uVar11 = (ulong)(uint)(((int)uVar11 + 8 + *(int *)(*(long *)(lVar5 + 0x10) + 0x18)) -
                              *(int *)(*(long *)(lVar5 + 0x10) + 0x10));
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != param_2);
    }
    uVar9 = uVar9 + uVar11;
  }
  if (uVar9 != 0) {
    puVar3 = operator_new(uVar9);
    uVar13 = uVar9 & 0xffffffffffffffe0;
    puVar8 = puVar3;
    uVar11 = uVar9;
    uVar14 = 0;
    if (uVar13 != 0) {
      puVar8 = (undefined4 *)((long)puVar3 + (uVar9 & 0xffffffffffffffe0));
      uVar11 = uVar9 - (uVar9 & 0xffffffffffffffe0);
      puVar4 = (undefined8 *)(puVar3 + 4);
      uVar6 = uVar13;
      do {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 4;
        uVar6 = uVar6 - 0x20;
        uVar14 = uVar13;
      } while (uVar6 != 0);
    }
    if (uVar9 != uVar14) {
      do {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((long)puVar8 + 1);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    pvVar12 = (void *)*param_3;
    *param_3 = puVar3;
    param_3[1] = (undefined1 *)((long)puVar3 + uVar9);
    param_3[2] = (undefined1 *)((long)puVar3 + uVar9);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
      puVar3 = (undefined4 *)*param_3;
    }
    if (param_2 != 0) {
      for (lVar5 = *(long *)(param_2 + 8); lVar5 != param_2; lVar5 = *(long *)(lVar5 + 8)) {
        lVar2 = *(long *)(lVar5 + 0x10);
        pvVar12 = *(void **)(lVar2 + 0x10);
        sVar10 = *(long *)(lVar2 + 0x18) - (long)pvVar12;
        *puVar3 = *(undefined4 *)(lVar2 + 0xc);
        puVar3[1] = (int)sVar10;
        if (sVar10 != 0) {
          _memcpy(puVar3 + 2,pvVar12,sVar10);
        }
        puVar3 = (undefined4 *)(sVar10 + 8 + (long)puVar3);
      }
    }
    if (param_1 != 0) {
      for (lVar5 = *(long *)(param_1 + 8); lVar5 != param_1; lVar5 = *(long *)(lVar5 + 8)) {
        lVar2 = *(long *)(lVar5 + 0x10);
        if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
          uVar9 = (ulong)(*(byte *)(lVar2 + 0x10) >> 1);
        }
        else {
          uVar9 = *(ulong *)(lVar2 + 0x18);
        }
        sVar10 = uVar9 * 2;
        *puVar3 = *(undefined4 *)(lVar2 + 0xc);
        puVar3[1] = (int)sVar10;
        if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
          pvVar12 = (void *)(lVar2 + 0x12);
        }
        else {
          pvVar12 = *(void **)(lVar2 + 0x20);
        }
        _memcpy(puVar3 + 2,pvVar12,sVar10);
        puVar3 = (undefined4 *)(sVar10 + 8 + (long)puVar3);
      }
    }
  }
  return;
}

