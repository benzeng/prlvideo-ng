
undefined1  [16] FUN_1003dd320(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long **pplVar4;
  long ***ppplVar5;
  undefined8 extraout_RDX;
  undefined8 uVar6;
  long ***ppplVar7;
  long ****pppplVar8;
  undefined1 auVar9 [16];
  long ***local_38;
  
  if ((long ****)param_1[1] == (long ****)0x0) {
    local_38 = (long ***)(param_1 + 1);
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    pppplVar8 = (long ****)param_1[1];
    do {
      while( true ) {
        local_38 = (long ***)pppplVar8;
        uVar3 = *(uint *)(local_38 + 4);
        if ((uVar1 < uVar3) ||
           ((uVar1 == uVar3 &&
            ((uVar2 < *(uint *)((long)local_38 + 0x24) ||
             ((uVar2 == *(uint *)((long)local_38 + 0x24) && (param_2[2] < *(uint *)(local_38 + 5))))
             ))))) break;
        if ((uVar1 <= uVar3) &&
           ((uVar1 != uVar3 ||
            ((uVar2 <= *(uint *)((long)local_38 + 0x24) &&
             ((*(uint *)((long)local_38 + 0x24) != uVar2 || (param_2[2] <= *(uint *)(local_38 + 5)))
             )))))) {
          pppplVar8 = &local_38;
          goto LAB_1003dd3bc;
        }
        pppplVar8 = (long ****)local_38[1];
        if ((long ****)local_38[1] == (long ****)0x0) {
          pppplVar8 = (long ****)(local_38 + 1);
          goto LAB_1003dd3bc;
        }
      }
      pppplVar8 = (long ****)*local_38;
    } while ((long ****)*local_38 != (long ****)0x0);
  }
  pppplVar8 = (long ****)local_38;
LAB_1003dd3bc:
  ppplVar7 = local_38;
  ppplVar5 = *pppplVar8;
  if (ppplVar5 == (long ***)0x0) {
    ppplVar5 = operator_new(0x38);
    ppplVar5[6] = *(long ***)(param_2 + 4);
    pplVar4 = *(long ***)param_2;
    ppplVar5[5] = *(long ***)(param_2 + 2);
    ppplVar5[4] = pplVar4;
    ppplVar5[1] = (long **)0x0;
    *ppplVar5 = (long **)0x0;
    ppplVar5[2] = (long **)ppplVar7;
    *pppplVar8 = ppplVar5;
    ppplVar7 = ppplVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar7 = *pppplVar8;
    }
    FUN_1000e8bb0(param_1[1],ppplVar7);
    param_1[2] = param_1[2] + 1;
    uVar6 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar6 = 0;
  }
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = ppplVar5;
  return auVar9;
}

