
/* WARNING: Type propagation algorithm not settling */

void FUN_10033c310(undefined8 param_1,undefined4 *param_2,uint param_3,long *param_4,long *param_5,
                  undefined8 *param_6)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  long *plVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  uint local_44 [3];
  uint local_38 [2];
  
  puVar8 = (undefined4 *)*param_6;
  puVar3 = (undefined4 *)param_6[1];
  if (puVar3 != puVar8) {
    puVar8 = (undefined4 *)
             ((~((long)puVar3 + (-4 - (long)puVar8)) & 0xfffffffffffffffcU) + (long)puVar3);
    param_6[1] = puVar8;
  }
  if (puVar8 == (undefined4 *)param_6[2]) {
    FUN_10027f110(param_6);
  }
  else {
    *puVar8 = *param_2;
    param_6[1] = puVar8 + 1;
  }
  lVar9 = *param_4;
  if (lVar9 != param_4[1]) {
    do {
      local_38[1] = 0x1f;
      puVar5 = (uint *)param_6[1];
      puVar6 = (uint *)param_6[2];
      if (puVar5 == puVar6) {
        FUN_10027f110(param_6,local_38 + 1);
        puVar5 = (uint *)param_6[1];
        puVar6 = (uint *)param_6[2];
      }
      else {
        *puVar5 = 0x1f;
        puVar5 = puVar5 + 1;
        param_6[1] = puVar5;
      }
      bVar1 = *(byte *)(lVar9 + 6);
      bVar2 = *(byte *)(lVar9 + 7);
      local_38[0] = (uint)bVar2 << 0x10 | (uint)bVar1 | 0x80000000;
      if (puVar5 == puVar6) {
        FUN_10027f110(param_6,local_38);
        bVar1 = *(byte *)(lVar9 + 6);
        bVar2 = *(byte *)(lVar9 + 7);
      }
      else {
        *puVar5 = local_38[0];
        param_6[1] = puVar5 + 1;
      }
      local_44[2] = FUN_1003916b0(bVar1,bVar2,bVar2,bVar1);
      local_44[2] = local_44[2] | 0x900f0000;
      puVar6 = (uint *)param_6[1];
      if (puVar6 == (uint *)param_6[2]) {
        FUN_10027f110(param_6,local_44 + 2);
      }
      else {
        *puVar6 = local_44[2];
        param_6[1] = puVar6 + 1;
      }
      lVar9 = lVar9 + 8;
    } while (lVar9 != param_4[1]);
  }
  if ((long *)*param_5 != param_5 + 1) {
    plVar7 = (long *)*param_5;
    do {
      local_44[1] = 0x51;
      puVar6 = (uint *)param_6[1];
      puVar5 = (uint *)param_6[2];
      if (puVar6 == puVar5) {
        FUN_10027f110(param_6,local_44 + 1);
        puVar6 = (uint *)param_6[1];
        puVar5 = (uint *)param_6[2];
      }
      else {
        *puVar6 = 0x51;
        puVar6 = puVar6 + 1;
        param_6[1] = puVar6;
      }
      local_44[0] = *(uint *)((long)plVar7 + 0x1c) | 0xa00f0000;
      if (puVar6 == puVar5) {
        FUN_10027f110(param_6,local_44);
        puVar6 = (uint *)param_6[1];
        puVar5 = (uint *)param_6[2];
      }
      else {
        *puVar6 = local_44[0];
        puVar6 = puVar6 + 1;
        param_6[1] = puVar6;
      }
      if (puVar6 == puVar5) {
        FUN_10027f110(param_6);
        puVar6 = (uint *)param_6[1];
        puVar5 = (uint *)param_6[2];
      }
      else {
        *puVar6 = *(uint *)(plVar7 + 4);
        puVar6 = puVar6 + 1;
        param_6[1] = puVar6;
      }
      if (puVar6 == puVar5) {
        FUN_10027f110(param_6);
        puVar6 = (uint *)param_6[1];
        puVar5 = (uint *)param_6[2];
      }
      else {
        *puVar6 = *(uint *)((long)plVar7 + 0x24);
        puVar6 = puVar6 + 1;
        param_6[1] = puVar6;
      }
      if (puVar6 == puVar5) {
        FUN_10027f110(param_6);
        puVar6 = (uint *)param_6[1];
        puVar5 = (uint *)param_6[2];
      }
      else {
        *puVar6 = *(uint *)(plVar7 + 5);
        puVar6 = puVar6 + 1;
        param_6[1] = puVar6;
      }
      if (puVar6 == puVar5) {
        FUN_10027f110(param_6);
      }
      else {
        *puVar6 = *(uint *)((long)plVar7 + 0x2c);
        param_6[1] = puVar6 + 1;
      }
      plVar4 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar7[2];
          bVar11 = (long *)*plVar10 != plVar7;
          plVar7 = plVar10;
        } while (bVar11);
      }
      else {
        do {
          plVar10 = plVar4;
          plVar4 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar7 = plVar10;
    } while (plVar10 != param_5 + 1);
  }
  FUN_10033f0e0(param_6,param_6[1],param_2 + 1,param_2 + param_3);
  return;
}

