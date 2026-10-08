
void FUN_1000b8350(QObject *param_1)

{
  QMapNodeBase *pQVar1;
  int *piVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f8d30;
  FUN_1000eeed0(param_1 + 0xb8);
  pQVar3 = *(QArrayData **)(param_1 + 0xa8);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b83ad;
      pQVar3 = *(QArrayData **)(param_1 + 0xa8);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b83ad:
  pQVar3 = *(QArrayData **)(param_1 + 0xa0);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b83e3;
      pQVar3 = *(QArrayData **)(param_1 + 0xa0);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b83e3:
  pQVar3 = *(QArrayData **)(param_1 + 0x90);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b8419;
      pQVar3 = *(QArrayData **)(param_1 + 0x90);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b8419:
  QMutex::~QMutex((QMutex *)(param_1 + 0x88));
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x78);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000b846d;
      pQVar1 = *(QMapNodeBase **)(param_1 + 0x78);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_1000beca0();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1000b846d:
  piVar2 = *(int **)(param_1 + 0x70);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_1000b8496;
      piVar2 = *(int **)(param_1 + 0x70);
    }
    FUN_1000bec10(param_1 + 0x70,piVar2);
  }
LAB_1000b8496:
  FUN_1000b70d0(param_1 + 0x68);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_1000b84c8;
      piVar2 = *(int **)(param_1 + 0x60);
    }
    FUN_1000beb10(param_1 + 0x60,piVar2);
  }
LAB_1000b84c8:
  FUN_1000bd610(param_1 + 0x58);
  pQVar3 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b8501;
      pQVar3 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b8501:
  pQVar3 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b8531;
      pQVar3 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b8531:
  pQVar3 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b8561;
      pQVar3 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b8561:
  pQVar3 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b8591;
      pQVar3 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b8591:
  pQVar3 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b85c1;
      pQVar3 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b85c1:
  pQVar3 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b85f1;
      pQVar3 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b85f1:
  pQVar3 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1000b8621;
      pQVar3 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000b8621:
  QObject::~QObject(param_1);
  return;
}

