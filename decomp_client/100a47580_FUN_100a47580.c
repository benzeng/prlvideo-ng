
bool FUN_100a47580(uint *param_1,long param_2,long param_3,long *param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  uint *puVar6;
  long *plVar7;
  
  if (0 < param_2) {
    puVar6 = (uint *)(param_2 + (long)param_1);
    plVar7 = (long *)(param_3 + 8);
    do {
      if (puVar6 < param_1 + 2) {
        return false;
      }
      if (puVar6 < (uint *)((ulong)param_1[1] + 8 + (long)param_1)) {
        return false;
      }
      if ((long *)*plVar7 == (long *)0x0) {
LAB_100a4760d:
        plVar4 = plVar7;
      }
      else {
        plVar2 = (long *)*plVar7;
        plVar5 = plVar7;
        do {
          while (plVar4 = plVar2, *(uint *)(plVar4 + 4) < *param_1) {
            plVar1 = plVar4 + 1;
            plVar4 = plVar5;
            plVar2 = (long *)*plVar1;
            if ((long *)*plVar1 == (long *)0x0) goto LAB_100a47603;
          }
          plVar2 = (long *)*plVar4;
          plVar5 = plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
LAB_100a47603:
        if ((plVar4 == plVar7) || (*param_1 < *(uint *)(plVar4 + 4))) goto LAB_100a4760d;
      }
      if (plVar7 == plVar4) {
        plVar2 = (long *)*param_4;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
        }
      }
      else {
        cVar3 = (**(code **)(*(long *)plVar4[5] + 0x18))((long *)plVar4[5],param_1);
        if (param_5 == 0) {
          return (bool)cVar3;
        }
        if (cVar3 != '\x01') {
          return (bool)cVar3;
        }
      }
      param_1 = (uint *)((ulong)param_1[1] + 8 + (long)param_1);
    } while (param_1 < puVar6);
  }
  return param_5 != 0;
}

