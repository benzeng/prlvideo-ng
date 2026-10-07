
void FUN_10039f200(long param_1,undefined4 param_2,long *param_3)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  size_t sVar11;
  bool bVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uVar6 = (**(code **)(*param_3 + 0x38))(param_3);
  FUN_1003a6eb0(param_1,uVar6);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0xb8) = (int)param_3[0x1f];
  *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)((long)param_3 + 0xfc);
  *(int *)(param_1 + 0x68) = (int)param_3[0xb];
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((long)param_3 + 0x5c);
  *(int *)(param_1 + 0x70) = (int)param_3[0xc];
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((long)param_3 + 100);
  *(int *)(param_1 + 0x78) = (int)param_3[0xd];
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((long)param_3 + 0x6c);
  *(int *)(param_1 + 0x80) = (int)param_3[0xe];
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((long)param_3 + 0x74);
  *(int *)(param_1 + 0x88) = (int)param_3[0xf];
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((long)param_3 + 0x7c);
  *(int *)(param_1 + 0x90) = (int)param_3[0x10];
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((long)param_3 + 0x84);
  *(int *)(param_1 + 0x98) = (int)param_3[0x11];
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((long)param_3 + 0x8c);
  *(int *)(param_1 + 0xa0) = (int)param_3[0x12];
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((long)param_3 + 0x94);
  *(int *)(param_1 + 0xa8) = (int)param_3[0x13];
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((long)param_3 + 0x9c);
  *(int *)(param_1 + 0xb0) = (int)param_3[0x14];
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((long)param_3 + 0xa4);
  uVar2 = param_3[4];
  pvVar3 = *(void **)(param_1 + 0x20);
  if ((ulong)((-(long)pvVar3 >> 2) * -0x3333333333333333) < uVar2) {
    lVar9 = *(long *)(param_1 + 0x28);
    pvVar7 = (void *)0x0;
    if (uVar2 != 0) {
      pvVar7 = operator_new(uVar2 * 0x14);
    }
    sVar11 = lVar9 - (long)pvVar3;
    lVar9 = SUB168(SEXT816((long)sVar11) * SEXT816(-0x6666666666666667),8);
    pvVar1 = (void *)((long)pvVar7 +
                     (((lVar9 >> 3) - (lVar9 >> 0x3f)) + ((long)sVar11 >> 2) * -0x3333333333333333)
                     * 0x14);
    _memcpy(pvVar1,pvVar3,sVar11);
    *(void **)(param_1 + 0x20) = pvVar1;
    *(void **)(param_1 + 0x28) = (void *)((long)pvVar7 + ((long)sVar11 >> 2) * 4);
    *(void **)(param_1 + 0x30) = (void *)((long)pvVar7 + uVar2 * 0x14);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  plVar8 = (long *)param_3[2];
  while (plVar8 != param_3 + 3) {
    local_48 = *(undefined4 *)((long)plVar8 + 0x1c);
    uVar6 = *(undefined8 *)((long)plVar8 + 0x1c);
    uStack_3c = (undefined4)plVar8[5];
    uStack_38 = (undefined4)((ulong)plVar8[5] >> 0x20);
    uStack_44 = (undefined4)plVar8[4];
    uStack_40 = (undefined4)((ulong)plVar8[4] >> 0x20);
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    if (puVar4 == *(undefined8 **)(param_1 + 0x30)) {
      FUN_1003a6f80(param_1 + 0x20,&local_48);
    }
    else {
      *(undefined4 *)(puVar4 + 2) = uStack_38;
      puVar4[1] = CONCAT44(uStack_3c,uStack_40);
      *puVar4 = uVar6;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x14;
    }
    plVar5 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar8[2];
        bVar12 = (long *)*plVar5 != plVar8;
        plVar8 = plVar5;
      } while (bVar12);
    }
    else {
      do {
        plVar8 = plVar5;
        plVar5 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  uVar2 = param_3[7];
  pvVar3 = *(void **)(param_1 + 0x38);
  if ((ulong)((*(long *)(param_1 + 0x48) - (long)pvVar3 >> 2) * -0x3333333333333333) < uVar2) {
    lVar9 = *(long *)(param_1 + 0x40);
    pvVar7 = (void *)0x0;
    if (uVar2 != 0) {
      pvVar7 = operator_new(uVar2 * 0x14);
    }
    sVar11 = lVar9 - (long)pvVar3;
    lVar9 = SUB168(SEXT816((long)sVar11) * SEXT816(-0x6666666666666667),8);
    pvVar1 = (void *)((long)pvVar7 +
                     (((lVar9 >> 3) - (lVar9 >> 0x3f)) + ((long)sVar11 >> 2) * -0x3333333333333333)
                     * 0x14);
    _memcpy(pvVar1,pvVar3,sVar11);
    *(void **)(param_1 + 0x38) = pvVar1;
    *(void **)(param_1 + 0x40) = (void *)((long)pvVar7 + ((long)sVar11 >> 2) * 4);
    *(void **)(param_1 + 0x48) = (void *)((long)pvVar7 + uVar2 * 0x14);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  plVar8 = (long *)param_3[5];
  while (plVar8 != param_3 + 6) {
    local_60 = *(undefined4 *)((long)plVar8 + 0x1c);
    uVar6 = *(undefined8 *)((long)plVar8 + 0x1c);
    uStack_54 = (undefined4)plVar8[5];
    uStack_50 = (undefined4)((ulong)plVar8[5] >> 0x20);
    uStack_5c = (undefined4)plVar8[4];
    uStack_58 = (undefined4)((ulong)plVar8[4] >> 0x20);
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    if (puVar4 == *(undefined8 **)(param_1 + 0x48)) {
      FUN_1003a7110(param_1 + 0x38,&local_60);
    }
    else {
      *(undefined4 *)(puVar4 + 2) = uStack_50;
      puVar4[1] = CONCAT44(uStack_54,uStack_58);
      *puVar4 = uVar6;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 0x14;
    }
    plVar5 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar8[2];
        bVar12 = (long *)*plVar5 != plVar8;
        plVar8 = plVar5;
      } while (bVar12);
    }
    else {
      do {
        plVar8 = plVar5;
        plVar5 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  uVar2 = param_3[10];
  pvVar3 = *(void **)(param_1 + 0x50);
  if ((ulong)(*(long *)(param_1 + 0x60) - (long)pvVar3 >> 3) < uVar2) {
    lVar9 = *(long *)(param_1 + 0x58);
    pvVar7 = (void *)0x0;
    if (uVar2 != 0) {
      pvVar7 = operator_new(uVar2 * 8);
    }
    sVar11 = lVar9 - (long)pvVar3;
    _memcpy(pvVar7,pvVar3,sVar11);
    *(void **)(param_1 + 0x50) = pvVar7;
    *(void **)(param_1 + 0x58) = (void *)((long)pvVar7 + ((long)sVar11 >> 3) * 8);
    *(void **)(param_1 + 0x60) = (void *)((long)pvVar7 + uVar2 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if ((long *)param_3[8] != param_3 + 9) {
    plVar8 = (long *)param_3[8];
    do {
      local_68 = *(undefined4 *)((long)plVar8 + 0x1c);
      uStack_64 = (undefined4)plVar8[4];
      if (*(undefined8 **)(param_1 + 0x58) == *(undefined8 **)(param_1 + 0x60)) {
        FUN_1003a72a0(param_1 + 0x50,&local_68);
      }
      else {
        **(undefined8 **)(param_1 + 0x58) = *(undefined8 *)((long)plVar8 + 0x1c);
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 8;
      }
      plVar5 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar8[2];
          bVar12 = (long *)*plVar10 != plVar8;
          plVar8 = plVar10;
        } while (bVar12);
      }
      else {
        do {
          plVar10 = plVar5;
          plVar5 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar8 = plVar10;
    } while (plVar10 != param_3 + 9);
  }
  return;
}

