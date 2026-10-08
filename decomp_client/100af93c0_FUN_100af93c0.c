
void FUN_100af93c0(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  long *local_48;
  void *local_38;
  
  if ((ulong)param_1[4] < 0x100) {
    puVar12 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)param_1[3];
    uVar3 = (long)puVar12 - param_1[1];
    uVar5 = (long)puVar7 - *param_1;
    if (uVar5 <= uVar3) {
      lVar6 = (long)uVar5 >> 2;
      lVar2 = 1;
      if (lVar6 != 0) {
        lVar2 = lVar6;
      }
      local_48 = param_1 + 3;
      puVar7 = operator_new(lVar2 * 8);
      puVar12 = (undefined8 *)((uVar3 & 0xfffffffffffffff8) + (long)puVar7);
      puStack_50 = puVar7 + lVar2;
      local_68 = puVar7;
      puStack_60 = puVar12;
      local_58 = puVar12;
      pvVar8 = operator_new(0x1000);
      if ((long)uVar3 >> 3 == lVar2) {
        lVar2 = (long)puVar12 - (long)puVar7;
        if (puVar12 < puVar7 || lVar2 == 0) {
          uVar5 = 1;
          if (lVar2 >> 2 != 0) {
            uVar5 = lVar2 >> 2;
          }
          local_68 = operator_new(uVar5 * 8);
          puVar12 = (undefined8 *)((long)local_68 + (uVar5 & 0x7ffffffffffffffc) * 2);
          puStack_50 = local_68 + uVar5;
          puStack_60 = puVar12;
          local_58 = puVar12;
          operator_delete(puVar7);
        }
        else {
          puVar12 = puVar7 + (((long)uVar3 >> 3) -
                             ((ulong)(((lVar2 >> 3) + 1) - ((lVar2 >> 3) + 1 >> 0x3f)) >> 1));
          puStack_60 = puVar12;
          local_58 = puVar12;
        }
      }
      *puVar12 = pvVar8;
      local_58 = local_58 + 1;
      lVar2 = param_1[2];
      while (lVar6 = param_1[1], lVar2 != lVar6) {
        lVar2 = lVar2 + -8;
        FUN_100af9920(&local_68,lVar2);
      }
      puVar12 = (undefined8 *)*param_1;
      *param_1 = (long)local_68;
      param_1[1] = (long)puStack_60;
      lVar2 = param_1[2];
      lVar1 = param_1[3];
      param_1[2] = (long)local_58;
      param_1[3] = (long)puStack_50;
      local_58 = (undefined8 *)lVar2;
      if (lVar2 != lVar6) {
        local_58 = (undefined8 *)((~((lVar2 + -8) - lVar6) & 0xfffffffffffffff8U) + lVar2);
      }
      if (puVar12 == (undefined8 *)0x0) {
        return;
      }
      local_68 = puVar12;
      puStack_60 = (undefined8 *)lVar6;
      puStack_50 = (undefined8 *)lVar1;
      operator_delete(puVar12);
      return;
    }
    local_38 = operator_new(0x1000);
    if (puVar7 != puVar12) {
      *puVar12 = local_38;
      goto LAB_100af97bf;
    }
    FUN_100af97f0(param_1,&local_38);
    puVar7 = (undefined8 *)param_1[1];
    local_70 = *puVar7;
    puVar12 = puVar7 + 1;
    param_1[1] = (long)puVar12;
    puVar13 = (undefined8 *)param_1[2];
    if (puVar13 == (undefined8 *)param_1[3]) {
      puVar11 = (undefined8 *)*param_1;
      lVar2 = (long)puVar12 - (long)puVar11;
      if (puVar12 < puVar11 || lVar2 == 0) {
        uVar3 = (long)puVar13 - (long)puVar11 >> 2;
        uVar5 = 1;
        if (uVar3 != 0) {
          uVar5 = uVar3;
        }
        pvVar4 = operator_new(uVar5 * 8);
        puVar9 = (undefined8 *)((long)pvVar4 + (uVar5 & 0x7ffffffffffffffc) * 2);
        pvVar8 = (void *)((long)pvVar4 + uVar5 * 8);
        puVar10 = puVar9;
        if (puVar12 != puVar13) {
          do {
            puVar11 = puVar12;
            *puVar10 = *puVar11;
            puVar10 = puVar10 + 1;
            puVar12 = puVar7 + 2;
            puVar7 = puVar11;
          } while (puVar12 != puVar13);
          goto LAB_100af978c;
        }
        goto LAB_100af979f;
      }
      goto LAB_100af95a3;
    }
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    puVar7 = (undefined8 *)param_1[1];
    local_70 = *puVar7;
    puVar12 = puVar7 + 1;
    param_1[1] = (long)puVar12;
    puVar13 = (undefined8 *)param_1[2];
    if (puVar13 == (undefined8 *)param_1[3]) {
      puVar11 = (undefined8 *)*param_1;
      lVar2 = (long)puVar12 - (long)puVar11;
      if (puVar11 <= puVar12 && lVar2 != 0) {
LAB_100af95a3:
        lVar2 = ((lVar2 >> 3) + 1) - ((lVar2 >> 3) + 1 >> 0x3f) >> 1;
        _memmove(puVar7 + (1 - lVar2),puVar12,(long)puVar13 - (long)puVar12);
        param_1[2] = (long)(puVar7 + (((ulong)((long)puVar13 - (long)puVar12) >> 3) - lVar2) + 1);
        param_1[1] = param_1[1] + lVar2 * -8;
        puVar7[(((ulong)((long)puVar13 - (long)puVar12) >> 3) - lVar2) + 1] = local_70;
        goto LAB_100af97bf;
      }
      uVar3 = (long)puVar13 - (long)puVar11 >> 2;
      uVar5 = 1;
      if (uVar3 != 0) {
        uVar5 = uVar3;
      }
      pvVar4 = operator_new(uVar5 * 8);
      puVar9 = (undefined8 *)((long)pvVar4 + (uVar5 & 0x7ffffffffffffffc) * 2);
      pvVar8 = (void *)((long)pvVar4 + uVar5 * 8);
      puVar10 = puVar9;
      if (puVar12 != puVar13) {
        do {
          puVar11 = puVar12;
          *puVar10 = *puVar11;
          puVar10 = puVar10 + 1;
          puVar12 = puVar7 + 2;
          puVar7 = puVar11;
        } while (puVar12 != puVar13);
LAB_100af978c:
        puVar11 = (undefined8 *)*param_1;
      }
LAB_100af979f:
      puVar13 = puVar10;
      *param_1 = (long)pvVar4;
      param_1[1] = (long)puVar9;
      param_1[2] = (long)puVar13;
      param_1[3] = (long)pvVar8;
      if (puVar11 != (undefined8 *)0x0) {
        operator_delete(puVar11);
        puVar13 = (undefined8 *)param_1[2];
      }
    }
  }
  *puVar13 = local_70;
LAB_100af97bf:
  param_1[2] = param_1[2] + 8;
  return;
}

