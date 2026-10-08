
void FUN_100137f70(long *param_1,long *param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *local_40;
  long local_38;
  
  lVar9 = *param_2;
  uVar6 = (ulong)(lVar9 - *param_1) >> 3;
  iVar5 = (int)uVar6;
  do {
    if (iVar5 < 2) {
      return;
    }
    *param_2 = lVar9 + -8;
    puVar7 = (undefined4 *)*param_1;
    cVar3 = (*param_4)(*(undefined4 *)(lVar9 + -8),*puVar7);
    if (cVar3 != '\0') {
      puVar2 = (undefined4 *)*param_1;
      uVar1 = *(undefined4 *)*param_2;
      *(undefined4 *)*param_2 = *puVar2;
      *puVar2 = uVar1;
    }
    iVar5 = (int)uVar6;
    if (iVar5 == 2) {
      return;
    }
    lVar4 = (long)((int)(((uint)(uVar6 >> 0x1f) & 1) + iVar5) >> 1);
    cVar3 = (*param_4)(puVar7[lVar4 * 2],*(undefined4 *)*param_1);
    if (cVar3 != '\0') {
      puVar2 = (undefined4 *)*param_1;
      uVar1 = puVar7[lVar4 * 2];
      puVar7[lVar4 * 2] = *puVar2;
      *puVar2 = uVar1;
    }
    cVar3 = (*param_4)(*(undefined4 *)*param_2,puVar7[lVar4 * 2]);
    if (cVar3 != '\0') {
      uVar1 = *(undefined4 *)*param_2;
      *(undefined4 *)*param_2 = puVar7[lVar4 * 2];
      puVar7[lVar4 * 2] = uVar1;
    }
    if (iVar5 == 3) {
      return;
    }
    puVar8 = (undefined4 *)(lVar9 + -0x10);
    puVar2 = (undefined4 *)*param_2;
    uVar1 = puVar7[lVar4 * 2];
    puVar7[lVar4 * 2] = *puVar2;
    *puVar2 = uVar1;
    for (; puVar7 < puVar8; puVar7 = puVar7 + 2) {
      while ((puVar7 < puVar8 &&
             (cVar3 = (*param_4)(*puVar7,*(undefined4 *)*param_2), cVar3 != '\0'))) {
        puVar7 = puVar7 + 2;
      }
      while( true ) {
        if (puVar8 <= puVar7) goto LAB_1001380d0;
        cVar3 = (*param_4)(*(undefined4 *)*param_2,*puVar8);
        if (cVar3 == '\0') break;
        puVar8 = puVar8 + -2;
      }
      uVar1 = *puVar7;
      *puVar7 = *puVar8;
      *puVar8 = uVar1;
      puVar8 = puVar8 + -2;
    }
LAB_1001380d0:
    cVar3 = (*param_4)(*puVar7,*(undefined4 *)*param_2);
    if (cVar3 != '\0') {
      puVar7 = puVar7 + 2;
    }
    uVar1 = *(undefined4 *)*param_2;
    *(undefined4 *)*param_2 = *puVar7;
    *puVar7 = uVar1;
    local_38 = *param_1;
    local_40 = puVar7;
    FUN_100137f70(&local_38,&local_40,param_3,param_4);
    *param_1 = (long)(puVar7 + 2);
    lVar9 = *param_2 + 8;
    *param_2 = lVar9;
    uVar6 = (ulong)(lVar9 - *param_1) >> 3;
    iVar5 = (int)uVar6;
  } while( true );
}

