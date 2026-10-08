
int FUN_1009907d0(long param_1)

{
  int iVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  
  pQVar2 = operator_new(0x60);
  FUN_100990e80(pQVar2,param_1);
  iVar1 = FUN_1009910b0(pQVar2);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Failed to initialize Transporter Wizard logic, 0x%x",iVar1);
    (**(code **)(*(long *)pQVar2 + 0x20))(pQVar2);
  }
  else {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    piVar4 = *(int **)(param_1 + 0x48);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar4 = *(int **)(param_1 + 0x48);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if ((*piVar4 == 0) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x48));
        }
      }
      *(int **)(param_1 + 0x48) = piVar3;
      *(QObject **)(param_1 + 0x50) = pQVar2;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        operator_delete(piVar3);
      }
    }
    pQVar2 = operator_new(0x20);
    FUN_100998070(pQVar2,param_1);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    piVar4 = *(int **)(param_1 + 0x58);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar4 = *(int **)(param_1 + 0x58);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if ((*piVar4 == 0) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x58));
        }
      }
      *(int **)(param_1 + 0x58) = piVar3;
      *(QObject **)(param_1 + 0x60) = pQVar2;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        operator_delete(piVar3);
      }
    }
    iVar1 = 0;
    FUN_100990980(param_1);
  }
  return iVar1;
}

