
void FUN_100d38d40(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_2 != 0) {
    iVar5 = 0;
    FUN_100d38dc0(param_2,0);
    iVar2 = *(int *)(*(long *)(param_2 + 0x50) + 8);
    iVar4 = *(int *)(*(long *)(param_2 + 0x50) + 0xc);
    if (iVar2 < iVar4) {
      do {
        uVar6 = 0;
        if (iVar5 < iVar4 - iVar2) {
          puVar3 = (undefined8 *)FUN_100d3cd40((long *)(param_2 + 0x50),iVar5);
          uVar6 = *puVar3;
        }
        FUN_100d38d40(param_1,uVar6);
        iVar5 = iVar5 + 1;
        lVar1 = *(long *)(param_2 + 0x50);
        iVar2 = *(int *)(lVar1 + 8);
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar5 < iVar4 - iVar2);
    }
  }
  return;
}

