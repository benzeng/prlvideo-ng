
undefined1  [16] FUN_100dd5d70(long *param_1,undefined8 *param_2)

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
  long ***local_40;
  bool local_31;
  
  pppplVar2 = (long ****)param_1[1];
  if ((long ****)param_1[1] == (long ****)0x0) {
    pppplVar6 = (long ****)(param_1 + 1);
  }
  else {
    do {
      while( true ) {
        pppplVar8 = pppplVar2;
        iVar3 = FUN_100deb2c0(param_2,pppplVar8 + 4);
        if (iVar3 < 0) break;
        iVar3 = FUN_100deb2c0(pppplVar8 + 4,param_2);
        if (-1 < iVar3) {
          local_40 = (long ***)pppplVar8;
          pppplVar6 = &local_40;
          goto LAB_100dd5df4;
        }
        pppplVar2 = (long ****)pppplVar8[1];
        if ((long ****)pppplVar8[1] == (long ****)0x0) {
          pppplVar6 = pppplVar8 + 1;
          local_40 = (long ***)pppplVar8;
          goto LAB_100dd5df4;
        }
      }
      pppplVar2 = (long ****)*pppplVar8;
      pppplVar6 = pppplVar8;
    } while ((long ****)*pppplVar8 != (long ****)0x0);
  }
  local_40 = (long ***)pppplVar6;
LAB_100dd5df4:
  ppplVar7 = local_40;
  ppplVar4 = *pppplVar6;
  if (ppplVar4 == (long ***)0x0) {
    ppplVar4 = operator_new(0x40);
    pplVar1 = (long **)*param_2;
    ppplVar4[5] = (long **)param_2[1];
    ppplVar4[4] = pplVar1;
    *(undefined1 *)((long)ppplVar4 + 0x34) = *(undefined1 *)((long)param_2 + 0x14);
    *(undefined4 *)(ppplVar4 + 6) = *(undefined4 *)(param_2 + 2);
    pplVar1 = (long **)param_2[3];
    ppplVar4[7] = pplVar1;
    if (1 < *(int *)pplVar1 + 1U) {
      LOCK();
      *(int *)pplVar1 = *(int *)pplVar1 + 1;
      UNLOCK();
      local_31 = *(int *)pplVar1 != 0;
    }
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
    FUN_1001879a0(param_1[1],ppplVar7);
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

