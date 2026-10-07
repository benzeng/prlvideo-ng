
long * FUN_1008cd980(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_10081ddd0(0x18,"pcy_node.c",0x75);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  *(undefined4 *)(plVar2 + 2) = 0;
  if (param_1 == 0) {
LAB_1008cda1b:
    if (param_4 != 0) {
      lVar3 = *(long *)(param_4 + 0x10);
      if (lVar3 == 0) {
        lVar3 = FUN_100884e10();
        *(long *)(param_4 + 0x10) = lVar3;
        if (lVar3 == 0) goto LAB_1008cda59;
      }
      iVar1 = FUN_1008852e0(lVar3,param_2);
      if (iVar1 == 0) goto LAB_1008cda59;
    }
    if (param_3 != 0) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    }
  }
  else {
    iVar1 = FUN_100821ab0(*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(long *)(param_1 + 0x10) == 0) {
        *(long **)(param_1 + 0x10) = plVar2;
        goto LAB_1008cda1b;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        lVar3 = FUN_100884d30(FUN_1008cd880);
        *(long *)(param_1 + 8) = lVar3;
        if (lVar3 == 0) goto LAB_1008cda59;
      }
      iVar1 = FUN_1008852e0(lVar3,plVar2);
      if (iVar1 != 0) goto LAB_1008cda1b;
    }
LAB_1008cda59:
    FUN_10081e1a0(plVar2);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}

