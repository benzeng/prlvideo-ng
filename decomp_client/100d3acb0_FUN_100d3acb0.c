
void FUN_100d3acb0(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(*(long *)(param_2 + 0x50) + 8);
    iVar2 = *(int *)(*(long *)(param_2 + 0x50) + 0xc);
    if (iVar2 != iVar5) {
      lVar1 = param_2 + 0x50;
      if (iVar5 < iVar2) {
        iVar5 = 0;
        do {
          puVar4 = (undefined8 *)FUN_100d3cd40(lVar1,iVar5);
          FUN_100d3acb0(param_1,*puVar4);
          if (iVar5 < *(int *)(*(long *)(param_2 + 0x50) + 0xc) -
                      *(int *)(*(long *)(param_2 + 0x50) + 8)) {
            puVar4 = (undefined8 *)FUN_100d3cd40(lVar1,iVar5);
            pvVar3 = (void *)*puVar4;
            if (pvVar3 != (void *)0x0) {
              FUN_100d387a0(pvVar3);
              operator_delete(pvVar3);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(*(long *)(param_2 + 0x50) + 0xc) -
                         *(int *)(*(long *)(param_2 + 0x50) + 8));
      }
      FUN_100d3ccb0(lVar1);
      return;
    }
  }
  return;
}

