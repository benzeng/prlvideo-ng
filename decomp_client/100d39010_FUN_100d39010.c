
long FUN_100d39010(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  lVar3 = 0;
  if ((param_2 != 0) && (lVar3 = param_2, *(char *)(param_2 + 0x30) == '\0')) {
    iVar1 = *(int *)(*(long *)(param_2 + 0x50) + 8);
    iVar4 = *(int *)(*(long *)(param_2 + 0x50) + 0xc);
    iVar5 = 0;
    lVar3 = 0;
    if (iVar1 < iVar4) {
      do {
        uVar6 = 0;
        if (iVar5 < iVar4 - iVar1) {
          puVar2 = (undefined8 *)FUN_100d3cd40((long *)(param_2 + 0x50),iVar5);
          uVar6 = *puVar2;
        }
        lVar3 = FUN_100d39010(param_1,uVar6);
        if (lVar3 != 0) {
          return lVar3;
        }
        iVar5 = iVar5 + 1;
        lVar3 = *(long *)(param_2 + 0x50);
        iVar1 = *(int *)(lVar3 + 8);
        iVar4 = *(int *)(lVar3 + 0xc);
        lVar3 = 0;
      } while (iVar5 < iVar4 - iVar1);
    }
  }
  return lVar3;
}

