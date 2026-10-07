
long * FUN_1006c2000(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      param_2 = (long *)*param_2;
      if ((int)param_2[5] < (int)param_1[5]) {
        lVar3 = *param_2;
        *(long *)(lVar3 + 8) = param_2[1];
        *(long *)param_2[1] = lVar3;
        lVar3 = *param_1;
        *(long **)(lVar3 + 8) = param_2;
        *param_2 = lVar3;
        *param_1 = (long)param_2;
        param_2[1] = (long)param_1;
        param_1 = param_2;
      }
    }
    else {
      uVar8 = param_3 >> 1;
      plVar4 = param_1;
      if (uVar8 != 0) {
        lVar3 = uVar8 + 1;
        do {
          plVar4 = (long *)plVar4[1];
          lVar3 = lVar3 + -1;
        } while (1 < lVar3);
      }
      param_1 = (long *)FUN_1006c2000(param_1,plVar4,uVar8,param_4);
      plVar4 = (long *)FUN_1006c2000(plVar4,param_2,param_3 - uVar8,param_4);
      if ((int)plVar4[5] < (int)param_1[5]) {
        for (plVar6 = (long *)plVar4[1]; (plVar6 != param_2 && ((int)plVar6[5] < (int)param_1[5]));
            plVar6 = (long *)plVar6[1]) {
        }
        lVar3 = *plVar6;
        lVar1 = *plVar4;
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar3 + 8);
        **(long **)(lVar3 + 8) = lVar1;
        lVar1 = *param_1;
        plVar7 = (long *)param_1[1];
        *(long **)(lVar1 + 8) = plVar4;
        *plVar4 = lVar1;
        *param_1 = lVar3;
        *(long **)(lVar3 + 8) = param_1;
        param_1 = plVar4;
      }
      else {
        plVar7 = (long *)param_1[1];
        plVar6 = plVar4;
      }
      plVar4 = plVar6;
      if (plVar7 != plVar6) {
        while (plVar4 != param_2) {
          while ((int)plVar7[5] <= (int)plVar4[5]) {
            plVar7 = (long *)plVar7[1];
            if (plVar7 == plVar6) {
              return param_1;
            }
          }
          for (plVar5 = (long *)plVar4[1]; (plVar5 != param_2 && ((int)plVar5[5] < (int)plVar7[5]));
              plVar5 = (long *)plVar5[1]) {
          }
          lVar3 = *plVar5;
          lVar1 = *plVar4;
          *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar3 + 8);
          **(long **)(lVar3 + 8) = lVar1;
          plVar2 = (long *)plVar7[1];
          if (plVar6 == plVar4) {
            plVar6 = plVar5;
          }
          lVar1 = *plVar7;
          *(long **)(lVar1 + 8) = plVar4;
          *plVar4 = lVar1;
          *plVar7 = lVar3;
          *(long **)(lVar3 + 8) = plVar7;
          plVar4 = plVar5;
          plVar7 = plVar2;
          if (plVar2 == plVar6) {
            return param_1;
          }
        }
      }
    }
  }
  return param_1;
}

