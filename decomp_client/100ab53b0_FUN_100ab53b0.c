
long * FUN_100ab53b0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if ((lVar2 < lVar1) || (param_2[1] <= lVar2)) {
    lVar6 = param_3[1];
    lVar3 = param_2[1];
    if (((lVar6 < lVar1) || (lVar5 = lVar3, lVar3 <= lVar6)) &&
       ((lVar5 = lVar2, lVar3 != lVar2 &&
        (bVar7 = lVar1 != lVar6, lVar5 = lVar3, lVar6 = lVar1, bVar7)))) {
      param_1[1] = 0;
      *param_1 = 0;
      return param_1;
    }
  }
  else {
    lVar5 = param_2[1];
    lVar6 = param_3[1];
  }
  plVar4 = param_3;
  if (lVar1 < lVar2) {
    plVar4 = param_2;
  }
  if (lVar6 < lVar5) {
    param_3 = param_2;
  }
  *param_1 = *plVar4;
  param_1[1] = param_3[1];
  return param_1;
}

