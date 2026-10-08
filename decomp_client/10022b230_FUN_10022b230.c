
void FUN_10022b230(QObject *param_1,int param_2)

{
  QObject *pQVar1;
  int *piVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  QArrayData *local_48;
  long local_40;
  QString local_38;
  long local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) &&
     (*(QObject **)(param_1 + 0x70) != (QObject *)0x0)) {
    QObject::disconnect(*(QObject **)(param_1 + 0x70),"2startFinished( bool )",param_1,
                        "1terminate()");
  }
  if (((*(long *)(param_1 + 0x90) == 0) || (*(int *)(*(long *)(param_1 + 0x90) + 4) == 0)) ||
     (*(long *)(param_1 + 0x98) == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0xb0);
LAB_10022b410:
                    /* WARNING: Could not recover jumptable at 0x00010022b41a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return;
  }
  if (param_2 < 0) {
    if (param_2 == -0x7fffff6e) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0xb0);
      param_2 = -0x7fffff6e;
    }
    else {
      CAbstractTask::clearSubTaskList();
      CAbstractTask::prependSubTask((int)param_1);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0xb0);
      param_2 = 0;
    }
    goto LAB_10022b410;
  }
  pQVar1 = param_1 + 0x90;
  CSdkRequest::getResultParam((uint)&local_30);
  piVar2 = *(int **)pQVar1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (*(void **)pQVar1 != (void *)0x0)) {
      operator_delete(*(void **)pQVar1);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)pQVar1 = 0;
  }
  if (local_30 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t extract VM info handle.");
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,0x80000009);
    goto LAB_10022b4a2;
  }
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server instance is invalid.");
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,0x80000009);
    goto LAB_10022b4a2;
  }
  local_40 = local_30;
  _PrlHandle_AddRef();
  FUN_10018d4b0(&local_38,&local_40);
  QString::operator=((QString *)(param_1 + 0x60),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10022b36b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10022b36b:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar3 = FUN_10015cb20(uVar4,param_1 + 0x60);
  if (lVar3 == 0) goto LAB_10022b4a2;
  FUN_10018d830(&local_48,lVar3);
  FUN_100812f60(param_1,0,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10022b3eb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10022b3eb:
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
LAB_10022b4a2:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return;
}

