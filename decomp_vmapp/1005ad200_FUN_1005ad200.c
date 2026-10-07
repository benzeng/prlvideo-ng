
undefined1 FUN_1005ad200(long *param_1)

{
  uint uVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  undefined1 uVar7;
  
  uVar1 = *(uint *)(param_1 + 6);
  if (uVar1 < 0x400) {
    uVar7 = 0;
  }
  else if ((long *)param_1[4] == param_1 + 4) {
    uVar7 = 0;
    FUN_1008e3970("","vdisk",0,
                  "Error: can\'t get last element of groups, list is empty, loaded %u (0x%X)",uVar1,
                  uVar1);
  }
  else {
    plVar2 = (long *)param_1[5];
    cVar6 = FUN_1005ab890(param_1 + 9,plVar2 + -5);
    if ((cVar6 == '\0') && (1 < DAT_1011b55f8)) {
      FUN_1008e3970("","vdisk",2,"Failed to write unused group[%u]",(int)plVar2[2]);
    }
    pvVar3 = (void *)plVar2[-5];
    uVar7 = 1;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
      plVar2[-5] = 0;
      if ((void *)plVar2[-4] != (void *)0x0) {
        operator_delete__((void *)plVar2[-4]);
        plVar2[-4] = 0;
      }
      lVar4 = *plVar2;
      plVar5 = (long *)plVar2[1];
      *(long **)(lVar4 + 8) = plVar5;
      *plVar5 = lVar4;
      *plVar2 = (long)plVar2;
      plVar2[1] = (long)plVar2;
      *(int *)(param_1 + 6) = (int)param_1[6] + -1;
      if (*(long *)(*param_1 + 0x1390) != 0) {
        plVar2 = (long *)(*(long *)(*param_1 + 0x1390) + 0xf0);
        *plVar2 = *plVar2 + -1;
      }
    }
  }
  return uVar7;
}

