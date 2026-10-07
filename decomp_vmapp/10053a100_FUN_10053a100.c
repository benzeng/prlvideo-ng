
void FUN_10053a100(QThread *param_1)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bc5208;
  FUN_10053a340(param_1,1);
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_100bc5280;
  if (*(int *)(param_1 + 0x68) != -1) {
    iVar1 = _shutdown(*(int *)(param_1 + 0x68),2);
    if (iVar1 == 0) {
LAB_10053a14d:
      _close(*(int *)(param_1 + 0x68));
    }
    else {
      piVar2 = ___error();
      if (*piVar2 != 9) goto LAB_10053a14d;
    }
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10053a18c;
      pQVar3 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10053a18c:
  pQVar3 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10053a1bc;
      pQVar3 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10053a1bc:
  pQVar3 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10053a1ec;
      pQVar3 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10053a1ec:
  QMutex::~QMutex((QMutex *)(param_1 + 0x40));
  FUN_100539a60(param_1 + 0x28);
  QThread::~QThread(param_1);
  return;
}

