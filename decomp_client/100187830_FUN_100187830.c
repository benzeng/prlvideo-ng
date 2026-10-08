
long * FUN_100187830(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  long *plVar6;
  double *pdVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 8);
  if (plVar9 == (long *)0x0) {
    plVar8 = (long *)(param_1 + 8);
    *param_2 = (long)plVar8;
  }
  else {
    pdVar3 = (double *)*param_3;
    plVar8 = param_2;
    if (pdVar3 == (double *)0x0) {
      *param_2 = (long)plVar9;
    }
    else {
      pdVar7 = (double *)plVar9[4];
      if (pdVar7 == (double *)0x0) {
        *param_2 = (long)plVar9;
      }
      else {
        do {
          uVar1 = *(uint *)(pdVar3 + 5);
          pdVar4 = pdVar3 + 1;
          if (uVar1 < 2) {
            pdVar4 = pdVar3;
          }
          uVar2 = *(uint *)(pdVar7 + 5);
          pdVar5 = pdVar7 + 1;
          if (uVar2 < 2) {
            pdVar5 = pdVar7;
          }
          if ((*pdVar4 < *pdVar5) ||
             ((*pdVar4 <= *pdVar5 &&
              (((int)uVar1 < (int)uVar2 ||
               (((((int)uVar1 <= (int)uVar2 && (pdVar3[4] != 0.0)) && (pdVar7[4] != 0.0)) &&
                (*(int *)((long)pdVar3[4] + 0x18) < *(int *)((long)pdVar7[4] + 0x18))))))))) {
            plVar6 = (long *)*plVar9;
            if (plVar6 == (long *)0x0) {
              *param_2 = (long)plVar9;
              return plVar9;
            }
          }
          else {
            uVar1 = *(uint *)(pdVar7 + 5);
            pdVar4 = pdVar7 + 1;
            if (uVar1 < 2) {
              pdVar4 = pdVar7;
            }
            uVar2 = *(uint *)(pdVar3 + 5);
            pdVar5 = pdVar3 + 1;
            if (uVar2 < 2) {
              pdVar5 = pdVar3;
            }
            if (*pdVar5 <= *pdVar4) {
              if (*pdVar5 < *pdVar4) {
                *param_2 = (long)plVar9;
                return param_2;
              }
              if ((int)uVar2 <= (int)uVar1) {
                if ((int)uVar2 < (int)uVar1) {
                  *param_2 = (long)plVar9;
                  return param_2;
                }
                if (pdVar7[4] == 0.0) {
                  *param_2 = (long)plVar9;
                  return param_2;
                }
                if (pdVar3[4] == 0.0) {
                  *param_2 = (long)plVar9;
                  return param_2;
                }
                if (*(int *)((long)pdVar3[4] + 0x18) <= *(int *)((long)pdVar7[4] + 0x18)) {
                  *param_2 = (long)plVar9;
                  return param_2;
                }
              }
            }
            plVar6 = (long *)plVar9[1];
            if (plVar6 == (long *)0x0) {
              *param_2 = (long)plVar9;
              return plVar9 + 1;
            }
          }
        } while ((pdVar3 != (double *)0x0) &&
                (pdVar7 = (double *)plVar6[4], plVar9 = plVar6, pdVar7 != (double *)0x0));
        *param_2 = (long)plVar6;
      }
    }
  }
  return plVar8;
}

