
void FUN_10012b260(long *param_1,long *param_2,undefined8 param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *local_40;
  long local_38;
  
  lVar9 = *param_2;
  uVar6 = (ulong)(lVar9 - *param_1) >> 3;
  iVar5 = (int)uVar6;
  do {
    if (iVar5 < 2) {
      return;
    }
    *param_2 = lVar9 + -8;
    puVar7 = (undefined8 *)*param_1;
    cVar3 = (*param_4)(*(undefined8 *)(lVar9 + -8),*puVar7);
    if (cVar3 != '\0') {
      puVar1 = (undefined8 *)*param_1;
      uVar2 = *(undefined8 *)*param_2;
      *(undefined8 *)*param_2 = *puVar1;
      *puVar1 = uVar2;
    }
    iVar5 = (int)uVar6;
    if (iVar5 == 2) {
      return;
    }
    iVar4 = (int)(((uint)(uVar6 >> 0x1f) & 1) + iVar5) >> 1;
    cVar3 = (*param_4)(puVar7[iVar4],*(undefined8 *)*param_1);
    if (cVar3 != '\0') {
      puVar1 = (undefined8 *)*param_1;
      uVar2 = puVar7[iVar4];
      puVar7[iVar4] = *puVar1;
      *puVar1 = uVar2;
    }
    cVar3 = (*param_4)(*(undefined8 *)*param_2,puVar7[iVar4]);
    if (cVar3 != '\0') {
      uVar2 = *(undefined8 *)*param_2;
      *(undefined8 *)*param_2 = puVar7[iVar4];
      puVar7[iVar4] = uVar2;
    }
    if (iVar5 == 3) {
      return;
    }
    puVar8 = (undefined8 *)(lVar9 + -0x10);
    puVar1 = (undefined8 *)*param_2;
    uVar2 = puVar7[iVar4];
    puVar7[iVar4] = *puVar1;
    *puVar1 = uVar2;
    for (; puVar7 < puVar8; puVar7 = puVar7 + 1) {
      while ((puVar7 < puVar8 &&
             (cVar3 = (*param_4)(*puVar7,*(undefined8 *)*param_2), cVar3 != '\0'))) {
        puVar7 = puVar7 + 1;
      }
      while( true ) {
        if (puVar8 <= puVar7) goto LAB_10012b3d0;
        cVar3 = (*param_4)(*(undefined8 *)*param_2,*puVar8);
        if (cVar3 == '\0') break;
        puVar8 = puVar8 + -1;
      }
      uVar2 = *puVar7;
      *puVar7 = *puVar8;
      *puVar8 = uVar2;
      puVar8 = puVar8 + -1;
    }
LAB_10012b3d0:
    cVar3 = (*param_4)(*puVar7,*(undefined8 *)*param_2);
    if (cVar3 != '\0') {
      puVar7 = puVar7 + 1;
    }
    uVar2 = *(undefined8 *)*param_2;
    *(undefined8 *)*param_2 = *puVar7;
    *puVar7 = uVar2;
    local_38 = *param_1;
    local_40 = puVar7;
    FUN_10012b260(&local_38,&local_40,param_3,param_4);
    *param_1 = (long)(puVar7 + 1);
    lVar9 = *param_2 + 8;
    *param_2 = lVar9;
    uVar6 = (ulong)(lVar9 - *param_1) >> 3;
    iVar5 = (int)uVar6;
  } while( true );
}

