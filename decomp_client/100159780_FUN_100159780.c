
void FUN_100159780(CSdkCommunicator *param_1)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  int *piVar3;
  QArrayData *pQVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fcef0;
  FUN_100df99c0("","prl_client_app",0," Destructing server object %p... ",param_1);
  CSdkCommunicator::stopCommunication();
  while (*(int *)(*(long *)(param_1 + 200) + 0xc) != *(int *)(*(long *)(param_1 + 200) + 8)) {
    FUN_10015ba20(param_1,0);
  }
  if (*(long **)(param_1 + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x120) + 0x88))();
  }
  if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x88))();
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x88))();
  }
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x88))();
  }
  if (((*(long *)(param_1 + 0xa8) != 0) && (*(int *)(*(long *)(param_1 + 0xa8) + 4) != 0)) &&
     (*(long **)(param_1 + 0xb0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x20))();
  }
  plVar1 = *(long **)(param_1 + 0xb8);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      _PrlHandle_Free();
    }
    operator_delete(plVar1);
  }
  if (*(long **)(param_1 + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x130) + 0x20))();
  }
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x128);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1001598fe;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x128);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1001598fe:
  piVar3 = *(int **)(param_1 + 0x108);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x108) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x108));
    }
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    _PrlHandle_Free();
  }
  piVar3 = *(int **)(param_1 + 200);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 != 0) goto LAB_100159969;
      piVar3 = *(int **)(param_1 + 200);
    }
    FUN_100179430(param_1 + 200,piVar3);
  }
LAB_100159969:
  if (*(long *)(param_1 + 0xc0) != 0) {
    _PrlHandle_Free();
  }
  piVar3 = *(int **)(param_1 + 0xa8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0xa8) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0xa8));
    }
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    _PrlHandle_Free();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    _PrlHandle_Free();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    _PrlHandle_Free();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    _PrlHandle_Free();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    _PrlHandle_Free();
  }
  pQVar4 = *(QArrayData **)(param_1 + 0x78);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159a2a;
      pQVar4 = *(QArrayData **)(param_1 + 0x78);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159a2a:
  pQVar4 = *(QArrayData **)(param_1 + 0x70);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159a5a;
      pQVar4 = *(QArrayData **)(param_1 + 0x70);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159a5a:
  pQVar4 = *(QArrayData **)(param_1 + 0x68);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159a8a;
      pQVar4 = *(QArrayData **)(param_1 + 0x68);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159a8a:
  pQVar4 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159aba;
      pQVar4 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159aba:
  pQVar4 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159aea;
      pQVar4 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159aea:
  pQVar4 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159b1a;
      pQVar4 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159b1a:
  pQVar4 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159b4a;
      pQVar4 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159b4a:
  pQVar4 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159b7a;
      pQVar4 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159b7a:
  pQVar4 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159baa;
      pQVar4 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159baa:
  pQVar4 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100159bda;
      pQVar4 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100159bda:
  CSdkCommunicator::~CSdkCommunicator(param_1);
  return;
}

