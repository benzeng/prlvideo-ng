
void FUN_100032300(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  uVar10 = (ulong)(param_2 - (long)param_1) >> 5;
  if (1 < (int)uVar10) {
    puVar1 = (undefined8 *)(param_2 + -0x20);
    do {
      cVar7 = (*param_4)(puVar1,param_1);
      if (cVar7 != '\0') {
        uVar2 = *(undefined8 *)(param_2 + -8);
        uVar3 = *(undefined8 *)(param_2 + -0x10);
        uVar4 = *puVar1;
        uVar5 = *(undefined8 *)(param_2 + -0x18);
        *(undefined8 *)(param_2 + -8) = param_1[3];
        *(undefined8 *)(param_2 + -0x10) = param_1[2];
        uVar6 = *param_1;
        *(undefined8 *)(param_2 + -0x18) = param_1[1];
        *puVar1 = uVar6;
        param_1[3] = uVar2;
        param_1[2] = uVar3;
        param_1[1] = uVar5;
        *param_1 = uVar4;
      }
      iVar9 = (int)uVar10;
      if (iVar9 == 2) {
        return;
      }
      puVar8 = param_1 + (long)((int)(((uint)(uVar10 >> 0x1f) & 1) + iVar9) >> 1) * 4;
      cVar7 = (*param_4)(puVar8,param_1);
      if (cVar7 != '\0') {
        uVar2 = puVar8[3];
        uVar3 = puVar8[2];
        uVar4 = *puVar8;
        uVar5 = puVar8[1];
        puVar8[3] = param_1[3];
        puVar8[2] = param_1[2];
        uVar6 = *param_1;
        puVar8[1] = param_1[1];
        *puVar8 = uVar6;
        param_1[3] = uVar2;
        param_1[2] = uVar3;
        param_1[1] = uVar5;
        *param_1 = uVar4;
      }
      cVar7 = (*param_4)(puVar1,puVar8);
      if (cVar7 != '\0') {
        uVar2 = *(undefined8 *)(param_2 + -8);
        uVar3 = *(undefined8 *)(param_2 + -0x10);
        uVar4 = *puVar1;
        uVar5 = *(undefined8 *)(param_2 + -0x18);
        *(undefined8 *)(param_2 + -8) = puVar8[3];
        *(undefined8 *)(param_2 + -0x10) = puVar8[2];
        uVar6 = *puVar8;
        *(undefined8 *)(param_2 + -0x18) = puVar8[1];
        *puVar1 = uVar6;
        puVar8[3] = uVar2;
        puVar8[2] = uVar3;
        puVar8[1] = uVar5;
        *puVar8 = uVar4;
      }
      if (iVar9 == 3) {
        return;
      }
      uVar2 = puVar8[3];
      uVar3 = puVar8[2];
      uVar4 = *puVar8;
      uVar5 = puVar8[1];
      puVar8[3] = *(undefined8 *)(param_2 + -8);
      puVar8[2] = *(undefined8 *)(param_2 + -0x10);
      uVar6 = *puVar1;
      puVar8[1] = *(undefined8 *)(param_2 + -0x18);
      *puVar8 = uVar6;
      *(undefined8 *)(param_2 + -8) = uVar2;
      *(undefined8 *)(param_2 + -0x10) = uVar3;
      *(undefined8 *)(param_2 + -0x18) = uVar5;
      *puVar1 = uVar4;
      puVar8 = (undefined8 *)(param_2 - 0x40U);
      puVar11 = param_1;
      if (param_1 < (undefined8 *)(param_2 - 0x40U)) {
        do {
          while ((puVar11 < puVar8 && (cVar7 = (*param_4)(puVar11,puVar1), cVar7 != '\0'))) {
            puVar11 = puVar11 + 4;
          }
          while( true ) {
            if (puVar8 <= puVar11) goto LAB_1000325d0;
            cVar7 = (*param_4)(puVar1,puVar8);
            if (cVar7 == '\0') break;
            puVar8 = puVar8 + -4;
          }
          uVar2 = puVar11[3];
          uVar3 = puVar11[2];
          uVar4 = *puVar11;
          uVar5 = puVar11[1];
          puVar11[3] = puVar8[3];
          puVar11[2] = puVar8[2];
          uVar6 = *puVar8;
          puVar11[1] = puVar8[1];
          *puVar11 = uVar6;
          puVar8[3] = uVar2;
          puVar8[2] = uVar3;
          puVar8[1] = uVar5;
          *puVar8 = uVar4;
          puVar11 = puVar11 + 4;
          puVar8 = puVar8 + -4;
        } while (puVar11 < puVar8);
      }
LAB_1000325d0:
      cVar7 = (*param_4)(puVar11,puVar1);
      puVar8 = puVar11 + 4;
      if (cVar7 == '\0') {
        puVar8 = puVar11;
      }
      uVar2 = *(undefined8 *)(param_2 + -8);
      uVar3 = *(undefined8 *)(param_2 + -0x10);
      uVar4 = *puVar1;
      uVar5 = *(undefined8 *)(param_2 + -0x18);
      *(undefined8 *)(param_2 + -8) = puVar8[3];
      *(undefined8 *)(param_2 + -0x10) = puVar8[2];
      uVar6 = *puVar8;
      *(undefined8 *)(param_2 + -0x18) = puVar8[1];
      *puVar1 = uVar6;
      puVar8[3] = uVar2;
      puVar8[2] = uVar3;
      puVar8[1] = uVar5;
      *puVar8 = uVar4;
      FUN_100032300(param_1,puVar8,param_3,param_4);
      param_1 = puVar8 + 4;
      uVar10 = (ulong)(param_2 - (long)param_1) >> 5;
    } while (1 < (int)uVar10);
  }
  return;
}

