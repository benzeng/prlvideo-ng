
void FUN_100051970(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  QArrayData *pQVar3;
  
  *param_1 = &PTR_FUN_100ba84c8;
  FUN_100040d30(param_1[0xb]);
  QMutex::lock();
  puVar1 = param_1 + 0xf;
  FUN_1000587e0(puVar1);
  QMutex::unlock();
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  piVar2 = (int *)*puVar1;
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_1000519ed;
      piVar2 = (int *)*puVar1;
    }
    FUN_100059b00(puVar1,piVar2);
  }
LAB_1000519ed:
  pQVar3 = (QArrayData *)param_1[0xe];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100051a1d;
      pQVar3 = (QArrayData *)param_1[0xe];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100051a1d:
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 8))();
  }
  FUN_100013180(param_1 + 10);
  pQVar3 = (QArrayData *)param_1[8];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100051a68;
      pQVar3 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100051a68:
  QMutex::~QMutex((QMutex *)(param_1 + 5));
  FUN_1004c0680(param_1);
  return;
}

