
undefined8 FUN_100d3df80(long param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  if (param_2 == (void *)0x0) {
    return 6;
  }
  lVar3 = FUN_100d39010(param_2,param_2);
  FUN_100d3e130(param_1,param_2);
  lVar4 = FUN_100d38830(param_2);
  if (lVar4 != 0) {
    uVar5 = FUN_100d38830(param_2);
    iVar1 = FUN_100d38910(uVar5);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar5 = FUN_100d38830(param_2);
        pvVar6 = (void *)FUN_100d38920(uVar5,iVar1);
        if (pvVar6 == param_2) {
          uVar5 = FUN_100d38830(param_2);
          uVar5 = FUN_100d38a10(uVar5);
          FUN_100d3e790(uVar5,iVar1);
          break;
        }
        iVar1 = iVar1 + 1;
        uVar5 = FUN_100d38830(param_2);
        iVar2 = FUN_100d38910(uVar5);
      } while (iVar1 < iVar2);
    }
    if (lVar3 != 0) {
      uVar5 = FUN_100d38830(param_2);
      lVar3 = FUN_100d38830(uVar5);
      if (lVar3 == 0) {
        uVar5 = FUN_100d38830(param_2);
        iVar1 = FUN_100d38910(uVar5);
        if (iVar1 == 0) {
          pvVar6 = (void *)FUN_100d38830(param_2);
          if (pvVar6 != (void *)0x0) {
            FUN_100d38800(pvVar6);
            operator_delete(pvVar6);
          }
          *(undefined8 *)(param_1 + 0x10) = 0;
          goto LAB_100d3e070;
        }
      }
      uVar5 = FUN_100d38830(param_2);
      FUN_100d38dc0(uVar5,1);
    }
  }
LAB_100d3e070:
  if (*(void **)(param_1 + 0x10) == param_2) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  FUN_100d38800(param_2);
  operator_delete(param_2);
  if (((*(long *)(param_1 + 0x10) != 0) && (iVar1 = FUN_100d38910(), iVar1 == 1)) &&
     (*(char *)(*(long *)(param_1 + 0x10) + 0x30) != '\0')) {
    FUN_100d38dc0(*(long *)(param_1 + 0x10),0);
    pvVar6 = *(void **)(param_1 + 0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_100d38800(pvVar6);
      operator_delete(pvVar6);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return 0;
}

