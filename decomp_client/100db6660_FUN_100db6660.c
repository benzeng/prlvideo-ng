
undefined8 * FUN_100db6660(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint *puVar10;
  
  puVar8 = (undefined8 *)0x0;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = _malloc(0x858);
    puVar8 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[10] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(puVar3 + 1) = uVar2;
      puVar3[3] = param_1[3];
      puVar3[6] = param_1[6];
      puVar3[2] = param_1;
      puVar3[9] = FUN_100db6090;
      *puVar3 = *param_1;
      *(undefined4 *)(param_1 + 7) = 1;
      uVar1 = *(uint *)(param_1 + 10);
      pvVar4 = _valloc((ulong)uVar1);
      puVar3[0xb] = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _free(puVar3);
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(uint *)(puVar3 + 0xc) = uVar1;
        *(uint *)(puVar3 + 10) = uVar1;
        *(undefined4 *)((long)puVar3 + 0x54) = 1;
        puVar8 = puVar3;
        if (((uVar2 & 1) != 0) && (uVar2 = *(uint *)((long)param_1 + 0x54), uVar2 != 0)) {
          puVar10 = (uint *)(param_1 + 0xc);
          uVar7 = 0;
          uVar6 = 0;
          do {
            uVar5 = *puVar10;
            uVar9 = uVar5 + uVar6;
            if (uVar9 != 0) {
              if (uVar1 <= uVar6) {
                return puVar3;
              }
              if (uVar1 < uVar9) {
                uVar5 = (uVar5 + uVar1) - uVar9;
              }
              _memcpy(pvVar4,*(void **)(puVar10 + -2),(ulong)uVar5);
              pvVar4 = (void *)((long)pvVar4 + (ulong)uVar5);
              uVar2 = *(uint *)((long)param_1 + 0x54);
            }
            uVar7 = uVar7 + 1;
            puVar10 = puVar10 + 4;
            uVar6 = uVar9;
          } while (uVar7 < uVar2);
        }
      }
    }
  }
  return puVar8;
}

