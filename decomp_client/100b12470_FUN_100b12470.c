
undefined1  [16] FUN_100b12470(long *param_1,uint *param_2)

{
  long ***ppplVar1;
  uint uVar2;
  long ****pppplVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  uint *puVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long *****ppppplVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  long ****local_40;
  bool local_31;
  
  bVar10 = 0;
  if ((long *****)param_1[1] == (long *****)0x0) {
    local_40 = (long ****)(param_1 + 1);
LAB_100b124db:
    ppppplVar9 = (long *****)local_40;
  }
  else {
    ppppplVar9 = (long *****)param_1[1];
    do {
      while (local_40 = (long ****)ppppplVar9, *param_2 < *(uint *)(local_40 + 4)) {
        ppppplVar9 = (long *****)*local_40;
        if ((long *****)*local_40 == (long *****)0x0) goto LAB_100b124db;
      }
      if (*param_2 <= *(uint *)(local_40 + 4)) {
        ppppplVar9 = &local_40;
        goto LAB_100b124ec;
      }
      ppppplVar9 = (long *****)local_40[1];
    } while ((long *****)local_40[1] != (long *****)0x0);
    ppppplVar9 = (long *****)(local_40 + 1);
  }
LAB_100b124ec:
  pppplVar7 = local_40;
  pppplVar3 = *ppppplVar9;
  if (pppplVar3 == (long ****)0x0) {
    pppplVar3 = operator_new(0x80);
    uVar2 = *param_2;
    *(uint *)(pppplVar3 + 4) = uVar2;
    puVar6 = param_2 + 2;
    pppplVar8 = pppplVar3 + 5;
    for (lVar4 = 0x13; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(uint *)pppplVar8 = *puVar6;
      puVar6 = puVar6 + (ulong)bVar10 * -2 + 1;
      pppplVar8 = (long ****)((long)pppplVar8 + ((ulong)bVar10 * -2 + 1) * 4);
    }
    ppplVar1 = *(long ****)(param_2 + 0x16);
    pppplVar3[0xf] = ppplVar1;
    if (1 < *(int *)ppplVar1 + 1U) {
      LOCK();
      *(int *)ppplVar1 = *(int *)ppplVar1 + 1;
      UNLOCK();
      local_31 = *(int *)ppplVar1 != 0;
      uVar2 = *param_2;
    }
    *(uint *)(pppplVar3 + 4) = uVar2;
    pppplVar3[1] = (long ***)0x0;
    *pppplVar3 = (long ***)0x0;
    pppplVar3[2] = (long ***)pppplVar7;
    *ppppplVar9 = pppplVar3;
    pppplVar7 = pppplVar3;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      pppplVar7 = *ppppplVar9;
    }
    FUN_1001879a0(param_1[1],pppplVar7);
    param_1[2] = param_1[2] + 1;
    uVar5 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = pppplVar3;
  return auVar11;
}

