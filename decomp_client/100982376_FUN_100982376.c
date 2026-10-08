
void FUN_100982376(long param_1)

{
  int iVar1;
  char **ppcVar2;
  int *piVar3;
  long lVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int local_20;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x90) == 0)) {
      *(code **)(param_1 + 0x90) = FUN_100981dee;
    }
    ppcVar2 = ___xmlTreeIndentString();
    iVar1 = _xmlStrlen((xmlChar *)*ppcVar2);
    ppcVar2 = ___xmlTreeIndentString();
    if ((*ppcVar2 == (char *)0x0) || (iVar1 == 0)) {
      puVar6 = (undefined1 *)(param_1 + 0x44);
      for (lVar4 = 0x3d; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      *(int *)(param_1 + 0x88) = iVar1;
      *(int *)(param_1 + 0x84) = (int)(0x3c / (long)*(int *)(param_1 + 0x88));
      for (local_20 = 0; local_20 < *(int *)(param_1 + 0x84); local_20 = local_20 + 1) {
        iVar1 = *(int *)(param_1 + 0x88);
        ppcVar2 = ___xmlTreeIndentString();
        pcVar5 = *ppcVar2;
        pcVar7 = (char *)(param_1 + 0x44 + (long)(*(int *)(param_1 + 0x88) * local_20));
        for (lVar4 = (long)iVar1; lVar4 != 0; lVar4 = lVar4 + -1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      *(undefined1 *)((long)(*(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x84)) + 0x44 + param_1)
           = 0;
    }
    piVar3 = ___xmlSaveNoEmptyTags();
    if (*piVar3 != 0) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 4;
    }
  }
  return;
}

