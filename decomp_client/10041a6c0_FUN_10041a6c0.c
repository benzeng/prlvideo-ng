
undefined8 FUN_10041a6c0(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  undefined1 uVar11;
  
  uVar8 = *param_1;
  uVar3 = *param_2;
  if (*(int *)(uVar8 + 4) == *(int *)(uVar3 + 4)) {
    uVar11 = 1;
    if (uVar8 != uVar3) {
      if (*(long *)(uVar8 + 0x10) == 0) {
        uVar7 = uVar8 + 8;
      }
      else {
        uVar7 = *(ulong *)(uVar8 + 0x20);
      }
      if (*(long *)(uVar3 + 0x10) == 0) {
        lVar6 = uVar3 + 8;
      }
      else {
        lVar6 = *(long *)(uVar3 + 0x20);
      }
      while (uVar8 = uVar8 + 8, uVar7 != uVar8) {
        lVar4 = *(long *)(uVar7 + 0x20);
        lVar5 = *(long *)(lVar6 + 0x20);
        if (lVar4 != lVar5) {
          iVar1 = *(int *)(lVar4 + 0xc);
          uVar8 = (ulong)iVar1;
          iVar2 = *(int *)(lVar4 + 8);
          if (iVar1 - iVar2 != *(int *)(lVar5 + 0xc) - *(int *)(lVar5 + 8)) goto LAB_10041a7d2;
          if (iVar1 != iVar2) {
            piVar9 = (int *)(lVar4 + 0x10 + (long)iVar2 * 8);
            piVar10 = (int *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8);
            uVar8 = uVar8 * 8 + (long)iVar2 * -8;
            do {
              if (*piVar9 != *piVar10) goto LAB_10041a7d2;
              piVar9 = piVar9 + 2;
              piVar10 = piVar10 + 2;
              uVar8 = uVar8 - 8;
            } while (uVar8 != 0);
          }
        }
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x28);
        if ((*(ushort *)(uVar7 + 0x28) != *(ushort *)(lVar6 + 0x28)) ||
           (uVar8 = 0, *(char *)(lVar6 + 0x18) != *(char *)(uVar7 + 0x18))) goto LAB_10041a7d2;
        lVar6 = QMapNodeBase::nextNode();
        uVar7 = QMapNodeBase::nextNode();
        uVar8 = *param_1;
      }
    }
  }
  else {
LAB_10041a7d2:
    uVar11 = 0;
  }
  return CONCAT71((int7)(uVar8 >> 8),uVar11);
}

