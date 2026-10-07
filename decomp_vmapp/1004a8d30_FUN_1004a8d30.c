
void FUN_1004a8d30(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_1; lVar1 = *(long *)(lVar1 + 8)) {
    *param_2 = 1;
    lVar2 = *(long *)(lVar1 + 0x10);
    *(undefined4 *)(param_2 + 1) = 2;
    *(undefined4 *)((long)param_2 + 0xc) = 4;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar2 + 0xc);
    lVar2 = *(long *)(lVar1 + 0x10);
    if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
      uVar9 = (ulong)(*(byte *)(lVar2 + 0x10) >> 1);
    }
    else {
      uVar9 = *(ulong *)(lVar2 + 0x18);
    }
    sVar5 = uVar9 * 2;
    *(undefined4 *)((long)param_2 + 0x14) = 3;
    *(int *)(param_2 + 3) = (int)sVar5;
    if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
      pvVar8 = (void *)(lVar2 + 0x12);
    }
    else {
      pvVar8 = *(void **)(lVar2 + 0x20);
    }
    _memcpy((void *)((long)param_2 + 0x1c),pvVar8,sVar5);
    lVar2 = *(long *)(lVar1 + 0x10);
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      uVar9 = (ulong)(*(byte *)(lVar2 + 0x28) >> 1);
    }
    else {
      uVar9 = *(ulong *)(lVar2 + 0x30);
    }
    sVar6 = uVar9 * 2;
    *(undefined4 *)((long)param_2 + sVar5 + 0x1c) = 4;
    *(int *)((long)param_2 + sVar5 + 0x20) = (int)sVar6;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      pvVar8 = (void *)(lVar2 + 0x2a);
    }
    else {
      pvVar8 = *(void **)(lVar2 + 0x38);
    }
    _memcpy((void *)((long)param_2 + sVar5 + 0x24),pvVar8,sVar6);
    lVar2 = sVar6 + sVar5 + 0x24;
    lVar3 = *(long *)(lVar1 + 0x10);
    *(undefined4 *)((long)param_2 + lVar2) = 5;
    *(undefined4 *)((long)param_2 + lVar2 + 4) = 0xc;
    *(undefined4 *)((long)param_2 + lVar2 + 0x10) = *(undefined4 *)(lVar3 + 0x48);
    *(undefined8 *)((long)param_2 + lVar2 + 8) = *(undefined8 *)(lVar3 + 0x40);
    puVar10 = (undefined8 *)((long)param_2 + lVar2 + 0x14);
    pvVar8 = *(void **)(*(long *)(lVar1 + 0x10) + 0x50);
    pvVar4 = *(void **)(*(long *)(lVar1 + 0x10) + 0x58);
    if (pvVar8 != pvVar4) {
      sVar7 = (long)pvVar4 - (long)pvVar8;
      *(int *)((long)param_2 + lVar2 + 4) = (int)sVar7 + 0xc;
      _memcpy(puVar10,pvVar8,sVar7);
      puVar10 = (undefined8 *)
                (((sVar6 + 0x14 + sVar5 + 0x24 + *(long *)(*(long *)(lVar1 + 0x10) + 0x58)) -
                 *(long *)(*(long *)(lVar1 + 0x10) + 0x50)) + (long)param_2);
    }
    *(int *)((long)param_2 + 4) = (int)puVar10 - ((int)param_2 + 8);
    param_2 = puVar10;
  }
  return;
}

