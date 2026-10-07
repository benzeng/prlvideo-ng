
undefined1  [16] FUN_100619470(long *param_1,undefined8 *param_2)

{
  long **pplVar1;
  long ****pppplVar2;
  int iVar3;
  long ***ppplVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  long ****pppplVar6;
  long ***ppplVar7;
  long ****pppplVar8;
  undefined1 auVar9 [16];
  long ***local_38;
  
  pppplVar2 = (long ****)param_1[1];
  if ((long ****)param_1[1] == (long ****)0x0) {
    pppplVar6 = (long ****)(param_1 + 1);
  }
  else {
    do {
      while( true ) {
        pppplVar8 = pppplVar2;
        iVar3 = FUN_1007ea6f0(param_2,pppplVar8 + 4);
        if (iVar3 < 0) break;
        iVar3 = FUN_1007ea6f0(pppplVar8 + 4,param_2);
        if (-1 < iVar3) {
          local_38 = (long ***)pppplVar8;
          pppplVar6 = &local_38;
          goto LAB_1006194f4;
        }
        pppplVar2 = (long ****)pppplVar8[1];
        if ((long ****)pppplVar8[1] == (long ****)0x0) {
          pppplVar6 = pppplVar8 + 1;
          local_38 = (long ***)pppplVar8;
          goto LAB_1006194f4;
        }
      }
      pppplVar2 = (long ****)*pppplVar8;
      pppplVar6 = pppplVar8;
    } while ((long ****)*pppplVar8 != (long ****)0x0);
  }
  local_38 = (long ***)pppplVar6;
LAB_1006194f4:
  ppplVar7 = local_38;
  ppplVar4 = *pppplVar6;
  if (ppplVar4 == (long ***)0x0) {
    ppplVar4 = operator_new(0x38);
    ppplVar4[6] = (long **)param_2[2];
    pplVar1 = (long **)*param_2;
    ppplVar4[5] = (long **)param_2[1];
    ppplVar4[4] = pplVar1;
    ppplVar4[1] = (long **)0x0;
    *ppplVar4 = (long **)0x0;
    ppplVar4[2] = (long **)ppplVar7;
    *pppplVar6 = ppplVar4;
    ppplVar7 = ppplVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar7 = *pppplVar6;
    }
    FUN_1000e8bb0(param_1[1],ppplVar7);
    param_1[2] = param_1[2] + 1;
    uVar5 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = ppplVar4;
  return auVar9;
}

