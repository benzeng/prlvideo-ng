
undefined8 FUN_00406bd0(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 local_f8 [200];
  
  puVar7 = (undefined4 *)FUN_004089a0(param_1,*(undefined4 *)(param_1 + 0xe0));
  puVar5 = PTR_g_PrlXLibAPI_0061bcf0;
  if (puVar7 == (undefined4 *)0x0) {
    return 1;
  }
  if (((int)puVar7[0xe] < 1) || (lVar10 = *(long *)(puVar7 + 0xc), *(int *)(lVar10 + 0x14) == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
      if (iVar8 == puVar7[0xe]) break;
      piVar1 = (int *)(lVar10 + 0x2c);
      lVar10 = lVar10 + 0x18;
    } while (*piVar1 != 0);
  }
  iVar4 = *param_2;
  if (iVar4 == iVar8) {
    lVar10 = (long)*(int *)(param_1 + 0xe0) * 0x80;
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x10 + lVar10);
    (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x48))(param_1,uVar11,1);
    puVar6 = PTR_prl_xfunctions_0061bd60;
    (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x1c0))(param_1,0);
    while (iVar8 = (**(code **)(puVar6 + 0x1c8))(param_1,*puVar7,local_f8), iVar8 != 0) {
      (**(code **)(*(long *)(puVar5 + 0x10) + 0x50))(local_f8);
    }
    (**(code **)(*(long *)(puVar5 + 0x10) + 0x48))(param_1,uVar11,0);
    lVar10 = lVar10 + *(long *)(param_1 + 0xe8);
    if ((param_2[3] == *(int *)(lVar10 + 0x18)) && (param_2[4] == *(int *)(lVar10 + 0x1c))) {
      if (iVar4 < 1) goto LAB_00406c3d;
      lVar10 = *(long *)(puVar7 + 0xc);
      if (*(int *)(lVar10 + 0x10) != -1) {
        piVar1 = param_2 + 1;
        piVar2 = param_2 + 2;
        lVar9 = *(long *)(*(long *)(puVar7 + 8) + (long)*(int *)(lVar10 + 0x10) * 0x18);
        if ((((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) &&
            (*(int *)(lVar9 + 8) == param_2[5] - *piVar1)) &&
           (*(int *)(lVar9 + 0xc) == param_2[6] - *piVar2)) {
          iVar8 = 0;
          while( true ) {
            if (*(int *)(lVar9 + 0x10) != param_2[7]) {
              uVar11 = 0;
              goto LAB_00406c42;
            }
            if (*(int *)(lVar9 + 0x14) != param_2[8]) break;
            iVar8 = iVar8 + 1;
            if (iVar8 == iVar4) goto LAB_00406c3d;
            if (*(int *)(lVar10 + 0x28) == -1) break;
            piVar3 = param_2 + 10;
            lVar9 = *(long *)(*(long *)(puVar7 + 8) + (long)*(int *)(lVar10 + 0x28) * 0x18);
            if (((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) ||
               (*(int *)(lVar9 + 8) != param_2[9] - *piVar1)) break;
            param_2 = param_2 + 4;
            lVar10 = lVar10 + 0x18;
            if (*(int *)(lVar9 + 0xc) != *piVar3 - *piVar2) break;
          }
        }
      }
    }
    uVar11 = 0;
  }
  else {
LAB_00406c3d:
    uVar11 = 1;
  }
LAB_00406c42:
  FUN_004088e0(puVar7);
  return uVar11;
}

