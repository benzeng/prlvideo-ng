
void FUN_1004a3a20(QObject *param_1)

{
  QMapNodeBase *pQVar1;
  int *piVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc2530;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bc25b8;
  DAT_100bf928d = DAT_100bf928d | 1;
  pQVar3 = *(QArrayData **)(param_1 + 0xa0);
  DAT_100bf9274 = param_1;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1004a3a98;
      pQVar3 = *(QArrayData **)(param_1 + 0xa0);
    }
    QArrayData::deallocate(pQVar3,1,8);
  }
LAB_1004a3a98:
  QMutex::~QMutex((QMutex *)(param_1 + 0x98));
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x90);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1004a3af5;
      pQVar1 = *(QMapNodeBase **)(param_1 + 0x90);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_1004a8480();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1004a3af5:
  QMutex::~QMutex((QMutex *)(param_1 + 0x88));
  QMutex::~QMutex((QMutex *)(param_1 + 0x60));
  piVar2 = *(int **)(param_1 + 0x58);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_1004a3b37;
      piVar2 = *(int **)(param_1 + 0x58);
    }
    FUN_1004a83c0(param_1 + 0x58,piVar2);
  }
LAB_1004a3b37:
  QMutex::~QMutex((QMutex *)(param_1 + 0x40));
  FUN_1004c0680(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

