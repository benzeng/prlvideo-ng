
undefined8 FUN_100107f10(long param_1,QString *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  char cVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_38;
  
  puVar9 = (undefined8 *)(param_1 + 0x18);
  iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 8);
  iVar3 = *(int *)(*(long *)(param_1 + 0x18) + 0xc);
  lVar10 = (long)(iVar3 - iVar2);
  lVar7 = (long)((iVar3 + -1) - iVar2);
  do {
    if (lVar10 < 1) {
      return 0;
    }
    puVar6 = (uint *)*puVar9;
    if (1 < *puVar6) {
      FUN_100108f90(puVar9,puVar6[1]);
      puVar6 = (uint *)*puVar9;
    }
    plVar4 = *(long **)(puVar6 + ((int)puVar6[2] + lVar7) * 2 + 4);
    lVar8 = 0;
    if (*plVar4 != 0) {
      lVar8 = *(long *)(*plVar4 + 0x10);
    }
    cVar5 = operator==(param_2,(QString *)(lVar8 + 8));
    lVar10 = lVar10 + -1;
    lVar7 = lVar7 + -1;
  } while (cVar5 == '\0');
  local_38 = 0;
  if (*(char *)(*(long *)(*plVar4 + 0x10) + 0x14) == '\0') {
    piVar1 = (int *)(*(long *)(*plVar4 + 0x10) + 0x10);
    *piVar1 = *piVar1 + 1;
    local_38 = 0;
    if (*plVar4 != 0) {
      local_38 = *(undefined8 *)(*plVar4 + 0x10);
    }
  }
  return local_38;
}

