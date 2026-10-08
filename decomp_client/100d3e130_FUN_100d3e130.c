
void FUN_100d3e130(undefined8 param_1,long param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar3 = FUN_100d38910(0);
    if (iVar3 == 0) {
      return;
    }
  }
  iVar3 = FUN_100d38910(param_2);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      pvVar1 = (void *)FUN_100d38920(param_2,iVar3);
      FUN_100d3e130(param_1,pvVar1);
      if (pvVar1 != (void *)0x0) {
        FUN_100d38800(pvVar1);
        operator_delete(pvVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = FUN_100d38910(param_2);
    } while (iVar3 < iVar4);
  }
  uVar2 = FUN_100d38a10(param_2);
  FUN_100d3ccb0(uVar2);
  return;
}

