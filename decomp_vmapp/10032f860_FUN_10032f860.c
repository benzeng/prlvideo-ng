
undefined1  [16] FUN_10032f860(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long ***ppplVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  long ***ppplVar5;
  long ****pppplVar6;
  undefined1 auVar7 [16];
  long ***local_38;
  
  if ((long ****)param_1[1] == (long ****)0x0) {
    local_38 = (long ***)(param_1 + 1);
  }
  else {
    iVar1 = *param_2;
    pppplVar6 = (long ****)param_1[1];
    do {
      while( true ) {
        local_38 = (long ***)pppplVar6;
        iVar2 = *(int *)((long)local_38 + 0x1c);
        if ((iVar1 < iVar2) || ((iVar1 == iVar2 && ((uint)param_2[1] < *(uint *)(local_38 + 4)))))
        break;
        if ((iVar1 <= iVar2) && ((iVar1 != iVar2 || ((uint)param_2[1] <= *(uint *)(local_38 + 4)))))
        {
          pppplVar6 = &local_38;
          goto LAB_10032f8f5;
        }
        pppplVar6 = (long ****)local_38[1];
        if ((long ****)local_38[1] == (long ****)0x0) {
          pppplVar6 = (long ****)(local_38 + 1);
          goto LAB_10032f8f5;
        }
      }
      pppplVar6 = (long ****)*local_38;
    } while ((long ****)*local_38 != (long ****)0x0);
  }
  pppplVar6 = (long ****)local_38;
LAB_10032f8f5:
  ppplVar5 = local_38;
  ppplVar3 = *pppplVar6;
  if (ppplVar3 == (long ***)0x0) {
    ppplVar3 = operator_new(0x28);
    *(int *)((long)ppplVar3 + 0x24) = param_2[2];
    *(undefined8 *)((long)ppplVar3 + 0x1c) = *(undefined8 *)param_2;
    ppplVar3[1] = (long **)0x0;
    *ppplVar3 = (long **)0x0;
    ppplVar3[2] = (long **)ppplVar5;
    *pppplVar6 = ppplVar3;
    ppplVar5 = ppplVar3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      ppplVar5 = *pppplVar6;
    }
    FUN_1000e8bb0(param_1[1],ppplVar5);
    param_1[2] = param_1[2] + 1;
    uVar4 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = ppplVar3;
  return auVar7;
}

