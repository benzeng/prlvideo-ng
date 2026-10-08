
int FUN_100adcd00(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    iVar11 = param_2;
    if (*(int *)(lVar3 + 0xc) == *(int *)(lVar3 + 8)) {
      plVar6 = (long *)FUN_100adb590(*(undefined8 *)(param_1 + 0x10),param_2);
      if ((*plVar6 != 0) && ((*(byte *)(*plVar6 + 0x19) & 0x10) != 0)) {
        uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x800);
        if (uVar8 != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x808);
          uVar9 = 0;
          bVar5 = false;
          do {
            bVar10 = true;
            if ((*(int *)(lVar3 + uVar9 * 4) == param_2) || (bVar10 = bVar5, bVar5)) {
              plVar6 = (long *)FUN_100adb590(*(undefined8 *)(param_1 + 0x10));
              lVar4 = *plVar6;
              bVar5 = bVar10;
              if (lVar4 != 0) {
                if ((*(uint *)(lVar4 + 0x18) & 0x4000) == 0) {
                  return param_2;
                }
                if ((*(uint *)(lVar4 + 0x18) & 0x1041) == 0x1000) {
                  param_2 = *(int *)(lVar4 + 8);
                }
              }
            }
            uVar9 = uVar9 + 1;
            iVar11 = param_2;
          } while (uVar9 < uVar8);
        }
      }
    }
    else {
      piVar7 = (int *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8);
      piVar1 = (int *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 0xc) * 8);
      uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x800);
      if (uVar8 != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x808);
        uVar9 = 1;
        bVar5 = false;
        do {
          iVar2 = *(int *)(lVar3 + -4 + uVar9 * 4);
          bVar10 = true;
          if (iVar2 != param_2) {
            bVar10 = bVar5;
          }
          if (*piVar7 == iVar2) {
            piVar7 = piVar7 + 2;
          }
          else if (bVar10) {
            plVar6 = (long *)FUN_100adb590(*(undefined8 *)(param_1 + 0x10));
            if ((*plVar6 != 0) && ((*(byte *)(*plVar6 + 0x18) & 0x51) == 0)) break;
          }
          if ((piVar7 == piVar1) ||
             (bVar12 = uVar8 <= uVar9, uVar9 = uVar9 + 1, bVar5 = bVar10, bVar12)) break;
        } while( true );
      }
      if (piVar7 == piVar1) {
        piVar7 = (int *)FUN_100add590(param_1 + 0x18);
        iVar11 = *piVar7;
        FUN_100223940(param_1 + 0x18);
      }
    }
  }
  return iVar11;
}

