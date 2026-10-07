
void FUN_10057de10(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  
  uVar1 = param_1[2];
  if (param_2 < uVar1) {
    if (uVar1 >> 1 < param_2) {
      bVar7 = (long)(uVar1 - param_2) < 0;
      plVar4 = param_1;
      if (uVar1 == param_2 || bVar7) {
        if (bVar7) {
          lVar5 = (param_2 + 1) - uVar1;
          do {
            plVar4 = (long *)plVar4[1];
            lVar5 = lVar5 + -1;
          } while (1 < lVar5);
        }
      }
      else {
        lVar5 = (param_2 - 1) - uVar1;
        do {
          plVar4 = (long *)*plVar4;
          lVar5 = lVar5 + 1;
        } while (lVar5 < -1);
      }
    }
    else {
      plVar4 = (long *)param_1[1];
      if ((long)param_2 < 0) {
        lVar5 = param_2 - 1;
        do {
          plVar4 = (long *)*plVar4;
          lVar5 = lVar5 + 1;
        } while (lVar5 < -1);
      }
      else if (0 < (long)param_2) {
        lVar5 = param_2 + 1;
        do {
          plVar4 = (long *)plVar4[1];
          lVar5 = lVar5 + -1;
        } while (1 < lVar5);
      }
    }
    if (plVar4 != param_1) {
      lVar5 = *param_1;
      lVar2 = *plVar4;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar5 + 8);
      **(long **)(lVar5 + 8) = lVar2;
      plVar3 = (long *)plVar4[1];
      param_1[2] = uVar1 - 1;
      operator_delete(plVar4);
      while (plVar3 != param_1) {
        plVar4 = (long *)plVar3[1];
        param_1[2] = param_1[2] + -1;
        operator_delete(plVar3);
        plVar3 = plVar4;
      }
    }
  }
  else if (uVar1 < param_2) {
    plVar3 = operator_new(0x1810);
    *plVar3 = 0;
    ___bzero(plVar3 + 2,0x1800);
    lVar5 = 1;
    plVar4 = plVar3;
    if (param_2 - uVar1 != 1) {
      lVar5 = 1;
      plVar6 = plVar3;
      do {
        plVar4 = operator_new(0x1810);
        ___bzero(plVar4 + 2,0x1800);
        plVar6[1] = (long)plVar4;
        *plVar4 = (long)plVar6;
        lVar5 = lVar5 + 1;
        plVar6 = plVar4;
      } while (param_2 - uVar1 != lVar5);
    }
    plVar4[1] = (long)param_1;
    lVar2 = *param_1;
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    *param_1 = (long)plVar4;
    param_1[2] = uVar1 + lVar5;
  }
  return;
}

