
undefined8 FUN_10052b330(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar8 = (long)*(int *)(lVar1 + 4);
  lVar9 = 0;
  if (0 < lVar8) {
    do {
      lVar5 = 0;
      lVar7 = lVar1;
      do {
        if ((int)lVar9 != (int)lVar5) {
          lVar11 = *(long *)(lVar1 + 0x10);
          lVar3 = lVar9 * 0x20;
          if (*(int *)(lVar7 + 0x18 + lVar11) < *(int *)(lVar3 + 0x18 + lVar1 + lVar11)) {
            lVar11 = lVar1 + lVar11 + lVar3;
          }
          else {
            lVar11 = lVar11 + lVar7;
          }
          lVar2 = *(long *)(lVar1 + 0x10);
          lVar10 = lVar1 + lVar2;
          iVar4 = (uint)*(ushort *)(lVar3 + 4 + lVar10) + *(int *)(lVar3 + 0x18 + lVar10);
          iVar6 = (uint)*(ushort *)(lVar7 + 4 + lVar2) + *(int *)(lVar7 + 0x18 + lVar2);
          if (iVar4 <= iVar6) {
            iVar6 = iVar4;
          }
          if (1 < (1 - *(int *)(lVar11 + 0x18)) + iVar6) {
            iVar4 = (uint)*(ushort *)(lVar3 + 6 + lVar10) + *(int *)(lVar3 + 0x1c + lVar10);
            iVar6 = (uint)*(ushort *)(lVar7 + 6 + lVar2) + *(int *)(lVar7 + 0x1c + lVar2);
            if (iVar4 <= iVar6) {
              iVar6 = iVar4;
            }
            if (*(int *)(lVar7 + 0x1c + lVar2) < *(int *)(lVar10 + 0x1c + lVar3)) {
              lVar10 = lVar10 + lVar3;
            }
            else {
              lVar10 = lVar2 + lVar7;
            }
            if (1 < (iVar6 + 1) - *(int *)(lVar10 + 0x1c)) {
              return CONCAT71((int7)((ulong)lVar3 >> 8),1);
            }
          }
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x20;
      } while (lVar5 < lVar8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar8);
  }
  return 0;
}

