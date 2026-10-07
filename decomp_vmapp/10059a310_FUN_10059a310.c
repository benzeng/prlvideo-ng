
undefined1  [16] FUN_10059a310(long *param_1,ulong *param_2)

{
  long ***ppplVar1;
  long ****pppplVar2;
  long ***ppplVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  long ****pppplVar5;
  long *****ppppplVar6;
  undefined1 auVar7 [16];
  long ****local_38;
  
  if ((long *****)param_1[1] == (long *****)0x0) {
    local_38 = (long ****)(param_1 + 1);
LAB_10059a37c:
    ppppplVar6 = (long *****)local_38;
  }
  else {
    ppppplVar6 = (long *****)param_1[1];
    do {
      while (local_38 = (long ****)ppppplVar6, (long ****)*param_2 < local_38[4]) {
        ppppplVar6 = (long *****)*local_38;
        if ((long *****)*local_38 == (long *****)0x0) goto LAB_10059a37c;
      }
      if ((long ****)*param_2 <= local_38[4]) {
        ppppplVar6 = &local_38;
        goto LAB_10059a38d;
      }
      ppppplVar6 = (long *****)local_38[1];
    } while ((long *****)local_38[1] != (long *****)0x0);
    ppppplVar6 = (long *****)(local_38 + 1);
  }
LAB_10059a38d:
  pppplVar5 = local_38;
  pppplVar2 = *ppppplVar6;
  if (pppplVar2 == (long ****)0x0) {
    pppplVar2 = operator_new(0x30);
    ppplVar3 = (long ***)*param_2;
    pppplVar2[4] = ppplVar3;
    ppplVar1 = (long ***)param_2[1];
    pppplVar2[5] = ppplVar1;
    if (ppplVar1 != (long ***)0x0) {
      LOCK();
      *(int *)(ppplVar1 + 1) = *(int *)(ppplVar1 + 1) + 1;
      UNLOCK();
      ppplVar3 = (long ***)*param_2;
    }
    pppplVar2[4] = ppplVar3;
    pppplVar2[1] = (long ***)0x0;
    *pppplVar2 = (long ***)0x0;
    pppplVar2[2] = (long ***)pppplVar5;
    *ppppplVar6 = pppplVar2;
    pppplVar5 = pppplVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      pppplVar5 = *ppppplVar6;
    }
    FUN_1000e8bb0(param_1[1],pppplVar5);
    param_1[2] = param_1[2] + 1;
    uVar4 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = pppplVar2;
  return auVar7;
}

