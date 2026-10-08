
undefined1  [16] FUN_100b1c3c0(long *param_1,ulong *param_2)

{
  long **pplVar1;
  long ***ppplVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  long ***ppplVar4;
  long ****pppplVar5;
  undefined1 auVar6 [16];
  long ***local_38;
  
  if ((long ****)param_1[1] == (long ****)0x0) {
    local_38 = (long ***)(param_1 + 1);
LAB_100b1c42c:
    pppplVar5 = (long ****)local_38;
  }
  else {
    pppplVar5 = (long ****)param_1[1];
    do {
      while (local_38 = (long ***)pppplVar5, (long ***)*param_2 < local_38[4]) {
        pppplVar5 = (long ****)*local_38;
        if ((long ****)*local_38 == (long ****)0x0) goto LAB_100b1c42c;
      }
      if ((long ***)*param_2 <= local_38[4]) {
        pppplVar5 = &local_38;
        goto LAB_100b1c43d;
      }
      pppplVar5 = (long ****)local_38[1];
    } while ((long ****)local_38[1] != (long ****)0x0);
    pppplVar5 = (long ****)(local_38 + 1);
  }
LAB_100b1c43d:
  ppplVar4 = local_38;
  ppplVar2 = *pppplVar5;
  if (ppplVar2 == (long ***)0x0) {
    ppplVar2 = operator_new(0x30);
    pplVar1 = (long **)*param_2;
    ppplVar2[5] = (long **)param_2[1];
    ppplVar2[4] = pplVar1;
    ppplVar2[1] = (long **)0x0;
    *ppplVar2 = (long **)0x0;
    ppplVar2[2] = (long **)ppplVar4;
    *pppplVar5 = ppplVar2;
    ppplVar4 = ppplVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar4 = *pppplVar5;
    }
    FUN_1001879a0(param_1[1],ppplVar4);
    param_1[2] = param_1[2] + 1;
    uVar3 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = ppplVar2;
  return auVar6;
}

