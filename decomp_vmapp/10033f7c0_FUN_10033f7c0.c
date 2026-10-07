
long **** FUN_10033f7c0(long *param_1,uint *param_2)

{
  long ***ppplVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ***local_38;
  
  pppplVar2 = (long ****)param_1[1];
  if (pppplVar2 == (long ****)0x0) {
    pppplVar4 = (long ****)(param_1 + 1);
    local_38 = (long ***)pppplVar4;
LAB_10033f84e:
    if (pppplVar2 != (long ****)0x0) goto LAB_10033f8a7;
  }
  else {
    pppplVar3 = pppplVar2;
    do {
      while (pppplVar2 = pppplVar3, local_38 = (long ***)pppplVar2,
            *param_2 < *(uint *)(pppplVar2 + 4)) {
        pppplVar3 = (long ****)*pppplVar2;
        pppplVar4 = pppplVar2;
        if ((long ****)*pppplVar2 == (long ****)0x0) goto LAB_10033f853;
      }
      if (*param_2 <= *(uint *)(pppplVar2 + 4)) {
        pppplVar4 = &local_38;
        goto LAB_10033f84e;
      }
      pppplVar3 = (long ****)pppplVar2[1];
    } while ((long ****)pppplVar2[1] != (long ****)0x0);
    pppplVar4 = pppplVar2 + 1;
  }
LAB_10033f853:
  ppplVar1 = local_38;
  pppplVar2 = operator_new(0x30);
  *(uint *)(pppplVar2 + 4) = *param_2;
  pppplVar2[5] = (long ***)0x0;
  pppplVar2[1] = (long ***)0x0;
  *pppplVar2 = (long ***)0x0;
  pppplVar2[2] = ppplVar1;
  *pppplVar4 = (long ***)pppplVar2;
  pppplVar3 = pppplVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    pppplVar3 = (long ****)*pppplVar4;
  }
  FUN_1000e8bb0(param_1[1],pppplVar3);
  param_1[2] = param_1[2] + 1;
LAB_10033f8a7:
  return pppplVar2 + 5;
}

