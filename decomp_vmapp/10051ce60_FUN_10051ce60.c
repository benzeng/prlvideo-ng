
void FUN_10051ce60(long *param_1,int param_2)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  Node *pNVar4;
  Node *pNVar5;
  long *plVar6;
  _func_void_Node_ptr *p_Var7;
  long local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  if (param_2 == 4) {
    FUN_100519b50(&local_40,param_1 + 5);
    *(bool *)(param_1 + 0x10) = *(int *)(local_40 + 0xc) == *(int *)(local_40 + 8);
    FUN_100037320(&local_40);
    if ((char)param_1[0x10] != '\0') {
      return;
    }
    (**(code **)(*param_1 + 0x78))(param_1);
    return;
  }
  if (param_2 != 3) {
    return;
  }
  QMutex::lock();
  plVar2 = param_1 + 0x14;
  pNVar4 = (Node *)param_1[0x14];
  if (1 < *(uint *)(pNVar4 + 0x10)) {
    pNVar4 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_10051e270,0x51e010,0x18);
    p_Var7 = (_func_void_Node_ptr *)*plVar2;
    if (*(int *)(p_Var7 + 0x10) != -1) {
      if (*(int *)(p_Var7 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var7 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_32 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_10051cf50;
        p_Var7 = (_func_void_Node_ptr *)*plVar2;
      }
      QHashData::free_helper(p_Var7);
    }
LAB_10051cf50:
    *plVar2 = (long)pNVar4;
  }
  iVar3 = *(int *)(pNVar4 + 0x20);
  pNVar5 = pNVar4;
  if (iVar3 != 0) {
    plVar6 = *(long **)(pNVar4 + 8);
    do {
      pNVar5 = (Node *)*plVar6;
      if ((Node *)*plVar6 != pNVar4) break;
      iVar3 = iVar3 + -1;
      plVar6 = plVar6 + 1;
      pNVar5 = pNVar4;
    } while (iVar3 != 0);
  }
  if (*(uint *)(pNVar4 + 0x10) < 2) goto LAB_10051cff0;
  pNVar4 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_10051e270,0x51e010,0x18);
  p_Var7 = (_func_void_Node_ptr *)*plVar2;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10051cfe4;
      p_Var7 = (_func_void_Node_ptr *)*plVar2;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_10051cfe4:
  *plVar2 = (long)pNVar4;
LAB_10051cff0:
  for (; pNVar5 != pNVar4; pNVar5 = (Node *)QHashData::nextNode(pNVar5)) {
    FUN_1004c07d0(param_1,*(undefined8 *)(pNVar5 + 0x10),0xf0000020);
  }
  FUN_10051def0(plVar2);
  QMutex::unlock();
  if (param_1[0xf] != 0) {
    (**(code **)(*param_1 + 0x60))(param_1);
    FUN_1000412f0(param_1[0xf]);
  }
  return;
}

