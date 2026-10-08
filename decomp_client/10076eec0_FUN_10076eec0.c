
void FUN_10076eec0(CAbstractWizardPageFlow *param_1)

{
  CAbstractProgressOperation *this;
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  long local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  this = operator_new(0x40);
  CAbstractProgressOperation::CAbstractProgressOperation(this,(QObject *)param_1);
  this->field0_0x0 = (undefined4 **)&PTR_metaObject_102274f60;
  piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_23 = *piVar1 != 0;
      UNLOCK();
      piVar2 = *(int **)(param_1 + 0x38);
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_22 = *piVar2 != 0;
      UNLOCK();
      if ((!(bool)local_22) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x38));
      }
    }
    *(int **)(param_1 + 0x38) = piVar1;
    *(CAbstractProgressOperation **)(param_1 + 0x40) = this;
  }
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar1);
    }
  }
  iVar4 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (iVar4 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x40);
  }
  CAbstractProgressOperation::setProgress(iVar4);
  pvVar3 = operator_new(0x20);
  FUN_100770cf0(pvVar3,param_1);
  CAbstractWizardModel::setPageFlow(param_1);
  pvVar3 = operator_new(0x10);
  FUN_100770db0(pvVar3,param_1);
  CAbstractWizardModel::setPageFactory((CAbstractWizardPageFactory *)param_1);
  pvVar3 = operator_new(0x18);
  FUN_100770ee0(pvVar3,param_1);
  CAbstractWizardModel::setActionStateProvider((CAbstractWizardActionStateProvider *)param_1);
  pvVar3 = operator_new(0x18);
  FUN_100771fe0(pvVar3,param_1);
  CAbstractWizardModel::setActionHandler((CAbstractWizardActionHandler *)param_1);
  QObject::connect(&local_30,param_1,"2currentPageIdChanged(int,int)",param_1,
                   "1onCurrentPageIdChanged(int)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  return;
}

