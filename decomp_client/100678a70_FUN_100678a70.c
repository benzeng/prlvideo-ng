
void FUN_100678a70(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) {
    CContentModel::setBusy(SUB81(param_1,0));
    uVar2 = FUN_1006268d0();
    *(undefined4 *)(param_1 + 0x17c) = uVar2;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x60);
    }
    uVar3 = FUN_10016f500(uVar3);
    FUN_10068bd30(uVar1,uVar3);
    pQVar4 = (QObject *)QMetaObject::cast((QObject *)&PTR_PTR_1022065b0);
    piVar5 = (int *)0x0;
    if (pQVar4 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    }
    piVar6 = *(int **)(param_1 + 0x68);
    if (piVar6 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
        piVar6 = *(int **)(param_1 + 0x68);
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if ((*piVar6 == 0) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x68));
        }
      }
      *(int **)(param_1 + 0x68) = piVar5;
      *(QObject **)(param_1 + 0x70) = pQVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        operator_delete(piVar5);
      }
    }
  }
  return;
}

