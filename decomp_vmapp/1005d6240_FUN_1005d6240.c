
undefined1  [16] FUN_1005d6240(long *param_1,undefined8 param_2)

{
  long ****pppplVar1;
  int iVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  long ****pppplVar6;
  long ***ppplVar7;
  undefined1 auVar8 [16];
  long **local_50 [3];
  long ***local_38;
  
  pppplVar1 = (long ****)param_1[1];
  if ((long ****)param_1[1] == (long ****)0x0) {
    pppplVar4 = (long ****)(param_1 + 1);
  }
  else {
    do {
      while( true ) {
        pppplVar6 = pppplVar1;
        iVar2 = FUN_1007ea6f0(param_2,pppplVar6 + 4);
        if (iVar2 < 0) break;
        iVar2 = FUN_1007ea6f0(pppplVar6 + 4,param_2);
        if (-1 < iVar2) {
          local_38 = (long ***)pppplVar6;
          pppplVar4 = &local_38;
          goto LAB_1005d62c4;
        }
        pppplVar1 = (long ****)pppplVar6[1];
        if ((long ****)pppplVar6[1] == (long ****)0x0) {
          pppplVar4 = pppplVar6 + 1;
          local_38 = (long ***)pppplVar6;
          goto LAB_1005d62c4;
        }
      }
      pppplVar1 = (long ****)*pppplVar6;
      pppplVar4 = pppplVar6;
    } while ((long ****)*pppplVar6 != (long ****)0x0);
  }
  local_38 = (long ***)pppplVar4;
LAB_1005d62c4:
  ppplVar5 = local_38;
  ppplVar7 = *pppplVar4;
  if (ppplVar7 == (long ***)0x0) {
    FUN_1005d6340(local_50,param_1,param_2);
    ppplVar7 = (long ***)local_50[0];
    local_50[0] = (long **)0x0;
    ppplVar7[1] = (long **)0x0;
    *ppplVar7 = (long **)0x0;
    ppplVar7[2] = (long **)ppplVar5;
    *pppplVar4 = ppplVar7;
    ppplVar5 = ppplVar7;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar5 = *pppplVar4;
    }
    FUN_1000e8bb0(param_1[1],ppplVar5);
    param_1[2] = param_1[2] + 1;
    uVar3 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = ppplVar7;
  return auVar8;
}

