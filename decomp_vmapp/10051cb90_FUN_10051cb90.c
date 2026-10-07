
undefined8 FUN_10051cb90(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  Node *pNVar5;
  Node *pNVar6;
  long *plVar7;
  _func_void_Node_ptr *p_Var8;
  QArrayData *local_48;
  undefined1 local_39;
  long local_38;
  
  QMutex::lock();
  plVar2 = param_1 + 0x14;
  pNVar5 = (Node *)param_1[0x14];
  if (1 < *(uint *)(pNVar5 + 0x10)) {
    pNVar5 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_10051e270,0x51e010,0x18);
    p_Var8 = (_func_void_Node_ptr *)*plVar2;
    if (*(int *)(p_Var8 + 0x10) != -1) {
      if (*(int *)(p_Var8 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_39 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_10051cc33;
        p_Var8 = (_func_void_Node_ptr *)*plVar2;
      }
      QHashData::free_helper(p_Var8);
    }
LAB_10051cc33:
    *plVar2 = (long)pNVar5;
  }
  iVar4 = *(int *)(pNVar5 + 0x20);
  pNVar6 = pNVar5;
  if (iVar4 != 0) {
    plVar7 = *(long **)(pNVar5 + 8);
    do {
      pNVar6 = (Node *)*plVar7;
      if ((Node *)*plVar7 != pNVar5) break;
      iVar4 = iVar4 + -1;
      plVar7 = plVar7 + 1;
      pNVar6 = pNVar5;
    } while (iVar4 != 0);
  }
  if (*(uint *)(pNVar5 + 0x10) < 2) goto LAB_10051ccd0;
  pNVar5 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_10051e270,0x51e010,0x18);
  p_Var8 = (_func_void_Node_ptr *)*plVar2;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_39 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_10051ccc5;
      p_Var8 = (_func_void_Node_ptr *)*plVar2;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_10051ccc5:
  *plVar2 = (long)pNVar5;
LAB_10051ccd0:
  while( true ) {
    if (pNVar6 == pNVar5) {
      QMutex::unlock();
      lVar3 = param_1[0xf];
      if (lVar3 != 0) {
        local_38 = param_2;
        _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x10));
        iVar4 = FUN_100046530(lVar3 + 8,&local_38);
        _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
        if (iVar4 != 0) {
          return 0xf0000000;
        }
      }
      return 0xffffffff;
    }
    if (*(long *)(pNVar6 + 0x10) == param_2) break;
    pNVar6 = (Node *)QHashData::nextNode(pNVar6);
  }
  FUN_10051dda0(plVar2,pNVar6);
  QMutex::unlock();
  (**(code **)(*param_1 + 0x40))(&local_48,param_1,*(undefined4 *)(param_2 + 8));
  if (*(int *)(local_48 + 4) != 0) {
    FUN_10051c510(param_1,&local_48);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0xf0000000;
      }
      local_39 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return 0xf0000000;
  }
  return 0xf0000000;
}

