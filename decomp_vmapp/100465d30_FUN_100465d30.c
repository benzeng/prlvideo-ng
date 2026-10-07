
void FUN_100465d30(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 *puVar7;
  _func_void_Node_ptr *p_Var8;
  
  *param_1 = &PTR_FUN_100bc12a0;
  QMutex::lock();
  plVar1 = param_1 + 1;
  pNVar5 = (Node *)param_1[1];
  if (*(uint *)(pNVar5 + 0x10) < 2) goto LAB_100465dc4;
  pNVar5 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100466e50,0x466e40,0x18);
  p_Var8 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var8 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_100465dc0;
      p_Var8 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_100465dc0:
  *plVar1 = (long)pNVar5;
LAB_100465dc4:
  iVar4 = *(int *)(pNVar5 + 0x20);
  pNVar6 = pNVar5;
  if (iVar4 != 0) {
    puVar7 = *(undefined8 **)(pNVar5 + 8);
    do {
      pNVar6 = (Node *)*puVar7;
      if ((Node *)*puVar7 != pNVar5) break;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + 1;
      pNVar6 = pNVar5;
    } while (iVar4 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar5 + 0x10)) {
      pNVar5 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100466e50,0x466e40,0x18
                                 );
      p_Var8 = (_func_void_Node_ptr *)*plVar1;
      if (*(int *)(p_Var8 + 0x10) != -1) {
        if (*(int *)(p_Var8 + 0x10) != 0) {
          LOCK();
          pcVar2 = p_Var8 + 0x10;
          *(int *)pcVar2 = *(int *)pcVar2 + -1;
          UNLOCK();
          if (*(int *)pcVar2 != 0) goto LAB_100465e4e;
          p_Var8 = (_func_void_Node_ptr *)*plVar1;
        }
        QHashData::free_helper(p_Var8);
      }
LAB_100465e4e:
      *plVar1 = (long)pNVar5;
    }
    if (pNVar5 == pNVar6) {
      FUN_100466a40(plVar1);
      QMutex::unlock();
      QMutex::~QMutex((QMutex *)(param_1 + 2));
      p_Var8 = (_func_void_Node_ptr *)*plVar1;
      if (*(int *)(p_Var8 + 0x10) != -1) {
        if (*(int *)(p_Var8 + 0x10) != 0) {
          LOCK();
          pcVar2 = p_Var8 + 0x10;
          *(int *)pcVar2 = *(int *)pcVar2 + -1;
          UNLOCK();
          if (*(int *)pcVar2 != 0) {
            return;
          }
          p_Var8 = (_func_void_Node_ptr *)*plVar1;
        }
        QHashData::free_helper(p_Var8);
      }
      return;
    }
    pvVar3 = *(void **)(pNVar6 + 0x10);
    if (pvVar3 != (void *)0x0) {
      FUN_100465a40(pvVar3);
      operator_delete(pvVar3);
    }
    pNVar6 = (Node *)QHashData::nextNode(pNVar6);
    pNVar5 = (Node *)*plVar1;
  } while( true );
}

