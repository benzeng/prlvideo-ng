
undefined1  [16] FUN_100650ab0(long *param_1,uint *param_2)

{
  undefined8 extraout_RDX;
  undefined8 uVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  long ***ppplVar4;
  undefined1 auVar5 [16];
  long **local_48 [3];
  long ***local_30;
  
  if ((long ****)param_1[1] == (long ****)0x0) {
    local_30 = (long ***)(param_1 + 1);
LAB_100650b1b:
    pppplVar3 = (long ****)local_30;
  }
  else {
    pppplVar3 = (long ****)param_1[1];
    do {
      while (local_30 = (long ***)pppplVar3, *param_2 < *(uint *)(local_30 + 4)) {
        pppplVar3 = (long ****)*local_30;
        if ((long ****)*local_30 == (long ****)0x0) goto LAB_100650b1b;
      }
      if (*param_2 <= *(uint *)(local_30 + 4)) {
        pppplVar3 = &local_30;
        goto LAB_100650b2c;
      }
      pppplVar3 = (long ****)local_30[1];
    } while ((long ****)local_30[1] != (long ****)0x0);
    pppplVar3 = (long ****)(local_30 + 1);
  }
LAB_100650b2c:
  ppplVar2 = local_30;
  ppplVar4 = *pppplVar3;
  if (ppplVar4 == (long ***)0x0) {
    FUN_100650ba0(local_48,param_1,param_2);
    ppplVar4 = (long ***)local_48[0];
    local_48[0] = (long **)0x0;
    ppplVar4[1] = (long **)0x0;
    *ppplVar4 = (long **)0x0;
    ppplVar4[2] = (long **)ppplVar2;
    *pppplVar3 = ppplVar4;
    ppplVar2 = ppplVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar2 = *pppplVar3;
    }
    FUN_1000e8bb0(param_1[1],ppplVar2);
    param_1[2] = param_1[2] + 1;
    uVar1 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = ppplVar4;
  return auVar5;
}

