
undefined8 FUN_100d38850(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x48);
  iVar5 = 0;
  if (lVar6 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(lVar6 + 0x50) + 8) < *(int *)(*(long *)(lVar6 + 0x50) + 0xc)) {
    do {
      plVar1 = (long *)FUN_100d3cd40(lVar6 + 0x50,iVar5);
      if (*plVar1 == param_1) {
        lVar6 = *(long *)(param_1 + 0x48);
        break;
      }
      iVar5 = iVar5 + 1;
      lVar6 = *(long *)(param_1 + 0x48);
    } while (iVar5 < *(int *)(*(long *)(lVar6 + 0x50) + 0xc) - *(int *)(*(long *)(lVar6 + 0x50) + 8)
            );
    lVar4 = 0;
    if (iVar5 < 0) goto LAB_100d388ce;
  }
  lVar4 = 0;
  if (iVar5 < *(int *)(*(long *)(lVar6 + 0x50) + 0xc) - *(int *)(*(long *)(lVar6 + 0x50) + 8)) {
    plVar1 = (long *)FUN_100d3cd40(lVar6 + 0x50,iVar5);
    lVar4 = *plVar1;
  }
LAB_100d388ce:
  uVar2 = 0;
  if ((lVar4 == param_1) && (uVar2 = 0, -2 < iVar5)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x50);
    uVar2 = 0;
    if (iVar5 + 1 < *(int *)(lVar6 + 0xc) - *(int *)(lVar6 + 8)) {
      puVar3 = (undefined8 *)FUN_100d3cd40(*(long *)(param_1 + 0x48) + 0x50,iVar5 + 1);
      uVar2 = *puVar3;
    }
  }
  return uVar2;
}

