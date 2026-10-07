
void FUN_1000fcbb0(QObject *param_1,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  long lVar1;
  code *pcVar2;
  CProblemReport *this;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  QArrayData *local_40;
  undefined1 local_36;
  undefined1 local_35;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100baa690;
  lVar1 = *param_2;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  this = operator_new(600);
  CProblemReport::CProblemReport(this);
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    (**(code **)(*(long *)this + 0x20))(this);
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = this;
    *puVar3 = &PTR_FUN_10110cf20;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_100ba2188;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_100ba20d8;
  QMutex::QMutex((QMutex *)(param_1 + 0x30),1);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Start Vm Collecting");
  }
  uVar4 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  }
  CProblemReport::setReportType(uVar4,param_4);
  plVar5 = (long *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
  }
  pcVar2 = *(code **)(*plVar5 + 0x1a0);
  local_40 = (QArrayData *)*param_3;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_36 = *(int *)local_40 != 0;
    UNLOCK();
  }
  (*pcVar2)(plVar5,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_35 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_35) goto LAB_1000fcd32;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000fcd32:
  FUN_1000fceb0(param_1);
  return;
}

