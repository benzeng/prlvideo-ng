
void FUN_1007458b0(QObject *param_1)

{
  long *plVar1;
  int *piVar2;
  QMapNodeBase *pQVar3;
  QArrayData *pQVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f6220;
  if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
     (plVar1 = *(long **)(param_1 + 0x78), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x78))(plVar1,0x80000275);
  }
  piVar2 = *(int **)(param_1 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x88) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x88));
    }
  }
  piVar2 = *(int **)(param_1 + 0x70);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x70));
    }
  }
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x68);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100745985;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x68);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_100283b30();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100745985:
  FUN_10012ac30(param_1 + 0x28);
  pQVar4 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1007459be;
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1007459be:
  QObject::~QObject(param_1);
  return;
}

