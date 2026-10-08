
void FUN_100674390(CAbstractWizardPageFlow *param_1)

{
  void *pvVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  
  pvVar1 = operator_new(0x10);
  FUN_100689010(pvVar1,param_1);
  *(void **)(param_1 + 0x20) = pvVar1;
  pQVar2 = operator_new(0x30);
  FUN_1000281d0(pQVar2,param_1,param_1);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x28);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if ((*piVar4 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar3;
    *(QObject **)(param_1 + 0x30) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      operator_delete(piVar3);
    }
  }
  pvVar1 = operator_new(0x28);
  FUN_100683000(pvVar1,param_1,0);
  CAbstractWizardModel::setPageFlow(param_1);
  pvVar1 = operator_new(0x10);
  FUN_100688d40(pvVar1,0);
  CAbstractWizardModel::setPageFactory((CAbstractWizardPageFactory *)param_1);
  pvVar1 = operator_new(0x20);
  FUN_100683520(pvVar1,param_1,0);
  CAbstractWizardModel::setActionStateProvider((CAbstractWizardActionStateProvider *)param_1);
  pvVar1 = operator_new(0x18);
  FUN_100688ab0(pvVar1,0);
  CAbstractWizardModel::setActionHandler((CAbstractWizardActionHandler *)param_1);
  QTimer::setInterval((int)*(undefined8 *)(param_1 + 0x180));
  *(byte *)(*(long *)(param_1 + 0x180) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x180) + 0x1c) | 1;
  FUN_100674bf0(param_1);
  return;
}

