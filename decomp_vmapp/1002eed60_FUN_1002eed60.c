
void FUN_1002eed60(long *param_1,long *param_2,undefined8 param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  ushort *local_40;
  ushort *local_38;
  
  lVar3 = *param_2;
  uVar7 = (ulong)(lVar3 - *param_1) >> 3;
  iVar6 = (int)uVar7;
  while( true ) {
    if (iVar6 < 2) {
      return;
    }
    puVar1 = (ushort *)(lVar3 + -8);
    *param_2 = (long)puVar1;
    local_38 = (ushort *)*param_1;
    uVar5 = *(ushort *)(lVar3 + -8);
    uVar4 = *local_38;
    if (uVar5 < uVar4) {
      *puVar1 = uVar4;
      *local_38 = uVar5;
      uVar4 = uVar5;
    }
    iVar6 = (int)uVar7;
    if (iVar6 == 2) {
      return;
    }
    lVar8 = (long)((int)(((uint)(uVar7 >> 0x1f) & 1) + iVar6) >> 1);
    uVar5 = local_38[lVar8 * 4];
    if (uVar5 < uVar4) {
      local_38[lVar8 * 4] = uVar4;
      *local_38 = uVar5;
      uVar5 = local_38[lVar8 * 4];
    }
    uVar4 = *puVar1;
    if (uVar4 < uVar5) {
      *puVar1 = uVar5;
      local_38[lVar8 * 4] = uVar4;
      uVar5 = uVar4;
    }
    if (iVar6 == 3) {
      return;
    }
    puVar2 = (ushort *)(lVar3 + -0x10);
    local_38[lVar8 * 4] = *puVar1;
    *puVar1 = uVar5;
    puVar9 = local_38;
    if (local_38 < puVar2) break;
LAB_1002eeea0:
    uVar4 = *puVar9;
    uVar5 = *puVar1;
    if (uVar4 < uVar5) {
      uVar4 = puVar9[4];
      puVar9 = puVar9 + 4;
    }
    *puVar1 = uVar4;
    *puVar9 = uVar5;
    local_40 = puVar9;
    FUN_1002eed60(&local_38,&local_40,param_3);
    *param_1 = (long)(puVar9 + 4);
    lVar3 = *param_2 + 8;
    *param_2 = lVar3;
    uVar7 = (ulong)(lVar3 - *param_1) >> 3;
    iVar6 = (int)uVar7;
  }
  do {
    if (puVar9 < puVar2) {
      do {
        if (*puVar1 <= *puVar9) break;
        puVar9 = puVar9 + 4;
      } while (puVar9 < puVar2);
    }
    if (puVar2 <= puVar9) goto LAB_1002eeea0;
    while (*puVar1 < *puVar2) {
      puVar2 = puVar2 + -4;
      if (puVar2 <= puVar9) goto LAB_1002eeea0;
    }
    uVar5 = *puVar9;
    *puVar9 = *puVar2;
    *puVar2 = uVar5;
    puVar9 = puVar9 + 4;
    puVar2 = puVar2 + -4;
    if (puVar2 <= puVar9) goto LAB_1002eeea0;
  } while( true );
}

