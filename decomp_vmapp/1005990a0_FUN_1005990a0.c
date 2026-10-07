
undefined1  [16] FUN_1005990a0(long *param_1,undefined8 *param_2)

{
  long ***ppplVar1;
  long *****ppppplVar2;
  int iVar3;
  undefined4 uVar4;
  long ****pppplVar5;
  undefined8 extraout_RDX;
  undefined8 uVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  long *****ppppplVar9;
  undefined1 auVar10 [16];
  long ****local_40;
  bool local_32;
  bool local_31;
  
  ppppplVar2 = (long *****)param_1[1];
  if ((long *****)param_1[1] == (long *****)0x0) {
    ppppplVar7 = (long *****)(param_1 + 1);
  }
  else {
    do {
      while( true ) {
        ppppplVar9 = ppppplVar2;
        iVar3 = FUN_1007ea6f0(param_2,ppppplVar9 + 4);
        if (iVar3 < 0) break;
        iVar3 = FUN_1007ea6f0(ppppplVar9 + 4,param_2);
        if (-1 < iVar3) {
          local_40 = (long ****)ppppplVar9;
          ppppplVar7 = &local_40;
          goto LAB_100599124;
        }
        ppppplVar2 = (long *****)ppppplVar9[1];
        if ((long *****)ppppplVar9[1] == (long *****)0x0) {
          ppppplVar7 = ppppplVar9 + 1;
          local_40 = (long ****)ppppplVar9;
          goto LAB_100599124;
        }
      }
      ppppplVar2 = (long *****)*ppppplVar9;
      ppppplVar7 = ppppplVar9;
    } while ((long *****)*ppppplVar9 != (long *****)0x0);
  }
  local_40 = (long ****)ppppplVar7;
LAB_100599124:
  pppplVar8 = local_40;
  pppplVar5 = *ppppplVar7;
  if (pppplVar5 == (long ****)0x0) {
    pppplVar5 = operator_new(0x60);
    ppplVar1 = (long ***)*param_2;
    pppplVar5[5] = (long ***)param_2[1];
    pppplVar5[4] = ppplVar1;
    uVar4 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(pppplVar5 + 6) = uVar4;
    ppplVar1 = (long ***)param_2[3];
    pppplVar5[7] = ppplVar1;
    if (1 < *(int *)ppplVar1 + 1U) {
      LOCK();
      *(int *)ppplVar1 = *(int *)ppplVar1 + 1;
      UNLOCK();
      local_32 = *(int *)ppplVar1 != 0;
      uVar4 = *(undefined4 *)(param_2 + 2);
    }
    *(undefined4 *)(pppplVar5 + 6) = uVar4;
    ppplVar1 = (long ***)param_2[4];
    pppplVar5[8] = ppplVar1;
    if (1 < *(int *)ppplVar1 + 1U) {
      LOCK();
      *(int *)ppplVar1 = *(int *)ppplVar1 + 1;
      UNLOCK();
      local_31 = *(int *)ppplVar1 != 0;
    }
    ppplVar1 = (long ***)param_2[5];
    pppplVar5[10] = (long ***)param_2[6];
    pppplVar5[9] = ppplVar1;
    ppplVar1 = (long ***)param_2[7];
    pppplVar5[0xb] = ppplVar1;
    if (ppplVar1 != (long ***)0x0) {
      LOCK();
      *(int *)(ppplVar1 + 1) = *(int *)(ppplVar1 + 1) + 1;
      UNLOCK();
    }
    ppplVar1 = (long ***)*param_2;
    pppplVar5[5] = (long ***)param_2[1];
    pppplVar5[4] = ppplVar1;
    pppplVar5[1] = (long ***)0x0;
    *pppplVar5 = (long ***)0x0;
    pppplVar5[2] = (long ***)pppplVar8;
    *ppppplVar7 = pppplVar5;
    pppplVar8 = pppplVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      pppplVar8 = *ppppplVar7;
    }
    FUN_1000e8bb0(param_1[1],pppplVar8);
    param_1[2] = param_1[2] + 1;
    uVar6 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar6 = 0;
  }
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = pppplVar5;
  return auVar10;
}

