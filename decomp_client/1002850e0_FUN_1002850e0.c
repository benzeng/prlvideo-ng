
void FUN_1002850e0(CAbstractTask *param_1,QString *param_2,undefined4 param_3,bool param_4)

{
  undefined *puVar1;
  CTaskGenericId *pCVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  QArrayData *local_40;
  
  pCVar2 = operator_new(0x18);
  FUN_100286270(pCVar2,param_2,param_3);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  *(undefined ***)param_1 = &PTR_FUN_102206290;
  *(undefined4 *)(param_1 + 0x18) = 0xff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  auVar3._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar3._0_8_ = PTR_shared_null_1021e1288;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar3;
  auVar4._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar4._0_8_ = PTR_shared_null_1021e15e8;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar4;
  param_1[0x48] = (CAbstractTask)0x0;
  *(undefined **)(param_1 + 0x50) = puVar1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5c] = (CAbstractTask)0x0;
  param_1[0x60] = (CAbstractTask)0x0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x80) = puVar1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  QFutureWatcherBase::QFutureWatcherBase((QFutureWatcherBase *)(param_1 + 0x90),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x90) = &PTR_metaObject_1022720c8;
  QFutureInterfaceBase::QFutureInterfaceBase((QFutureInterfaceBase *)(param_1 + 0xa0));
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_102272168;
  QFutureInterfaceBase::refT();
  QFutureWatcherBase::QFutureWatcherBase((QFutureWatcherBase *)(param_1 + 0xb0),(QObject *)0x0);
  *(undefined ***)(param_1 + 0xb0) = &PTR_metaObject_102275390;
  QFutureInterfaceBase::QFutureInterfaceBase((QFutureInterfaceBase *)(param_1 + 0xc0),0xe);
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_1022721c8;
  QFutureInterfaceBase::refT();
  CHostHardwareInfo::CHostHardwareInfo((CHostHardwareInfo *)(param_1 + 0xd0));
  *(undefined **)(param_1 + 0x298) = PTR_shared_null_1021e15d0;
  CBaseNode::toString(true,param_4);
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)(param_1 + 0xd0),true,(QString *)0x0,(int *)0x0,
             (int *)0x0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1002852c7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002852c7:
  QString::operator=((QString *)(param_1 + 0x80),param_2);
  *(undefined4 *)(param_1 + 0x88) = param_3;
  return;
}

