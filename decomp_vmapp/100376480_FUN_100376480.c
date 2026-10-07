
void FUN_100376480(long param_1,int param_2,long param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  bool bVar13;
  
  bVar13 = param_2 != 1;
  uVar7 = 0x10;
  if (!bVar13) {
    uVar7 = 9;
  }
  uVar2 = (uint)bVar13 + (uint)bVar13 * 8;
  if (uVar2 < uVar7) {
    uVar9 = 0xffffffff;
    uVar8 = 0;
    uVar12 = (ulong)uVar2;
    do {
      piVar1 = *(int **)(param_3 + uVar12 * 0x18);
      lVar10 = *(long *)(param_3 + 8 + uVar12 * 0x18) - (long)piVar1;
      if (lVar10 != 0) {
        iVar11 = *(int *)(param_1 + 0x80 + uVar12 * 4);
        iVar3 = 1;
        if (iVar11 != 0) {
          if (iVar11 == 1) {
            iVar3 = *piVar1;
          }
          else if (iVar11 == 2) {
            uVar2 = 0;
            uVar5 = 0;
            uVar6 = 1;
            do {
              if (uVar2 < (uint)piVar1[uVar5]) {
                uVar2 = piVar1[uVar5];
              }
              bVar13 = uVar6 < (ulong)(lVar10 >> 2);
              uVar5 = uVar6;
              uVar6 = (ulong)((int)uVar6 + 1);
            } while (bVar13);
            iVar3 = uVar2 + 1;
          }
          else {
            iVar3 = 0;
          }
        }
        uVar2 = *(uint *)(param_1 + uVar12 * 4);
        uVar4 = iVar3 * *(int *)(param_1 + 0x40 + uVar12 * 4) + uVar2;
        if (uVar8 < uVar4) {
          uVar8 = uVar4;
        }
        if (uVar2 < uVar9) {
          uVar9 = uVar2;
        }
      }
      iVar11 = (int)uVar12;
      uVar12 = uVar12 + 1;
    } while (iVar11 != uVar7 - 1);
  }
  else {
    uVar9 = 0xffffffff;
    uVar8 = 0;
  }
  if (uVar8 < uVar9) {
    uVar9 = uVar8;
  }
  *param_4 = uVar9 >> 2;
  *param_5 = uVar8 - uVar9 >> 4;
  return;
}

