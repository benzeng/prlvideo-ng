
long **** FUN_1003a6d20(long *param_1,uint *param_2)

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
LAB_1003a6dae:
    if (pppplVar2 != (long ****)0x0) goto LAB_1003a6e0f;
  }
  else {
    pppplVar3 = pppplVar2;
    do {
      while (pppplVar2 = pppplVar3, local_38 = (long ***)pppplVar2,
            *param_2 < *(uint *)((long)pppplVar2 + 0x1c)) {
        pppplVar3 = (long ****)*pppplVar2;
        pppplVar4 = pppplVar2;
        if ((long ****)*pppplVar2 == (long ****)0x0) goto LAB_1003a6db3;
      }
      if (*param_2 <= *(uint *)((long)pppplVar2 + 0x1c)) {
        pppplVar4 = &local_38;
        goto LAB_1003a6dae;
      }
      pppplVar3 = (long ****)pppplVar2[1];
    } while ((long ****)pppplVar2[1] != (long ****)0x0);
    pppplVar4 = pppplVar2 + 1;
  }
LAB_1003a6db3:
  ppplVar1 = local_38;
  pppplVar2 = operator_new(0x30);
  *(uint *)((long)pppplVar2 + 0x1c) = *param_2;
  pppplVar2[5] = (long ***)0x0;
  pppplVar2[4] = (long ***)0x0;
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
LAB_1003a6e0f:
  return pppplVar2 + 4;
}

