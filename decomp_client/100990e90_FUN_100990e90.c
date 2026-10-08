
void FUN_100990e90(QObject *param_1)

{
  int *piVar1;
  int *piVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_102233dc0;
  pQVar3 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100990edb;
      pQVar3 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100990edb:
  QObject::~QObject(param_1 + 0x40);
  if (*(long *)(param_1 + 0x38) != 0) {
    _PrlHandle_Free();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (*DAT_102310a50)();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    (*DAT_102310a50)();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(piVar2 + 2))(piVar2);
    }
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(piVar2);
    }
  }
  QObject::~QObject(param_1);
  return;
}

