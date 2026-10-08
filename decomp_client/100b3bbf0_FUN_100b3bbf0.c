
void FUN_100b3bbf0(long *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  int *local_40;
  int *local_38;
  
  lVar3 = *param_2;
  uVar7 = (ulong)(lVar3 - *param_1) >> 3;
  iVar6 = (int)uVar7;
  while( true ) {
    if (iVar6 < 2) {
      return;
    }
    piVar1 = (int *)(lVar3 + -8);
    *param_2 = (long)piVar1;
    local_38 = (int *)*param_1;
    iVar6 = *(int *)(lVar3 + -8);
    iVar4 = *local_38;
    if (iVar6 < iVar4) {
      *piVar1 = iVar4;
      *local_38 = iVar6;
      iVar4 = iVar6;
    }
    iVar6 = (int)uVar7;
    if (iVar6 == 2) {
      return;
    }
    lVar8 = (long)((int)(((uint)(uVar7 >> 0x1f) & 1) + iVar6) >> 1);
    iVar5 = local_38[lVar8 * 2];
    if (iVar5 < iVar4) {
      local_38[lVar8 * 2] = iVar4;
      *local_38 = iVar5;
      iVar5 = local_38[lVar8 * 2];
    }
    iVar4 = *piVar1;
    if (iVar4 < iVar5) {
      *piVar1 = iVar5;
      local_38[lVar8 * 2] = iVar4;
      iVar5 = iVar4;
    }
    if (iVar6 == 3) {
      return;
    }
    piVar2 = (int *)(lVar3 + -0x10);
    local_38[lVar8 * 2] = *piVar1;
    *piVar1 = iVar5;
    piVar9 = local_38;
    if (local_38 < piVar2) break;
LAB_100b3bd20:
    iVar4 = *piVar9;
    iVar6 = *piVar1;
    if (iVar4 < iVar6) {
      iVar4 = piVar9[2];
      piVar9 = piVar9 + 2;
    }
    *piVar1 = iVar4;
    *piVar9 = iVar6;
    local_40 = piVar9;
    FUN_100b3bbf0(&local_38,&local_40,param_3);
    *param_1 = (long)(piVar9 + 2);
    lVar3 = *param_2 + 8;
    *param_2 = lVar3;
    uVar7 = (ulong)(lVar3 - *param_1) >> 3;
    iVar6 = (int)uVar7;
  }
  do {
    if (piVar9 < piVar2) {
      do {
        if (*piVar1 <= *piVar9) break;
        piVar9 = piVar9 + 2;
      } while (piVar9 < piVar2);
    }
    if (piVar2 <= piVar9) goto LAB_100b3bd20;
    while (*piVar1 < *piVar2) {
      piVar2 = piVar2 + -2;
      if (piVar2 <= piVar9) goto LAB_100b3bd20;
    }
    iVar6 = *piVar9;
    *piVar9 = *piVar2;
    *piVar2 = iVar6;
    piVar9 = piVar9 + 2;
    piVar2 = piVar2 + -2;
    if (piVar2 <= piVar9) goto LAB_100b3bd20;
  } while( true );
}

