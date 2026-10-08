
void FUN_100855c60(QObject *param_1)

{
  int *piVar1;
  QMapNodeBase *pQVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_102227360;
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x90) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x90));
    }
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x88);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855cd8;
      pQVar3 = *(QArrayData **)(param_1 + 0x88);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855cd8:
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x78);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100855d20;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x78);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100855d20:
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x70);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100855d68;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x70);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100855d68:
  pQVar3 = *(QArrayData **)(param_1 + 0x60);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855d98;
      pQVar3 = *(QArrayData **)(param_1 + 0x60);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855d98:
  pQVar3 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855dc8;
      pQVar3 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855dc8:
  pQVar3 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855df8;
      pQVar3 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855df8:
  pQVar3 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855e28;
      pQVar3 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855e28:
  pQVar3 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855e58;
      pQVar3 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855e58:
  pQVar3 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855e88;
      pQVar3 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855e88:
  pQVar3 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855eb8;
      pQVar3 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855eb8:
  pQVar3 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855ee8;
      pQVar3 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855ee8:
  pQVar3 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855f18;
      pQVar3 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855f18:
  pQVar3 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100855f48;
      pQVar3 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100855f48:
  QObject::~QObject(param_1);
  return;
}

