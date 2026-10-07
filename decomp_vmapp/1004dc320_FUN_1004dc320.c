
undefined1  [16] FUN_1004dc320(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long ***ppplVar5;
  long ****pppplVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar7;
  long ***ppplVar8;
  undefined1 uVar9;
  undefined1 auVar10 [16];
  long ***local_28;
  
  ppplVar5 = operator_new(0x38);
  uVar1 = *param_2;
  *(uint *)(ppplVar5 + 4) = uVar1;
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  *(uint *)(ppplVar5 + 5) = param_2[2];
  *(uint *)((long)ppplVar5 + 0x2c) = uVar2;
  *(uint *)(ppplVar5 + 6) = uVar3;
  *(uint *)((long)ppplVar5 + 0x34) = uVar4;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  pppplVar6 = (long ****)param_1[1];
  if ((long ****)param_1[1] == (long ****)0x0) {
    local_28 = (long ***)(param_1 + 1);
LAB_1004dc3a7:
    pppplVar6 = (long ****)local_28;
  }
  else {
    do {
      while (local_28 = (long ***)pppplVar6, uVar1 < *(uint *)(local_28 + 4)) {
        pppplVar6 = (long ****)*local_28;
        if ((long ****)*local_28 == (long ****)0x0) goto LAB_1004dc3a7;
      }
      if (uVar1 <= *(uint *)(local_28 + 4)) {
        pppplVar6 = &local_28;
        goto LAB_1004dc3b8;
      }
      pppplVar6 = (long ****)local_28[1];
    } while ((long ****)local_28[1] != (long ****)0x0);
    pppplVar6 = (long ****)(local_28 + 1);
  }
LAB_1004dc3b8:
  ppplVar8 = *pppplVar6;
  if (ppplVar8 == (long ***)0x0) {
    ppplVar5[1] = (long **)0x0;
    *ppplVar5 = (long **)0x0;
    ppplVar5[2] = (long **)local_28;
    *pppplVar6 = ppplVar5;
    ppplVar8 = ppplVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar8 = *pppplVar6;
    }
    FUN_1000e8bb0(param_1[1],ppplVar8);
    param_1[2] = param_1[2] + 1;
    uVar9 = 1;
    uVar7 = extraout_RDX_00;
  }
  else {
    uVar9 = 0;
    if (ppplVar5[6] != (long **)0x0) {
      std::__shared_weak_count::__release_shared();
    }
    operator_delete(ppplVar5);
    uVar7 = extraout_RDX;
    ppplVar5 = ppplVar8;
  }
  auVar10._9_7_ = (undefined7)((ulong)uVar7 >> 8);
  auVar10[8] = uVar9;
  auVar10._0_8_ = ppplVar5;
  return auVar10;
}

