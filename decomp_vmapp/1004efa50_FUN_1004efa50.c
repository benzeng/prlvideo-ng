
undefined1  [16] FUN_1004efa50(long *param_1,uint *param_2)

{
  long ***ppplVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  undefined1 auVar5 [16];
  long ***local_38;
  
  if ((long ****)param_1[1] == (long ****)0x0) {
    local_38 = (long ***)(param_1 + 1);
LAB_1004efabb:
    pppplVar4 = (long ****)local_38;
  }
  else {
    pppplVar4 = (long ****)param_1[1];
    do {
      while (local_38 = (long ***)pppplVar4, *param_2 < *(uint *)((long)local_38 + 0x1c)) {
        pppplVar4 = (long ****)*local_38;
        if ((long ****)*local_38 == (long ****)0x0) goto LAB_1004efabb;
      }
      if (*param_2 <= *(uint *)((long)local_38 + 0x1c)) {
        pppplVar4 = &local_38;
        goto LAB_1004efacc;
      }
      pppplVar4 = (long ****)local_38[1];
    } while ((long ****)local_38[1] != (long ****)0x0);
    pppplVar4 = (long ****)(local_38 + 1);
  }
LAB_1004efacc:
  ppplVar3 = local_38;
  ppplVar1 = *pppplVar4;
  if (ppplVar1 == (long ***)0x0) {
    ppplVar1 = operator_new(0x20);
    *(uint *)((long)ppplVar1 + 0x1c) = *param_2;
    ppplVar1[1] = (long **)0x0;
    *ppplVar1 = (long **)0x0;
    ppplVar1[2] = (long **)ppplVar3;
    *pppplVar4 = ppplVar1;
    ppplVar3 = ppplVar1;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar3 = *pppplVar4;
    }
    FUN_1000e8bb0(param_1[1],ppplVar3);
    param_1[2] = param_1[2] + 1;
    uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = ppplVar1;
  return auVar5;
}

