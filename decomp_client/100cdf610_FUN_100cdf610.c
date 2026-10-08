
undefined1  [16] FUN_100cdf610(long *param_1,int *param_2)

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
LAB_100cdf67b:
    pppplVar4 = (long ****)local_38;
  }
  else {
    pppplVar4 = (long ****)param_1[1];
    do {
      while (local_38 = (long ***)pppplVar4, *param_2 < *(int *)((long)local_38 + 0x1c)) {
        pppplVar4 = (long ****)*local_38;
        if ((long ****)*local_38 == (long ****)0x0) goto LAB_100cdf67b;
      }
      if (*param_2 <= *(int *)((long)local_38 + 0x1c)) {
        pppplVar4 = &local_38;
        goto LAB_100cdf68c;
      }
      pppplVar4 = (long ****)local_38[1];
    } while ((long ****)local_38[1] != (long ****)0x0);
    pppplVar4 = (long ****)(local_38 + 1);
  }
LAB_100cdf68c:
  ppplVar3 = local_38;
  ppplVar1 = *pppplVar4;
  if (ppplVar1 == (long ***)0x0) {
    ppplVar1 = operator_new(0x28);
    *(undefined8 *)((long)ppplVar1 + 0x1c) = *(undefined8 *)param_2;
    ppplVar1[1] = (long **)0x0;
    *ppplVar1 = (long **)0x0;
    ppplVar1[2] = (long **)ppplVar3;
    *pppplVar4 = ppplVar1;
    ppplVar3 = ppplVar1;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar3 = *pppplVar4;
    }
    FUN_1001879a0(param_1[1],ppplVar3);
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

