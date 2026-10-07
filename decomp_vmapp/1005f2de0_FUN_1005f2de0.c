
undefined1  [16] FUN_1005f2de0(long *param_1,undefined8 *param_2)

{
  long ***ppplVar1;
  long *****ppppplVar2;
  int iVar3;
  long ****pppplVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  long *****ppppplVar6;
  long ****pppplVar7;
  long *****ppppplVar8;
  undefined1 auVar9 [16];
  long ****local_38;
  
  ppppplVar2 = (long *****)param_1[1];
  if ((long *****)param_1[1] == (long *****)0x0) {
    ppppplVar6 = (long *****)(param_1 + 1);
  }
  else {
    do {
      while( true ) {
        ppppplVar8 = ppppplVar2;
        iVar3 = FUN_1007ea6f0(param_2,ppppplVar8 + 4);
        if (iVar3 < 0) break;
        iVar3 = FUN_1007ea6f0(ppppplVar8 + 4,param_2);
        if (-1 < iVar3) {
          local_38 = (long ****)ppppplVar8;
          ppppplVar6 = &local_38;
          goto LAB_1005f2e64;
        }
        ppppplVar2 = (long *****)ppppplVar8[1];
        if ((long *****)ppppplVar8[1] == (long *****)0x0) {
          ppppplVar6 = ppppplVar8 + 1;
          local_38 = (long ****)ppppplVar8;
          goto LAB_1005f2e64;
        }
      }
      ppppplVar2 = (long *****)*ppppplVar8;
      ppppplVar6 = ppppplVar8;
    } while ((long *****)*ppppplVar8 != (long *****)0x0);
  }
  local_38 = (long ****)ppppplVar6;
LAB_1005f2e64:
  pppplVar7 = local_38;
  pppplVar4 = *ppppplVar6;
  if (pppplVar4 == (long ****)0x0) {
    pppplVar4 = operator_new(0x38);
    ppplVar1 = (long ***)*param_2;
    pppplVar4[5] = (long ***)param_2[1];
    pppplVar4[4] = ppplVar1;
    ppplVar1 = (long ***)param_2[2];
    pppplVar4[6] = ppplVar1;
    if (ppplVar1 != (long ***)0x0) {
      LOCK();
      *(int *)(ppplVar1 + 1) = *(int *)(ppplVar1 + 1) + 1;
      UNLOCK();
    }
    ppplVar1 = (long ***)*param_2;
    pppplVar4[5] = (long ***)param_2[1];
    pppplVar4[4] = ppplVar1;
    pppplVar4[1] = (long ***)0x0;
    *pppplVar4 = (long ***)0x0;
    pppplVar4[2] = (long ***)pppplVar7;
    *ppppplVar6 = pppplVar4;
    pppplVar7 = pppplVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      pppplVar7 = *ppppplVar6;
    }
    FUN_1000e8bb0(param_1[1],pppplVar7);
    param_1[2] = param_1[2] + 1;
    uVar5 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = pppplVar4;
  return auVar9;
}

