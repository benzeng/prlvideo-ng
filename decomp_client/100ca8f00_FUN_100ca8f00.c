
long * FUN_100ca8f00(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_100bf3540(0x18,"pcy_node.c",0x75);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  *(undefined4 *)(plVar2 + 2) = 0;
  if (param_1 == 0) {
LAB_100ca8f9b:
    if (param_4 != 0) {
      lVar3 = *(long *)(param_4 + 0x10);
      if (lVar3 == 0) {
        lVar3 = FUN_100c60010();
        *(long *)(param_4 + 0x10) = lVar3;
        if (lVar3 == 0) goto LAB_100ca8fd9;
      }
      iVar1 = FUN_100c604e0(lVar3,param_2);
      if (iVar1 == 0) goto LAB_100ca8fd9;
    }
    if (param_3 != 0) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    }
  }
  else {
    iVar1 = FUN_100bf7220(*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(long *)(param_1 + 0x10) == 0) {
        *(long **)(param_1 + 0x10) = plVar2;
        goto LAB_100ca8f9b;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        lVar3 = FUN_100c5ff30(FUN_100ca8e00);
        *(long *)(param_1 + 8) = lVar3;
        if (lVar3 == 0) goto LAB_100ca8fd9;
      }
      iVar1 = FUN_100c604e0(lVar3,plVar2);
      if (iVar1 != 0) goto LAB_100ca8f9b;
    }
LAB_100ca8fd9:
    FUN_100bf3910(plVar2);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}

