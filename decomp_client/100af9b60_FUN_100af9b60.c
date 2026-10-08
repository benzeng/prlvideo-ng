
undefined1  [16] FUN_100af9b60(long *param_1,QString *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  long ****pppplVar2;
  char cVar3;
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
LAB_100af9be2:
    local_40 = (long ***)pppplVar6;
  }
  else {
    do {
      while( true ) {
        pppplVar8 = pppplVar2;
        cVar3 = operator<(param_2,(QString *)(pppplVar8 + 4));
        if (cVar3 == '\0') break;
        pppplVar2 = (long ****)*pppplVar8;
        pppplVar6 = pppplVar8;
        if ((long ****)*pppplVar8 == (long ****)0x0) goto LAB_100af9be2;
      }
      cVar3 = operator<((QString *)(pppplVar8 + 4),param_2);
      if (cVar3 == '\0') {
        local_40 = (long ***)pppplVar8;
        pppplVar6 = &local_40;
        goto LAB_100af9bf3;
      }
      pppplVar2 = (long ****)pppplVar8[1];
    } while ((long ****)pppplVar8[1] != (long ****)0x0);
    pppplVar6 = pppplVar8 + 1;
    local_40 = (long ***)pppplVar8;
  }
LAB_100af9bf3:
  ppplVar7 = local_40;
  ppplVar4 = *pppplVar6;
  if (ppplVar4 == (long ***)0x0) {
    ppplVar4 = operator_new(0x30);
    pQVar1 = param_2->field0_0x0;
    ppplVar4[4] = (long **)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
      local_31 = *(int *)pQVar1 != 0;
    }
    *(undefined1 *)(ppplVar4 + 5) = *(undefined1 *)&param_2[1].field0_0x0;
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

