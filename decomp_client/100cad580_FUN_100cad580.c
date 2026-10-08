
void FUN_100cad580(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 4);
  if (lVar11 != 0) {
    if (0 < (long)(int)*param_1) {
      lVar10 = (long)(int)*param_1 + 1;
      while( true ) {
        if (*(long *)(lVar11 + -0x10 + lVar10 * 8) != 0) {
          FUN_100c60b60();
        }
        lVar10 = lVar10 + -1;
        if (lVar10 < 2) break;
        lVar11 = *(long *)(param_1 + 4);
      }
      lVar11 = *(long *)(param_1 + 4);
    }
    FUN_100bf3910(lVar11);
  }
  if (*(long *)(param_1 + 6) != 0) {
    FUN_100bf3910();
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar5 = FUN_100c60800();
    uVar8 = *(undefined8 *)(param_1 + 2);
    if (0 < iVar5) {
      do {
        iVar9 = iVar5 + -1;
        uVar6 = FUN_100c60820(uVar8,iVar9);
        uVar1 = *param_1;
        uVar7 = (ulong)(int)uVar1;
        uVar2 = *(ulong *)(uVar6 + uVar7 * 8);
        if (uVar2 == 0) {
          lVar11 = 0;
          if (0 < (int)uVar1) {
            do {
              if (*(long *)(uVar6 + lVar11 * 8) != 0) {
                FUN_100bf3910();
                uVar7 = (ulong)*param_1;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < (int)uVar7);
          }
        }
        else {
          lVar11 = 0;
          if (0 < (int)uVar1) {
            do {
              uVar3 = *(ulong *)(uVar6 + lVar11 * 8);
              if ((uVar3 != 0) && (uVar2 < uVar3 || uVar3 < uVar6)) {
                FUN_100bf3910();
                uVar7 = (ulong)*param_1;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < (int)uVar7);
          }
        }
        uVar8 = FUN_100c60820(*(undefined8 *)(param_1 + 2),iVar9);
        FUN_100bf3910(uVar8);
        uVar8 = *(undefined8 *)(param_1 + 2);
        bVar4 = 1 < iVar5;
        iVar5 = iVar9;
      } while (bVar4);
    }
    FUN_100c5ffd0();
  }
  FUN_100bf3910(param_1);
  return;
}

