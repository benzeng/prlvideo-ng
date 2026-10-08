
undefined1 FUN_1000c5a50(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined1 auVar9 [16];
  long *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  lVar3 = DAT_1023108a8;
  if (DAT_1023108a8 == 0) {
    QMutex::unlock();
    return 0;
  }
  DAT_1023108b0 = DAT_1023108b0 + 1;
  QMutex::unlock();
  puVar6 = operator_new(0x58);
  *puVar6 = &PTR_FUN_1021ed400;
  puVar4 = PTR_shared_null_1021e1288;
  auVar9._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar9._0_8_ = PTR_shared_null_1021e1288;
  auVar9._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(puVar6 + 1) = auVar9;
  *(undefined1 (*) [16])(puVar6 + 3) = auVar9;
  *(undefined1 (*) [16])(puVar6 + 5) = auVar9;
  puVar6[7] = puVar4;
  puVar6[8] = 0;
  plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
    (*(code *)PTR_FUN_1021ed408)(puVar6);
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    plVar7[2] = (long)puVar6;
    *plVar7 = (long)&PTR_FUN_10226ce10;
  }
  local_40 = (QArrayData *)*param_1;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  cVar5 = FUN_100055da0(puVar6,&local_40,param_2,param_3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c5b91;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000c5b91:
  if (cVar5 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    if (plVar7 != (long *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_48 = plVar7;
    FUN_1000eef10(uVar2,&local_48);
    uVar8 = 1;
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  FUN_100055290(&DAT_102310898);
  return uVar8;
}

