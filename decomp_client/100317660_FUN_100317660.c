
void FUN_100317660(QObject *param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  QMapNodeBase *pQVar4;
  QArrayData *pQVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_10220b860;
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x20))();
  }
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
  }
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x20))();
  }
  if (*(long **)(param_1 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
  }
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x20))();
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
  }
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x20))();
  }
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
  }
  if (*(long **)(param_1 + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x120) + 0x20))();
  }
  if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x20))();
  }
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x20))();
  }
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x20))();
  }
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x20))();
  }
  if (*(long **)(param_1 + 200) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 200) + 0x20))();
  }
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x20))();
  }
  if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))();
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
  }
  if (*(long **)(param_1 + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x20))();
  }
  if (*(long **)(param_1 + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x100) + 0x20))();
  }
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
  }
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x20))();
  }
  if (*(long **)(param_1 + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x130) + 0x20))();
  }
  if (*(long **)(param_1 + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
  }
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 0x20))();
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar1 + 0x10) != 0) {
    lVar3 = *(long *)(lVar1 + 0x20);
    while (lVar3 != lVar1 + 8) {
      if (((*(long *)(lVar3 + 0x20) != 0) && (*(int *)(*(long *)(lVar3 + 0x20) + 4) != 0)) &&
         (*(long **)(lVar3 + 0x28) != (long *)0x0)) {
        (**(code **)(**(long **)(lVar3 + 0x28) + 0x20))();
      }
      lVar3 = QMapNodeBase::nextNode();
    }
  }
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 0x178));
  piVar2 = *(int **)(param_1 + 0x168);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x168) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x168));
    }
  }
  piVar2 = *(int **)(param_1 + 0x150);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x150) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x150));
    }
  }
  FUN_100039a80(param_1 + 0x118);
  pQVar4 = *(QMapNodeBase **)(param_1 + 0x48);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1003179e2;
      pQVar4 = *(QMapNodeBase **)(param_1 + 0x48);
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_1003179e2:
  pQVar4 = *(QMapNodeBase **)(param_1 + 0x38);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100317a21;
      pQVar4 = *(QMapNodeBase **)(param_1 + 0x38);
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar4,(int)*(long *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_100317a21:
  pQVar5 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_100317a51;
      pQVar5 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100317a51:
  if (*(long *)(param_1 + 0x20) != 0) {
    _PrlHandle_Free();
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}

