
undefined8 FUN_1003dd440(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  
  plVar3 = (long *)param_1[1];
  uVar5 = 0;
  if (plVar3 != (long *)0x0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    plVar6 = plVar3;
    plVar7 = param_1 + 1;
    do {
      while ((plVar8 = plVar6, *(uint *)(plVar8 + 4) < uVar1 ||
             ((*(uint *)(plVar8 + 4) == uVar1 &&
              ((*(uint *)((long)plVar8 + 0x24) < uVar2 ||
               ((*(uint *)((long)plVar8 + 0x24) == uVar2 && (*(uint *)(plVar8 + 5) < param_2[2])))))
              )))) {
        plVar4 = plVar8 + 1;
        plVar8 = plVar7;
        plVar6 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_1003dd49d;
      }
      plVar6 = (long *)*plVar8;
      plVar7 = plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
LAB_1003dd49d:
    uVar5 = 0;
    if (plVar8 != param_1 + 1) {
      uVar5 = 0;
      if (*(uint *)(plVar8 + 4) <= uVar1) {
        if (uVar1 == *(uint *)(plVar8 + 4)) {
          if (uVar2 < *(uint *)((long)plVar8 + 0x24)) {
            return 0;
          }
          if ((uVar2 == *(uint *)((long)plVar8 + 0x24)) && (param_2[2] < *(uint *)(plVar8 + 5))) {
            return 0;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar4 = (long *)plVar6[2];
            bVar9 = (long *)*plVar4 != plVar6;
            plVar6 = plVar4;
          } while (bVar9);
        }
        else {
          do {
            plVar4 = plVar7;
            plVar7 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        if ((long *)*param_1 == plVar8) {
          *param_1 = plVar4;
        }
        param_1[2] = param_1[2] + -1;
        FUN_1000e86c0(plVar3,plVar8);
        operator_delete(plVar8);
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

