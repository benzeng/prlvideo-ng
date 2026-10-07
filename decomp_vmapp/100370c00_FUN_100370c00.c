
void FUN_100370c00(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *local_38;
  
  if (*(uint *)(param_1 + 0x14e8) < 0x200) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x14e0) + 0x20);
  if (lVar6 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x1060);
  if (*(long **)(param_1 + 0x1060) != (long *)0x0) {
    lVar6 = lVar6 + 0x10;
    plVar2 = *(long **)(param_1 + 0x1060);
    plVar5 = plVar1;
    do {
      while (plVar4 = plVar2, cVar3 = FUN_100373110(plVar4 + 4,lVar6), cVar3 == '\0') {
        plVar5 = plVar4;
        plVar2 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_100370c7b;
      }
      plVar2 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
LAB_100370c7b:
    if ((plVar5 != plVar1) &&
       (cVar3 = FUN_100373110(lVar6,plVar5 + 4), local_38 = plVar5, cVar3 == '\0'))
    goto LAB_100370c93;
  }
  local_38 = plVar1;
LAB_100370c93:
  FUN_100371040(param_1,&local_38);
  return;
}

