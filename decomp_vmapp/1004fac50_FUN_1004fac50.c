
undefined8 * FUN_1004fac50(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  QArrayData *local_38;
  undefined1 local_2d;
  undefined1 local_2a;
  
  plVar2 = operator_new(0x40);
  FUN_1004faeb0(&local_38);
  *(undefined2 *)(plVar2 + 1) = *(undefined2 *)(param_2 + 0x1a);
  *plVar2 = (long)&PTR_FUN_100bc3da8;
  QMutex::QMutex((QMutex *)(plVar2 + 2),0);
  puVar1 = PTR_shared_null_100ba2180;
  auVar5._8_4_ = (int)PTR_shared_null_100ba2180;
  auVar5._0_8_ = PTR_shared_null_100ba2180;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  *(undefined1 (*) [16])(plVar2 + 3) = auVar5;
  plVar2[5] = (long)puVar1;
  plVar2[6] = (long)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_2d = *(int *)local_38 != 0;
    UNLOCK();
  }
  lVar3 = QString::fromAscii_helper("Documents",9);
  plVar2[7] = lVar3;
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = plVar2;
    *puVar4 = &PTR_FUN_10111cca8;
  }
  *param_1 = puVar4;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

