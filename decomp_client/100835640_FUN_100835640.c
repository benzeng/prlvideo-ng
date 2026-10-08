
void FUN_100835640(QGraphicsScene *param_1)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_10220f410;
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x58));
    }
  }
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x48));
    }
  }
  piVar2 = *(int **)(param_1 + 0x40);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_1008356ca;
      piVar2 = *(int **)(param_1 + 0x40);
    }
    FUN_100389550(param_1 + 0x40,piVar2);
  }
LAB_1008356ca:
  piVar2 = *(int **)(param_1 + 0x18);
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
  QGraphicsScene::~QGraphicsScene(param_1);
  return;
}

