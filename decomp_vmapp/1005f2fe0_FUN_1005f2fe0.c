
long * FUN_1005f2fe0(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  
  plVar1 = param_1 + 1;
  if (plVar1 != param_2) {
    iVar3 = FUN_1007ea6f0(param_4,param_2 + 4);
    if (-1 < iVar3) {
      iVar3 = FUN_1007ea6f0(param_2 + 4,param_4);
      if (-1 < iVar3) {
LAB_1005f31b4:
        *param_3 = (long)param_2;
        return param_3;
      }
      plVar5 = (long *)param_2[1];
      plVar4 = param_2;
      plVar2 = plVar5;
      if (plVar5 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar4[2];
          bVar7 = (long *)*plVar6 != plVar4;
          plVar4 = plVar6;
        } while (bVar7);
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (plVar6 == plVar1) {
LAB_1005f31db:
        if (plVar5 != (long *)0x0) {
          *param_3 = (long)plVar6;
          return plVar6;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      iVar3 = FUN_1007ea6f0(param_4,plVar6 + 4);
      if (iVar3 < 0) {
        plVar5 = (long *)param_2[1];
        goto LAB_1005f31db;
      }
      plVar5 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_1005f3161;
      do {
        while( true ) {
          param_2 = plVar5;
          iVar3 = FUN_1007ea6f0(param_4,param_2 + 4);
          if (iVar3 < 0) break;
          iVar3 = FUN_1007ea6f0(param_2 + 4,param_4);
          if (-1 < iVar3) goto LAB_1005f31b4;
          plVar5 = (long *)param_2[1];
          if ((long *)param_2[1] == (long *)0x0) goto LAB_1005f31bd;
        }
        plVar5 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
      goto LAB_1005f31a8;
    }
  }
  plVar5 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar4 = param_2;
    plVar2 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      do {
        plVar5 = (long *)plVar4[2];
        bVar7 = (long *)*plVar5 == plVar4;
        plVar4 = plVar5;
      } while (bVar7);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)plVar5[1];
      } while ((long *)plVar5[1] != (long *)0x0);
    }
    iVar3 = FUN_1007ea6f0(plVar5 + 4,param_4);
    if (-1 < iVar3) {
      plVar5 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) {
LAB_1005f3161:
        *param_3 = (long)plVar1;
        return plVar1;
      }
      do {
        while( true ) {
          param_2 = plVar5;
          iVar3 = FUN_1007ea6f0(param_4,param_2 + 4);
          if (iVar3 < 0) break;
          iVar3 = FUN_1007ea6f0(param_2 + 4,param_4);
          if (-1 < iVar3) goto LAB_1005f31b4;
          plVar5 = (long *)param_2[1];
          if ((long *)param_2[1] == (long *)0x0) {
LAB_1005f31bd:
            *param_3 = (long)param_2;
            return param_2 + 1;
          }
        }
        plVar5 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
      goto LAB_1005f31a8;
    }
  }
  if (*param_2 != 0) {
    *param_3 = (long)plVar5;
    return plVar5 + 1;
  }
LAB_1005f31a8:
  *param_3 = (long)param_2;
  return param_2;
}

