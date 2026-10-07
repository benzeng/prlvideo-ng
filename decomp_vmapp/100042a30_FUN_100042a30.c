
void FUN_100042a30(QObject *param_1)

{
  code *pcVar1;
  Data *pDVar2;
  _func_void_Node_ptr *p_Var3;
  QArrayData *pQVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_100ba9cb0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100ba9d48;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_100ba9d90;
  FUN_100046350(&DAT_1011c35d0,0);
  FUN_100040d30(param_1 + 0x78);
  FUN_100042ce0(param_1);
  FUN_100519360(*(long *)(param_1 + 0x128) + 0x10f0,3);
  QMutex::~QMutex((QMutex *)(param_1 + 0x1a0));
  QMutex::~QMutex((QMutex *)(param_1 + 0x178));
  QMutex::~QMutex((QMutex *)(param_1 + 0x158));
  pDVar2 = *(Data **)(param_1 + 0x150);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_100042af7;
      pDVar2 = *(Data **)(param_1 + 0x150);
    }
    QListData::dispose(pDVar2);
  }
LAB_100042af7:
  QMutex::~QMutex((QMutex *)(param_1 + 0x148));
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x140);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100042b38;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x140);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_100042b38:
  pQVar4 = *(QArrayData **)(param_1 + 0x130);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100042b6e;
      pQVar4 = *(QArrayData **)(param_1 + 0x130);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100042b6e:
  FUN_1000411a0(param_1 + 0x78);
  FUN_1005192c0(param_1 + 0x38);
  FUN_1004c0680(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

