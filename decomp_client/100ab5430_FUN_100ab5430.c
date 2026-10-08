
long * FUN_100ab5430(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if ((lVar2 < lVar1) || (lVar5 = param_2[1], lVar5 <= lVar2)) {
    lVar4 = param_3[1];
    if ((lVar4 < lVar1) || (lVar5 = param_2[1], lVar5 <= lVar4)) {
      param_1[1] = 0;
      *param_1 = 0;
      return param_1;
    }
  }
  else {
    lVar4 = param_3[1];
  }
  plVar3 = param_3;
  if (lVar2 < lVar1) {
    plVar3 = param_2;
  }
  if (lVar5 < lVar4) {
    param_3 = param_2;
  }
  *param_1 = *plVar3;
  param_1[1] = param_3[1];
  return param_1;
}

