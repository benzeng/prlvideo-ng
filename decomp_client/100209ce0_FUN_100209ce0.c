
void FUN_100209ce0(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  void *pvVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  undefined1 local_19;
  
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server instance is invalid.");
    return;
  }
  if (((*(long *)(param_1 + 0x140) != 0) && (*(int *)(*(long *)(param_1 + 0x140) + 4) != 0)) &&
     (*(long *)(param_1 + 0x148) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x140);
    CSdkRequest::cancel();
    piVar2 = (int *)*puVar1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_1a = *piVar2 != 0;
      UNLOCK();
      if ((!(bool)local_1a) && ((void *)*puVar1 != (void *)0x0)) {
        operator_delete((void *)*puVar1);
      }
      *(undefined8 *)(param_1 + 0x148) = 0;
      *puVar1 = 0;
    }
  }
  lVar3 = FUN_100209ac0(param_1);
  if (lVar3 == 0) {
    return;
  }
  pvVar4 = operator_new(0x50);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_100240130(pvVar4,&local_28,0,1,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100209de4;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100209de4:
  CAbstractTask::execute();
  return;
}

