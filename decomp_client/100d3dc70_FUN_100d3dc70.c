
undefined8 FUN_100d3dc70(long param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_38;
  
  if (param_2 == (void *)0x0) {
    return 6;
  }
  lVar4 = FUN_100d38830(param_2);
  if (lVar4 == 0) {
    return 6;
  }
  cVar1 = *(char *)((long)param_2 + 0x30);
  uVar5 = FUN_100d38830(param_2);
  iVar2 = FUN_100d38910(uVar5);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      uVar5 = FUN_100d38830(param_2);
      pvVar6 = (void *)FUN_100d38920(uVar5,iVar2);
      if (pvVar6 == param_2) {
        uVar5 = FUN_100d38830(param_2);
        uVar5 = FUN_100d38a10(uVar5);
        FUN_100d3e790(uVar5,iVar2);
        goto LAB_100d3dd31;
      }
      iVar2 = iVar2 + 1;
      uVar5 = FUN_100d38830(param_2);
      iVar3 = FUN_100d38910(uVar5);
    } while (iVar2 < iVar3);
  }
  iVar2 = -1;
LAB_100d3dd31:
  iVar8 = 0;
  FUN_100d38dc0(param_2,0);
  iVar3 = FUN_100d38910(param_2);
  if (0 < iVar3) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    do {
      uVar5 = FUN_100d38920(param_2,iVar8);
      uVar7 = FUN_100d38830(param_2);
      FUN_100d38840(uVar5,uVar7);
      uVar5 = FUN_100d38830(param_2);
      uVar5 = FUN_100d38a10(uVar5);
      local_38 = FUN_100d38920(param_2,iVar8);
      FUN_100d3cdf0(uVar5,iVar2 + iVar8,&local_38);
      iVar8 = iVar8 + 1;
      iVar3 = FUN_100d38910(param_2);
    } while (iVar8 < iVar3);
  }
  if (cVar1 != '\0') {
    uVar5 = FUN_100d38830(param_2);
    lVar4 = FUN_100d38830(uVar5);
    if (lVar4 == 0) {
      uVar5 = FUN_100d38830(param_2);
      iVar2 = FUN_100d38910(uVar5);
      if (iVar2 == 0) {
        pvVar6 = (void *)FUN_100d38830(param_2);
        if (pvVar6 != (void *)0x0) {
          FUN_100d38800(pvVar6);
          operator_delete(pvVar6);
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
        goto LAB_100d3de06;
      }
    }
    uVar5 = FUN_100d38830(param_2);
    FUN_100d38dc0(uVar5,1);
  }
LAB_100d3de06:
  FUN_100d38800(param_2);
  operator_delete(param_2);
  if (((*(long *)(param_1 + 0x10) != 0) && (iVar2 = FUN_100d38910(), iVar2 == 1)) &&
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

