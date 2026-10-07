
bool FUN_1002ec9c0(long *param_1)

{
  code *pcVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  _func_void_Node_ptr *p_Var6;
  long *plVar7;
  
  plVar7 = param_1 + 5;
  QMutex::lock();
  pNVar3 = (Node *)param_1[4];
  if (*(uint *)(pNVar3 + 0x10) < 2) goto LAB_1002eca44;
  pNVar3 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_1002eebb0,0x2eeba0,0x28);
  p_Var6 = (_func_void_Node_ptr *)param_1[4];
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002eca40;
      p_Var6 = (_func_void_Node_ptr *)param_1[4];
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1002eca40:
  param_1[4] = (long)pNVar3;
LAB_1002eca44:
  iVar2 = *(int *)(pNVar3 + 0x20);
  pNVar4 = pNVar3;
  if (iVar2 != 0) {
    puVar5 = *(undefined8 **)(pNVar3 + 8);
    do {
      pNVar4 = (Node *)*puVar5;
      if ((Node *)*puVar5 != pNVar3) break;
      iVar2 = iVar2 + -1;
      puVar5 = puVar5 + 1;
      pNVar4 = pNVar3;
    } while (iVar2 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar3 + 0x10)) {
      pNVar3 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_1002eebb0,0x2eeba0,0x28
                                 );
      p_Var6 = (_func_void_Node_ptr *)param_1[4];
      if (*(int *)(p_Var6 + 0x10) != -1) {
        if (*(int *)(p_Var6 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var6 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_1002ecadf;
          p_Var6 = (_func_void_Node_ptr *)param_1[4];
        }
        QHashData::free_helper(p_Var6);
      }
LAB_1002ecadf:
      param_1[4] = (long)pNVar3;
    }
    if (pNVar4 == pNVar3) {
      iVar2 = FUN_100252e60(*param_1 + 0x40,param_1[1],param_1);
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      QMutex::unlock();
      return iVar2 == 0;
    }
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,
                    "[C-FRAME] Close channel (addr:%02x-%02x-%02x-%02x-%02x-%02x, psm:%04x, scid:%04x, dcid:%04x, host_dev:%p, host_chn:%p)"
                    ,*(undefined1 *)((long)param_1 + 0x15),*(undefined1 *)((long)param_1 + 0x14),
                    *(undefined1 *)((long)param_1 + 0x13),*(undefined1 *)((long)param_1 + 0x12),
                    *(undefined1 *)((long)param_1 + 0x11),(char)param_1[2],
                    *(undefined2 *)(pNVar4 + 0x14),*(undefined2 *)(pNVar4 + 0x10),
                    *(undefined2 *)(pNVar4 + 0x12),param_1[1],*(undefined8 *)(pNVar4 + 0x18),plVar7)
      ;
    }
    FUN_100253100(*param_1 + 0x40,*(undefined8 *)(pNVar4 + 0x18));
    pNVar4 = (Node *)QHashData::nextNode(pNVar4);
    pNVar3 = (Node *)param_1[4];
  } while( true );
}

