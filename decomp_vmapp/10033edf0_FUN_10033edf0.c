
void FUN_10033edf0(undefined4 *param_1,undefined4 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  pvVar2 = operator_new__((ulong)param_3 << 2);
  *(void **)(param_1 + 2) = pvVar2;
  if (param_3 != 0) {
    uVar11 = param_3 - 1;
    uVar1 = (ulong)uVar11 + 1;
    uVar12 = uVar1 & 0x1fffffffe;
    uVar5 = 0;
    if (uVar12 != 0) {
      lVar4 = param_4 + 4;
      lVar7 = (long)pvVar2 + 4;
      uVar10 = (ulong)uVar11 + 1 & 0xfffffffffffffffe;
      do {
        *(undefined8 *)(lVar7 + -4) = *(undefined8 *)(lVar4 + -4);
        lVar4 = lVar4 + 8;
        lVar7 = lVar7 + 8;
        uVar10 = uVar10 - 2;
        uVar5 = uVar12;
      } while (uVar10 != 0);
    }
    if (uVar1 != uVar5) {
      iVar9 = (int)uVar5;
      if ((param_3 - iVar9 & 3) != 0) {
        iVar6 = -(param_3 - iVar9 & 3);
        do {
          *(undefined4 *)((long)pvVar2 + uVar5 * 4) = *(undefined4 *)(param_4 + uVar5 * 4);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
      }
      if (2 < uVar11 - iVar9) {
        puVar8 = (undefined4 *)(param_4 + 0xc + uVar5 * 4);
        puVar3 = (undefined4 *)((long)pvVar2 + uVar5 * 4 + 0xc);
        iVar9 = (param_3 + 3) - ((int)uVar5 + 3);
        do {
          puVar3[-3] = puVar8[-3];
          puVar3[-2] = puVar8[-2];
          puVar3[-1] = puVar8[-1];
          *puVar3 = *puVar8;
          puVar8 = puVar8 + 4;
          puVar3 = puVar3 + 4;
          iVar9 = iVar9 + -4;
        } while (iVar9 != 0);
      }
    }
  }
  return;
}

