
long **** FUN_1003733f0(long *param_1,undefined8 param_2)

{
  long ***ppplVar1;
  char cVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***local_38;
  
  pppplVar3 = (long ****)param_1[1];
  if (pppplVar3 == (long ****)0x0) {
    pppplVar4 = (long ****)(param_1 + 1);
    pppplVar5 = pppplVar4;
LAB_10037348e:
    local_38 = (long ***)pppplVar4;
    if (pppplVar3 != (long ****)0x0) goto LAB_1003734f5;
  }
  else {
    do {
      while( true ) {
        pppplVar4 = pppplVar3;
        cVar2 = FUN_100373110(param_2,pppplVar4 + 4);
        local_38 = (long ***)pppplVar4;
        if (cVar2 == '\0') break;
        pppplVar3 = (long ****)*pppplVar4;
        pppplVar5 = pppplVar4;
        if ((long ****)*pppplVar4 == (long ****)0x0) goto LAB_100373493;
      }
      cVar2 = FUN_100373110(pppplVar4 + 4,param_2);
      if (cVar2 == '\0') {
        pppplVar5 = &local_38;
        pppplVar3 = pppplVar4;
        goto LAB_10037348e;
      }
      pppplVar3 = (long ****)pppplVar4[1];
    } while ((long ****)pppplVar4[1] != (long ****)0x0);
    pppplVar5 = pppplVar4 + 1;
  }
LAB_100373493:
  ppplVar1 = local_38;
  pppplVar3 = operator_new(0x250);
  FUN_100374690(pppplVar3 + 4,param_2);
  pppplVar3[0x49] = (long ***)0x0;
  pppplVar3[1] = (long ***)0x0;
  *pppplVar3 = (long ***)0x0;
  pppplVar3[2] = ppplVar1;
  *pppplVar5 = (long ***)pppplVar3;
  pppplVar4 = pppplVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    pppplVar4 = (long ****)*pppplVar5;
  }
  FUN_1000e8bb0(param_1[1],pppplVar4);
  param_1[2] = param_1[2] + 1;
LAB_1003734f5:
  return pppplVar3 + 0x49;
}

