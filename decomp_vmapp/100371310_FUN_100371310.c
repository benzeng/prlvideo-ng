
void FUN_100371310(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long *local_38;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x1060);
  if (*(long **)(param_1 + 0x1060) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x1060);
    plVar5 = plVar1;
    do {
      while (plVar4 = plVar2, cVar3 = FUN_100373110(plVar4 + 4,param_2 + 0x10), cVar3 == '\0') {
        plVar5 = plVar4;
        plVar2 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_100371380;
      }
      plVar2 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
LAB_100371380:
    if ((plVar5 != plVar1) &&
       (cVar3 = FUN_100373110(param_2 + 0x10,plVar5 + 4), local_38 = plVar5, cVar3 == '\0'))
    goto LAB_100371398;
  }
  local_38 = plVar1;
LAB_100371398:
  FUN_100371040(param_1,&local_38);
  return;
}

