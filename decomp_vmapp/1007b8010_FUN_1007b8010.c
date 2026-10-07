
void FUN_1007b8010(QThread *param_1,long param_2,undefined4 param_3,QThread param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  long *local_88;
  long *local_80;
  long *local_78;
  __sigaction_u local_70;
  undefined4 local_68;
  undefined4 local_64;
  QArrayData *local_60;
  QString local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_100bcf430;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcf4d0;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_100bcf538;
  puVar2 = PTR_shared_null_100ba20d0;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_100ba20d0;
  *(long *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x48) = puVar2;
  QMutex::QMutex((QMutex *)(param_1 + 0x50),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x58),0);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar4 = FUN_1007c63d0();
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  FUN_1007c6350(param_1 + 0x80,uVar4);
  puVar2 = PTR_shared_null_100ba2180;
  auVar9._8_4_ = (int)PTR_shared_null_100ba2180;
  auVar9._0_8_ = PTR_shared_null_100ba2180;
  auVar9._12_4_ = (int)((ulong)PTR_shared_null_100ba2180 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x88) = auVar9;
  puVar3 = PTR_shared_null_100ba2188;
  *(undefined **)(param_1 + 0x98) = PTR_shared_null_100ba2188;
  *(undefined **)(param_1 + 0xa0) = puVar2;
  FUN_1007b7670(param_1 + 0xa8,param_5);
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 200));
  *(undefined **)(param_1 + 0xd0) = puVar3;
  *(undefined **)(param_1 + 0xd8) = puVar2;
  param_1[0xe0] = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  local_60 = (QArrayData *)
             QString::fromAscii_helper("IO server ctx [accept thr] (sender %1): ",0x28);
  QString::arg(&local_58,&local_60,(long)*(int *)(param_2 + 0x30),0,10,0x20);
  QString::operator=((QString *)(param_1 + 0x20),&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_49 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007b81ed;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007b81ed:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007b821d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007b821d:
  local_68 = 0;
  local_70 = (__sigaction_u)0x1;
  local_64 = 0;
  _sigaction(0xd,(sigaction *)&local_70,(sigaction *)0x0);
  *(undefined8 *)(param_1 + 0x74) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x6c) = 0xffffffffffffffff;
  if (*(int *)(param_1 + 0x30) == 2) {
    plVar5 = operator_new(0x3c8);
    lVar7 = *(long *)(param_1 + 0x28);
    local_78 = *(long **)(lVar7 + 0x28);
    if (local_78 != (long *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      lVar7 = *(long *)(param_1 + 0x28);
    }
    uVar4 = *(undefined4 *)(lVar7 + 0x40);
    local_80 = *(long **)(lVar7 + 0x48);
    if (local_80 != (long *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    FUN_1007d6870(local_48);
    local_88 = (long *)0x0;
    FUN_10079bf40(plVar5,&local_78,lVar7 + 0x50,8,1,lVar7 + 0x38,uVar4,&local_80,2,param_1 + 0x10,
                  param_1 + 0x18,0xffffffff,local_48,&local_88,param_5,0,1,1);
    plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    bVar8 = plVar6 == (long *)0x0;
    if (bVar8) {
      plVar6 = (long *)0x0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    else {
      *(undefined4 *)(plVar6 + 1) = 1;
      plVar6[2] = (long)plVar5;
      *plVar6 = (long)&PTR_FUN_1011a5de8;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar5 = *(long **)(param_1 + 0x38);
    *(long **)(param_1 + 0x38) = plVar6;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    if (!bVar8) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (local_88 != (long *)0x0) {
      LOCK();
      plVar5 = local_88 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (local_78 != (long *)0x0) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

