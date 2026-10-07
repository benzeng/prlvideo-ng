
undefined1  [16] FUN_1005a4950(long *param_1,ulong *param_2)

{
  long **pplVar1;
  long ***ppplVar2;
  long **pplVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  long ***ppplVar5;
  long ****pppplVar6;
  undefined1 auVar7 [16];
  long ***local_40;
  bool local_31;
  
  if ((long ****)param_1[1] == (long ****)0x0) {
    local_40 = (long ***)(param_1 + 1);
LAB_1005a49bc:
    pppplVar6 = (long ****)local_40;
  }
  else {
    pppplVar6 = (long ****)param_1[1];
    do {
      while (local_40 = (long ***)pppplVar6, (long ***)*param_2 < local_40[4]) {
        pppplVar6 = (long ****)*local_40;
        if ((long ****)*local_40 == (long ****)0x0) goto LAB_1005a49bc;
      }
      if ((long ***)*param_2 <= local_40[4]) {
        pppplVar6 = &local_40;
        goto LAB_1005a49cd;
      }
      pppplVar6 = (long ****)local_40[1];
    } while ((long ****)local_40[1] != (long ****)0x0);
    pppplVar6 = (long ****)(local_40 + 1);
  }
LAB_1005a49cd:
  ppplVar5 = local_40;
  ppplVar2 = *pppplVar6;
  if (ppplVar2 == (long ***)0x0) {
    ppplVar2 = operator_new(0x30);
    pplVar3 = (long **)*param_2;
    ppplVar2[4] = pplVar3;
    pplVar1 = (long **)param_2[1];
    ppplVar2[5] = pplVar1;
    if (1 < *(int *)pplVar1 + 1U) {
      LOCK();
      *(int *)pplVar1 = *(int *)pplVar1 + 1;
      UNLOCK();
      local_31 = *(int *)pplVar1 != 0;
      pplVar3 = (long **)*param_2;
    }
    ppplVar2[4] = pplVar3;
    ppplVar2[1] = (long **)0x0;
    *ppplVar2 = (long **)0x0;
    ppplVar2[2] = (long **)ppplVar5;
    *pppplVar6 = ppplVar2;
    ppplVar5 = ppplVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar5 = *pppplVar6;
    }
    FUN_1000e8bb0(param_1[1],ppplVar5);
    param_1[2] = param_1[2] + 1;
    uVar4 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = ppplVar2;
  return auVar7;
}

