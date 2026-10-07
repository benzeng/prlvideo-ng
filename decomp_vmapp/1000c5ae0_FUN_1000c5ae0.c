
long * FUN_1000c5ae0(long *param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      param_2 = (long *)*param_2;
      iVar1 = (*(code *)*param_4)(param_2[2],param_1[2]);
      if (iVar1 != 0) {
        *(long *)(*param_2 + 8) = param_2[1];
        *(long *)param_2[1] = *param_2;
        *(long **)(*param_1 + 8) = param_2;
        *param_2 = *param_1;
        *param_1 = (long)param_2;
        param_2[1] = (long)param_1;
        param_1 = param_2;
      }
    }
    else {
      uVar7 = param_3 >> 1;
      plVar3 = param_1;
      if (uVar7 != 0) {
        lVar2 = uVar7 + 1;
        do {
          plVar3 = (long *)plVar3[1];
          lVar2 = lVar2 + -1;
        } while (1 < lVar2);
      }
      param_1 = (long *)FUN_1000c5ae0(param_1,plVar3,uVar7,param_4);
      plVar3 = (long *)FUN_1000c5ae0(plVar3,param_2,param_3 - uVar7,param_4);
      iVar1 = (*(code *)*param_4)(plVar3[2],param_1[2]);
      if (iVar1 == 0) {
        plVar4 = (long *)param_1[1];
      }
      else {
        plVar8 = (long *)plVar3[1];
        while ((plVar8 != param_2 && (iVar1 = (*(code *)*param_4)(plVar8[2],param_1[2]), iVar1 != 0)
               )) {
          plVar8 = (long *)plVar8[1];
        }
        lVar2 = *plVar8;
        *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar2 + 8);
        **(long **)(lVar2 + 8) = *plVar3;
        plVar4 = (long *)param_1[1];
        *(long **)(*param_1 + 8) = plVar3;
        *plVar3 = *param_1;
        *param_1 = lVar2;
        *(long **)(lVar2 + 8) = param_1;
        param_1 = plVar3;
        plVar3 = plVar8;
      }
      plVar8 = plVar3;
      if (plVar4 != plVar3) {
        while (plVar5 = plVar4, plVar8 != param_2) {
          while (iVar1 = (*(code *)*param_4)(plVar8[2],plVar5[2]), iVar1 == 0) {
            plVar5 = (long *)plVar5[1];
            if (plVar5 == plVar3) {
              return param_1;
            }
          }
          plVar6 = (long *)plVar8[1];
          while ((plVar6 != param_2 &&
                 (iVar1 = (*(code *)*param_4)(plVar6[2],plVar5[2]), iVar1 != 0))) {
            plVar6 = (long *)plVar6[1];
          }
          lVar2 = *plVar6;
          *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar2 + 8);
          **(long **)(lVar2 + 8) = *plVar8;
          plVar4 = (long *)plVar5[1];
          if (plVar3 == plVar8) {
            plVar3 = plVar6;
          }
          *(long **)(*plVar5 + 8) = plVar8;
          *plVar8 = *plVar5;
          *plVar5 = lVar2;
          *(long **)(lVar2 + 8) = plVar5;
          plVar8 = plVar6;
          if (plVar4 == plVar3) {
            return param_1;
          }
        }
      }
    }
  }
  return param_1;
}

