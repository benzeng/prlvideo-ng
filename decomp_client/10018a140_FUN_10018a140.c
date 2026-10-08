
void FUN_10018a140(CSdkCommunicator *param_1)

{
  CSdkCommunicator *pCVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  long lVar6;
  QMapNodeBase *pQVar7;
  Data *pDVar8;
  _func_void_Node_ptr *p_Var9;
  QArrayData *pQVar10;
  long lVar11;
  Data *pDVar12;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fd460;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  QString::toLocal8Bit();
  lVar11 = *(long *)(local_40 + 0x10);
  pQVar10 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)pQVar10 + 1U) {
    LOCK();
    *(int *)pQVar10 = *(int *)pQVar10 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Removing VM: this=%p vmUuid=%s, serverUuid=%s",param_1,
                local_40 + lVar11,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_10018a218;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10018a218:
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      UNLOCK();
      if (*(int *)pQVar10 != 0) goto LAB_10018a248;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_10018a248:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10018a278;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10018a278:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_10018a2a8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10018a2a8:
  CSdkCommunicator::stopCommunication();
  FUN_1001b8860(param_1);
  if (((*(long *)(param_1 + 200) != 0) && (*(int *)(*(long *)(param_1 + 200) + 4) != 0)) &&
     (*(long **)(param_1 + 0xd0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))();
  }
  lVar11 = *(long *)(param_1 + 0x78);
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar6 = *(long *)(lVar11 + 0x20);
    while (lVar6 != lVar11 + 8) {
      if (*(long **)(lVar6 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + 0x20) + 0x20))();
      }
      lVar6 = QMapNodeBase::nextNode();
    }
  }
  pCVar1 = param_1 + 0x78;
  FUN_100190930(pCVar1);
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x20))();
  }
  pvVar4 = *(void **)(param_1 + 0x90);
  if (pvVar4 != (void *)0x0) {
    FUN_1007c6590(pvVar4);
    operator_delete(pvVar4);
  }
  if (((*(long *)(param_1 + 0xb8) != 0) && (*(int *)(*(long *)(param_1 + 0xb8) + 4) != 0)) &&
     (*(long **)(param_1 + 0xc0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x20))();
  }
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
  }
  p_Var9 = *(_func_void_Node_ptr **)(param_1 + 0xf8);
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var9 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_10018a5a2;
      p_Var9 = *(_func_void_Node_ptr **)(param_1 + 0xf8);
    }
    QHashData::free_helper(p_Var9);
  }
LAB_10018a5a2:
  pQVar10 = *(QArrayData **)(param_1 + 0xe8);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      UNLOCK();
      if (*(int *)pQVar10 != 0) goto LAB_10018a5d8;
      pQVar10 = *(QArrayData **)(param_1 + 0xe8);
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_10018a5d8:
  piVar5 = *(int **)(param_1 + 200);
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if ((*piVar5 == 0) && (*(void **)(param_1 + 200) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 200));
    }
  }
  piVar5 = *(int **)(param_1 + 0xb8);
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if ((*piVar5 == 0) && (*(void **)(param_1 + 0xb8) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0xb8));
    }
  }
  piVar5 = *(int **)(param_1 + 0xa0);
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if ((*piVar5 == 0) && (*(void **)(param_1 + 0xa0) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0xa0));
    }
  }
  pQVar10 = *(QArrayData **)(param_1 + 0x88);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      UNLOCK();
      if (*(int *)pQVar10 != 0) goto LAB_10018a68f;
      pQVar10 = *(QArrayData **)(param_1 + 0x88);
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_10018a68f:
  pQVar7 = *(QMapNodeBase **)pCVar1;
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_10018a6cc;
      pQVar7 = *(QMapNodeBase **)pCVar1;
    }
    if (*(long *)(pQVar7 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar7,(int)*(long *)(pQVar7 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar7);
  }
LAB_10018a6cc:
  if (*(long *)(param_1 + 0x70) != 0) {
    _PrlHandle_Free();
  }
  pDVar12 = *(Data **)(param_1 + 0x50);
  if (*(int *)pDVar12 != -1) {
    if (*(int *)pDVar12 != 0) {
      LOCK();
      *(int *)pDVar12 = *(int *)pDVar12 + -1;
      UNLOCK();
      if (*(int *)pDVar12 != 0) goto LAB_10018a73f;
      pDVar12 = *(Data **)(param_1 + 0x50);
    }
    iVar3 = *(int *)(pDVar12 + 0xc);
    if (iVar3 != *(int *)(pDVar12 + 8)) {
      lVar11 = (long)*(int *)(pDVar12 + 8) * 8 + (long)iVar3 * -8;
      pDVar8 = pDVar12 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar12);
  }
LAB_10018a73f:
  if (*(long *)(param_1 + 0x40) != 0) {
    _PrlHandle_Free();
  }
  piVar5 = *(int **)(param_1 + 0x30);
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if ((*piVar5 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
  pQVar10 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      UNLOCK();
      if (*(int *)pQVar10 != 0) goto LAB_10018a7a2;
      pQVar10 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_10018a7a2:
  CSdkCommunicator::~CSdkCommunicator(param_1);
  return;
}

