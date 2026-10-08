
void FUN_100ab3790(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void **ppvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  void *local_48;
  void *local_40;
  undefined8 local_38;
  
  puVar13 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)param_1[2];
  lVar6 = 0;
  uVar1 = (long)puVar9 - (long)puVar13;
  if (uVar1 != 0) {
    lVar6 = uVar1 * 0x20 + -1;
  }
  if ((ulong)((lVar6 - param_1[4]) - param_1[5]) < 0x100) {
    puVar4 = (undefined8 *)*param_1;
    puVar16 = (undefined8 *)param_1[3];
    uVar7 = (long)puVar16 - (long)puVar4;
    if (uVar1 < uVar7) {
      pvVar2 = operator_new(0x1000);
      if (puVar13 == puVar4) {
        puVar11 = puVar9;
        if (puVar9 == puVar16) {
          uVar7 = (long)puVar9 - (long)puVar4 >> 2;
          uVar1 = 1;
          if (uVar7 != 0) {
            uVar1 = uVar7;
          }
          pvVar5 = operator_new(uVar1 * 8);
          puVar16 = (undefined8 *)((long)pvVar5 + (uVar1 & 0x7ffffffffffffffc) * 2);
          puVar11 = puVar16;
          if (puVar9 != puVar13) {
            do {
              *puVar11 = *puVar13;
              puVar11 = puVar11 + 1;
              puVar13 = puVar13 + 1;
            } while (puVar9 != puVar13);
            puVar4 = (undefined8 *)*param_1;
          }
          *param_1 = (long)pvVar5;
          param_1[1] = (long)puVar16;
          param_1[2] = (long)puVar11;
          param_1[3] = (long)((long)pvVar5 + uVar1 * 8);
          if (puVar4 != (undefined8 *)0x0) {
            operator_delete(puVar4);
            puVar11 = (undefined8 *)param_1[2];
          }
        }
        *puVar11 = pvVar2;
        puVar13 = (undefined8 *)param_1[2];
        param_1[2] = (long)(puVar13 + 1);
        local_48 = (void *)*puVar13;
        param_1[2] = (long)puVar13;
        ppvVar12 = &local_48;
      }
      else {
        ppvVar12 = &local_40;
        local_40 = pvVar2;
      }
      FUN_100ab3530(param_1,ppvVar12);
      lVar6 = 0x80;
      if (param_1[2] - param_1[1] != 8) {
        lVar6 = param_1[4] + 0x100;
      }
      param_1[4] = lVar6;
    }
    else {
      lVar8 = (long)uVar7 >> 2;
      lVar6 = 1;
      if (lVar8 != 0) {
        lVar6 = lVar8;
      }
      puVar3 = operator_new(lVar6 * 8);
      pvVar2 = operator_new(0x1000);
      puVar11 = puVar3 + lVar6;
      *puVar3 = pvVar2;
      puVar10 = puVar3 + 1;
      puVar14 = puVar3;
      puVar15 = puVar3;
      puVar16 = puVar3;
      if (puVar9 != puVar13) {
        do {
          puVar9 = puVar10;
          puVar4 = puVar3;
          puVar16 = puVar15;
          if (puVar9 == puVar11) {
            if (puVar15 < puVar3 || (long)puVar15 - (long)puVar3 == 0) {
              uVar1 = (long)puVar9 - (long)puVar3 >> 2;
              if (uVar1 == 0) {
                uVar1 = 1;
              }
              puVar4 = operator_new(uVar1 * 8);
              puVar16 = (undefined8 *)((long)puVar4 + (uVar1 & 0x7ffffffffffffffc) * 2);
              bVar17 = puVar15 != puVar9;
              puVar9 = puVar16;
              if (bVar17) {
                puVar15 = puVar15 + -1;
                do {
                  puVar11 = puVar15 + 1;
                  puVar15 = puVar15 + 1;
                  *puVar9 = *puVar11;
                  puVar9 = puVar9 + 1;
                } while (puVar14 != puVar15);
              }
              puVar11 = puVar4 + uVar1;
              if (puVar3 != (undefined8 *)0x0) {
                operator_delete(puVar3);
              }
            }
            else {
              lVar6 = (long)puVar15 - (long)puVar3 >> 3;
              lVar6 = (lVar6 + 1) - (lVar6 + 1 >> 0x3f) >> 1;
              puVar16 = puVar15 + -lVar6;
              _memmove(puVar16,puVar15,(long)puVar9 - (long)puVar15);
              puVar9 = puVar15 + (((ulong)((long)puVar9 - (long)puVar15) >> 3) - lVar6);
            }
          }
          *puVar9 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar10 = puVar9 + 1;
          puVar3 = puVar4;
          puVar14 = puVar9;
          puVar15 = puVar16;
        } while (puVar13 != (undefined8 *)param_1[2]);
        puVar4 = (undefined8 *)*param_1;
      }
      *param_1 = (long)puVar3;
      param_1[1] = (long)puVar16;
      param_1[2] = (long)puVar10;
      param_1[3] = (long)puVar11;
      lVar6 = 0x80;
      if ((long)puVar10 - (long)puVar16 != 8) {
        lVar6 = param_1[4] + 0x100;
      }
      param_1[4] = lVar6;
      if (puVar4 != (undefined8 *)0x0) {
        operator_delete(puVar4);
        return;
      }
    }
  }
  else {
    param_1[4] = param_1[4] + 0x100;
    local_38 = puVar9[-1];
    param_1[2] = (long)(puVar9 + -1);
    FUN_100ab3530(param_1,&local_38);
  }
  return;
}

