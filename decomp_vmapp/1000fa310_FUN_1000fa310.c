
void FUN_1000fa310(QObject *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *local_40;
  undefined1 local_32;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100baa558;
  *(undefined4 *)(param_1 + 0x10) = 0;
  piVar2 = (int *)*param_2;
  *(int **)(param_1 + 0x18) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_32 = *piVar2 != 0;
    UNLOCK();
  }
  puVar5 = operator_new(4);
  *puVar5 = 0x14;
  puVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar6 == (undefined8 *)0x0) {
    operator_delete(puVar5);
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar6 + 1) = 1;
    puVar6[2] = puVar5;
    *puVar6 = &PTR_FUN_10110ceb0;
  }
  *(undefined8 **)(param_1 + 0x20) = puVar6;
  *(undefined8 *)(param_1 + 0x28) = 0;
  QThread::QThread((QThread *)(param_1 + 0x30),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_100baa4c0;
  *(QObject **)(param_1 + 0x40) = param_1;
  param_1[0x48] = (QObject)0x0;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x50));
  QMutex::QMutex((QMutex *)(param_1 + 0x58),0);
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x60));
  CDispatcherConfig::CDispatcherConfig((CDispatcherConfig *)(param_1 + 0x158));
  CParallelsNetworkConfig::CParallelsNetworkConfig((CParallelsNetworkConfig *)(param_1 + 0x210));
  FUN_100651ac0(param_1 + 0x2e8);
  uVar7 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  FUN_100796f30(&local_40,uVar7);
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  plVar3 = *(long **)(param_1 + 0x28);
  *(long **)(param_1 + 0x28) = local_40;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  FUN_1000fc550("const SmartPtr<IOPackage>",0,0);
  FUN_1000fc550("SmartPtr<IOPackage>",0,0);
  FUN_1000fc620("const IOSendJob::Handle",0,0);
  FUN_1000fc620("IOSendJob::Handle",0,0);
  FUN_1000fc6f0("IOSender::State",0,0);
  FUN_1000fc6f0("const IOSender::State",0,0);
  FUN_1000fc7c0("IOSender::Handle",0,0);
  FUN_1000fc7c0("const IOSender::Handle",0,0);
  FUN_1000fc8b0("const IOCommunication::DetachedClient",0,0);
  FUN_1000fc8b0("IOCommunication::DetachedClient",0,0);
  return;
}

