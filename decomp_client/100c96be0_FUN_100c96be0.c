
int FUN_100c96be0(undefined8 *param_1,undefined8 param_2,void *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = -1;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar2 = FUN_100c60800(uVar1);
    iVar8 = -2;
    do {
      iVar7 = iVar8 + 2;
      if (iVar2 <= iVar7) {
        return -1;
      }
      puVar4 = (undefined8 *)FUN_100c60820(uVar1,iVar7);
      iVar3 = FUN_100bf8810(*puVar4,param_2);
      iVar8 = iVar8 + 1;
    } while (iVar3 != 0);
    iVar2 = -1;
    if (-2 < iVar8) {
      iVar2 = FUN_100c60800(*param_1);
      piVar6 = (int *)0x0;
      if (iVar7 < iVar2) {
        lVar5 = FUN_100c60820(*param_1,iVar7);
        piVar6 = (int *)0x0;
        if (lVar5 != 0) {
          piVar6 = *(int **)(lVar5 + 8);
        }
      }
      iVar2 = *piVar6;
      iVar8 = param_4 + -1;
      if (iVar2 <= param_4 + -1) {
        iVar8 = iVar2;
      }
      if (param_3 != (void *)0x0) {
        _memcpy(param_3,*(void **)(piVar6 + 2),(long)iVar8);
        *(undefined1 *)((long)param_3 + (long)iVar8) = 0;
        iVar2 = iVar8;
      }
    }
  }
  return iVar2;
}

