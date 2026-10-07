
undefined1 (*) [16] FUN_1004e8990(undefined1 (*param_1) [16],undefined8 param_2,undefined4 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 *puVar2;
  QArrayData *pQVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  long local_88;
  long *local_80;
  long local_78;
  long local_70;
  long *local_68;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar5 = PTR_shared_null_100ba20d0;
  auVar8._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar8._0_8_ = PTR_shared_null_100ba20d0;
  auVar8._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *param_1 = auVar8;
  *(undefined **)param_1[1] = puVar5;
  *(undefined **)(param_1[1] + 8) = puVar5;
  pauVar1 = param_1 + 3;
  *(undefined1 (**) [16])param_1[3] = pauVar1;
  *(undefined1 (**) [16])(param_1[3] + 8) = pauVar1;
  *(undefined8 *)param_1[4] = 0;
  puVar2 = param_1[4] + 8;
  *(undefined1 **)(param_1[4] + 8) = puVar2;
  *(undefined1 **)param_1[5] = puVar2;
  *(undefined8 *)(param_1[5] + 8) = 0;
  FUN_1004e7940(&local_40);
  pQVar3 = *(QArrayData **)*param_1;
  *(QArrayData **)*param_1 = local_40;
  local_40 = pQVar3;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e8a32;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1004e8a32:
  FUN_1004e7940(&local_48,param_2);
  pQVar3 = *(QArrayData **)(*param_1 + 8);
  *(QArrayData **)(*param_1 + 8) = local_48;
  local_48 = pQVar3;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e8a7a;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1004e8a7a:
  FUN_1004e7940(&local_50,param_2);
  pQVar3 = *(QArrayData **)param_1[1];
  *(QArrayData **)param_1[1] = local_50;
  local_50 = pQVar3;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e8ac2;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1004e8ac2:
  uVar7 = FUN_1004e7cb0(param_2);
  *(undefined4 *)(param_1[2] + 4) = uVar7;
  uVar6 = FUN_1004e7df0(param_2);
  param_1[2][0] = uVar6;
  uVar6 = FUN_1004e7df0(param_2);
  param_1[2][8] = uVar6;
  uVar6 = FUN_1004e7df0(param_2);
  param_1[2][9] = uVar6;
  uVar7 = FUN_1004e7cb0(param_2);
  *(undefined4 *)(param_1[2] + 0xc) = uVar7;
  FUN_1004e7a90(&local_58,param_2);
  pQVar3 = *(QArrayData **)(param_1[1] + 8);
  *(QArrayData **)(param_1[1] + 8) = local_58;
  local_58 = pQVar3;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e8b41;
    }
    QArrayData::deallocate(pQVar3,1,8);
  }
LAB_1004e8b41:
  FUN_1004e86b0(&local_70,param_2,param_3);
  FUN_1004eb9a0(pauVar1);
  if (local_60 != 0) {
    lVar4 = *local_68;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(local_70 + 8);
    **(long **)(local_70 + 8) = lVar4;
    lVar4 = *(long *)param_1[3];
    *(long **)(lVar4 + 8) = local_68;
    *local_68 = lVar4;
    *(long *)param_1[3] = local_70;
    *(undefined1 (**) [16])(local_70 + 8) = pauVar1;
    *(long *)param_1[4] = *(long *)param_1[4] + local_60;
    local_60 = 0;
  }
  FUN_1004eb9a0(&local_70);
  FUN_1004e8880(&local_88,param_2);
  FUN_1004eba70(puVar2);
  if (local_78 != 0) {
    lVar4 = *local_80;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(local_88 + 8);
    **(long **)(local_88 + 8) = lVar4;
    lVar4 = *(long *)(param_1[4] + 8);
    *(long **)(lVar4 + 8) = local_80;
    *local_80 = lVar4;
    *(long *)(param_1[4] + 8) = local_88;
    *(undefined1 **)(local_88 + 8) = puVar2;
    *(long *)(param_1[5] + 8) = *(long *)(param_1[5] + 8) + local_78;
  }
  return param_1;
}

