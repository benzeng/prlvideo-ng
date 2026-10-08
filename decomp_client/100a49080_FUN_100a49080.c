
undefined1 FUN_100a49080(undefined8 param_1,undefined8 param_2,undefined8 ***param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined1 uVar4;
  undefined8 ****ppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ****local_58;
  undefined8 ****local_50;
  long local_48;
  undefined8 ****local_40;
  undefined8 ****local_38;
  
  ppppuVar5 = operator_new(0x18);
  *(undefined4 *)(ppppuVar5 + 1) = 1;
  *ppppuVar5 = (undefined8 ***)&PTR_FUN_102281270;
  ppppuVar5[2] = param_3;
  pppppuVar10 = &local_50;
  local_48 = 0;
  local_50 = (undefined8 ****)0x0;
  local_58 = pppppuVar10;
  pppppuVar6 = operator_new(0x30);
  *(undefined4 *)(pppppuVar6 + 4) = 0x14;
  pppppuVar6[5] = (undefined8 ****)0x0;
  pppppuVar6[1] = (undefined8 ****)0x0;
  *pppppuVar6 = (undefined8 ****)0x0;
  pppppuVar6[2] = pppppuVar10;
  if ((undefined8 *****)*local_58 != (undefined8 *****)0x0) {
    local_58 = (undefined8 ****)*local_58;
  }
  local_50 = pppppuVar6;
  FUN_1001879a0(pppppuVar6,pppppuVar6);
  local_48 = local_48 + 1;
  LOCK();
  *(int *)(ppppuVar5 + 1) = *(int *)(ppppuVar5 + 1) + 1;
  UNLOCK();
  ppppuVar3 = pppppuVar6[5];
  pppppuVar6[5] = ppppuVar5;
  if (ppppuVar3 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar1 = ppppuVar3 + 1;
    iVar2 = *(int *)ppppuVar1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)(*ppppuVar3)[2])();
    }
  }
  pppppuVar6 = (undefined8 *****)local_50;
  pppppuVar9 = pppppuVar10;
  pppppuVar8 = pppppuVar10;
  if ((undefined8 *****)local_50 != (undefined8 *****)0x0) {
    do {
      while (pppppuVar7 = pppppuVar6, pppppuVar8 = pppppuVar7, 0x18 < *(uint *)(pppppuVar7 + 4)) {
        pppppuVar6 = (undefined8 *****)*pppppuVar7;
        pppppuVar9 = pppppuVar7;
        if ((undefined8 *****)*pppppuVar7 == (undefined8 *****)0x0) goto LAB_100a491d1;
      }
      if (0x17 < *(uint *)(pppppuVar7 + 4)) {
        local_40 = pppppuVar7;
        if (pppppuVar7 != (undefined8 *****)0x0) goto LAB_100a49228;
        pppppuVar9 = &local_40;
        goto LAB_100a491d1;
      }
      pppppuVar6 = (undefined8 *****)pppppuVar7[1];
    } while ((undefined8 *****)pppppuVar7[1] != (undefined8 *****)0x0);
    pppppuVar9 = pppppuVar7 + 1;
  }
LAB_100a491d1:
  local_40 = pppppuVar8;
  pppppuVar7 = operator_new(0x30);
  *(undefined4 *)(pppppuVar7 + 4) = 0x18;
  pppppuVar7[5] = (undefined8 ****)0x0;
  pppppuVar7[1] = (undefined8 ****)0x0;
  *pppppuVar7 = (undefined8 ****)0x0;
  pppppuVar7[2] = pppppuVar8;
  *pppppuVar9 = pppppuVar7;
  pppppuVar6 = pppppuVar7;
  if ((undefined8 *****)*local_58 != (undefined8 *****)0x0) {
    pppppuVar6 = (undefined8 *****)*pppppuVar9;
    local_58 = (undefined8 ****)*local_58;
  }
  FUN_1001879a0(local_50,pppppuVar6);
  local_48 = local_48 + 1;
LAB_100a49228:
  LOCK();
  *(int *)(ppppuVar5 + 1) = *(int *)(ppppuVar5 + 1) + 1;
  UNLOCK();
  ppppuVar3 = pppppuVar7[5];
  pppppuVar7[5] = ppppuVar5;
  if (ppppuVar3 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar1 = ppppuVar3 + 1;
    iVar2 = *(int *)ppppuVar1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)(*ppppuVar3)[2])();
    }
  }
  pppppuVar6 = (undefined8 *****)local_50;
  pppppuVar9 = pppppuVar10;
  if ((undefined8 *****)local_50 != (undefined8 *****)0x0) {
    do {
      while (pppppuVar8 = pppppuVar6, pppppuVar9 = pppppuVar8, 0x19 < *(uint *)(pppppuVar8 + 4)) {
        pppppuVar6 = (undefined8 *****)*pppppuVar8;
        pppppuVar10 = pppppuVar8;
        if ((undefined8 *****)*pppppuVar8 == (undefined8 *****)0x0) goto LAB_100a492c1;
      }
      if (0x18 < *(uint *)(pppppuVar8 + 4)) {
        local_38 = pppppuVar8;
        if (pppppuVar8 != (undefined8 *****)0x0) goto LAB_100a49316;
        pppppuVar10 = &local_38;
        goto LAB_100a492c1;
      }
      pppppuVar6 = (undefined8 *****)pppppuVar8[1];
    } while ((undefined8 *****)pppppuVar8[1] != (undefined8 *****)0x0);
    pppppuVar10 = pppppuVar8 + 1;
  }
LAB_100a492c1:
  local_38 = pppppuVar9;
  pppppuVar8 = operator_new(0x30);
  *(undefined4 *)(pppppuVar8 + 4) = 0x19;
  pppppuVar8[5] = (undefined8 ****)0x0;
  pppppuVar8[1] = (undefined8 ****)0x0;
  *pppppuVar8 = (undefined8 ****)0x0;
  pppppuVar8[2] = pppppuVar9;
  *pppppuVar10 = pppppuVar8;
  pppppuVar6 = pppppuVar8;
  if ((undefined8 *****)*local_58 != (undefined8 *****)0x0) {
    pppppuVar6 = (undefined8 *****)*pppppuVar10;
    local_58 = (undefined8 ****)*local_58;
  }
  FUN_1001879a0(local_50,pppppuVar6);
  local_48 = local_48 + 1;
LAB_100a49316:
  LOCK();
  *(int *)(ppppuVar5 + 1) = *(int *)(ppppuVar5 + 1) + 1;
  UNLOCK();
  ppppuVar3 = pppppuVar8[5];
  pppppuVar8[5] = ppppuVar5;
  if (ppppuVar3 != (undefined8 ****)0x0) {
    LOCK();
    ppppuVar1 = ppppuVar3 + 1;
    iVar2 = *(int *)ppppuVar1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)(*ppppuVar3)[2])();
    }
  }
  uVar4 = FUN_100a47ef0(param_1,param_2,&local_58);
  FUN_100a36e50(&local_58,local_50);
  LOCK();
  ppppuVar3 = ppppuVar5 + 1;
  iVar2 = *(int *)ppppuVar3;
  *(int *)ppppuVar3 = *(int *)ppppuVar3 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (*(code *)(*ppppuVar5)[2])(ppppuVar5);
  }
  return uVar4;
}

