
undefined1  [16] FUN_1005d6630(long *param_1,undefined8 *param_2)

{
  long ****pppplVar1;
  int iVar2;
  long ***ppplVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  undefined1 auVar8 [16];
  long ***local_38;
  
  pppplVar1 = (long ****)param_1[1];
  if ((long ****)param_1[1] == (long ****)0x0) {
    pppplVar5 = (long ****)(param_1 + 1);
  }
  else {
    do {
      while( true ) {
        pppplVar7 = pppplVar1;
        iVar2 = FUN_1007ea6f0(param_2,(long)pppplVar7 + 0x19);
        if (iVar2 < 0) break;
        iVar2 = FUN_1007ea6f0((long)pppplVar7 + 0x19,param_2);
        if (-1 < iVar2) {
          local_38 = (long ***)pppplVar7;
          pppplVar5 = &local_38;
          goto LAB_1005d66b4;
        }
        pppplVar1 = (long ****)pppplVar7[1];
        if ((long ****)pppplVar7[1] == (long ****)0x0) {
          pppplVar5 = pppplVar7 + 1;
          local_38 = (long ***)pppplVar7;
          goto LAB_1005d66b4;
        }
      }
      pppplVar1 = (long ****)*pppplVar7;
      pppplVar5 = pppplVar7;
    } while ((long ****)*pppplVar7 != (long ****)0x0);
  }
  local_38 = (long ***)pppplVar5;
LAB_1005d66b4:
  ppplVar6 = local_38;
  ppplVar3 = *pppplVar5;
  if (ppplVar3 == (long ***)0x0) {
    ppplVar3 = operator_new(0x30);
    uVar4 = *param_2;
    *(undefined8 *)((long)ppplVar3 + 0x21) = param_2[1];
    *(undefined8 *)((long)ppplVar3 + 0x19) = uVar4;
    ppplVar3[1] = (long **)0x0;
    *ppplVar3 = (long **)0x0;
    ppplVar3[2] = (long **)ppplVar6;
    *pppplVar5 = ppplVar3;
    ppplVar6 = ppplVar3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar6 = *pppplVar5;
    }
    FUN_1000e8bb0(param_1[1],ppplVar6);
    param_1[2] = param_1[2] + 1;
    uVar4 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = ppplVar3;
  return auVar8;
}

