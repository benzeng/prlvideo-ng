
long * FUN_100b12660(long *param_1,long *param_2,long *param_3,uint *param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  
  plVar1 = param_1 + 1;
  if (plVar1 != param_2) {
    uVar2 = *param_4;
    if (*(uint *)(param_2 + 4) <= uVar2) {
      if (uVar2 <= *(uint *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        return param_3;
      }
      plVar3 = (long *)param_2[1];
      plVar4 = param_2;
      plVar6 = plVar3;
      if (plVar3 == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar7 = (long *)*plVar5 != plVar4;
          plVar4 = plVar5;
        } while (bVar7);
      }
      else {
        do {
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == plVar1) || (uVar2 < *(uint *)(plVar5 + 4))) {
        if (plVar3 == (long *)0x0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
LAB_100b127da:
        *param_3 = (long)plVar5;
        return plVar5;
      }
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 != (long *)0x0) {
        do {
          while (plVar5 = plVar3, *(uint *)(plVar5 + 4) <= uVar2) {
            if (uVar2 <= *(uint *)(plVar5 + 4)) {
              *param_3 = (long)plVar5;
              return param_3;
            }
            plVar3 = (long *)plVar5[1];
            if ((long *)plVar5[1] == (long *)0x0) {
              *param_3 = (long)plVar5;
              return plVar5 + 1;
            }
          }
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
        goto LAB_100b127da;
      }
      goto LAB_100b12790;
    }
  }
  plVar3 = (long *)*param_2;
  plVar4 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar5 = plVar3;
    if (plVar3 == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar7 = (long *)*plVar4 == plVar6;
        plVar6 = plVar4;
      } while (bVar7);
    }
    else {
      do {
        plVar4 = plVar5;
        plVar5 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    uVar2 = *param_4;
    if (uVar2 <= *(uint *)(plVar4 + 4)) {
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) {
LAB_100b12790:
        *param_3 = (long)plVar1;
        return plVar1;
      }
      do {
        while (plVar4 = plVar3, uVar2 < *(uint *)(plVar4 + 4)) {
          plVar3 = (long *)*plVar4;
          if ((long *)*plVar4 == (long *)0x0) {
            *param_3 = (long)plVar4;
            return plVar4;
          }
        }
        if (uVar2 <= *(uint *)(plVar4 + 4)) {
          *param_3 = (long)plVar4;
          return param_3;
        }
        plVar3 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
      goto LAB_100b12741;
    }
  }
  if (plVar3 == (long *)0x0) {
    *param_3 = (long)param_2;
    return param_2;
  }
LAB_100b12741:
  *param_3 = (long)plVar4;
  return plVar4 + 1;
}

