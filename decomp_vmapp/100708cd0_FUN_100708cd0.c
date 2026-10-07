
undefined1  [16] FUN_100708cd0(long *param_1,int *param_2)

{
  long ***ppplVar1;
  int iVar2;
  long ****pppplVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  long ****pppplVar5;
  long *****ppppplVar6;
  undefined1 auVar7 [16];
  long ****local_38;
  
  if ((long *****)param_1[1] == (long *****)0x0) {
    local_38 = (long ****)(param_1 + 1);
LAB_100708d3b:
    ppppplVar6 = (long *****)local_38;
  }
  else {
    ppppplVar6 = (long *****)param_1[1];
    do {
      while (local_38 = (long ****)ppppplVar6, *param_2 < *(int *)(local_38 + 4)) {
        ppppplVar6 = (long *****)*local_38;
        if ((long *****)*local_38 == (long *****)0x0) goto LAB_100708d3b;
      }
      if (*param_2 <= *(int *)(local_38 + 4)) {
        ppppplVar6 = &local_38;
        goto LAB_100708d4c;
      }
      ppppplVar6 = (long *****)local_38[1];
    } while ((long *****)local_38[1] != (long *****)0x0);
    ppppplVar6 = (long *****)(local_38 + 1);
  }
LAB_100708d4c:
  pppplVar5 = local_38;
  pppplVar3 = *ppppplVar6;
  if (pppplVar3 == (long ****)0x0) {
    pppplVar3 = operator_new(0x30);
    iVar2 = *param_2;
    *(int *)(pppplVar3 + 4) = iVar2;
    ppplVar1 = *(long ****)(param_2 + 2);
    pppplVar3[5] = ppplVar1;
    if (ppplVar1 != (long ***)0x0) {
      LOCK();
      *(int *)(ppplVar1 + 1) = *(int *)(ppplVar1 + 1) + 1;
      UNLOCK();
      iVar2 = *param_2;
    }
    *(int *)(pppplVar3 + 4) = iVar2;
    pppplVar3[1] = (long ***)0x0;
    *pppplVar3 = (long ***)0x0;
    pppplVar3[2] = (long ***)pppplVar5;
    *ppppplVar6 = pppplVar3;
    pppplVar5 = pppplVar3;
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
  auVar7._0_8_ = pppplVar3;
  return auVar7;
}

