
void FUN_1004638b0(undefined8 *param_1)

{
  Node *pNVar1;
  code *pcVar2;
  int iVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 *puVar6;
  _func_void_Node_ptr *p_Var7;
  QArrayData *local_40;
  
  *param_1 = &PTR____cxa_pure_virtual_100bc0f40;
  if (*(int *)(param_1[1] + 0x14) != 0) {
    FUN_1008e3970("","BattWatcher",0,"Some battery parameters can\'t be retrieved");
    pNVar5 = (Node *)param_1[1];
    if (1 < *(int *)(pNVar5 + 0x10) + 1U) {
      LOCK();
      *(int *)(pNVar5 + 0x10) = *(int *)(pNVar5 + 0x10) + 1;
      UNLOCK();
    }
    pNVar4 = pNVar5;
    if ((((byte)pNVar5[0x28] & 1) == 0) && (1 < *(uint *)(pNVar5 + 0x10))) {
      pNVar4 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100022e20,0x22550,0x18)
      ;
      if (*(int *)(pNVar5 + 0x10) != -1) {
        if (*(int *)(pNVar5 + 0x10) != 0) {
          LOCK();
          pNVar1 = pNVar5 + 0x10;
          *(int *)pNVar1 = *(int *)pNVar1 + -1;
          UNLOCK();
          if (*(int *)pNVar1 != 0) goto LAB_10046397e;
        }
        QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
      }
    }
LAB_10046397e:
    iVar3 = *(int *)(pNVar4 + 0x20);
    pNVar5 = pNVar4;
    if (iVar3 != 0) {
      puVar6 = *(undefined8 **)(pNVar4 + 8);
      do {
        pNVar5 = (Node *)*puVar6;
        if ((Node *)*puVar6 != pNVar4) break;
        iVar3 = iVar3 + -1;
        puVar6 = puVar6 + 1;
        pNVar5 = pNVar4;
      } while (iVar3 != 0);
    }
joined_r0x0001004639a8:
    do {
      if (pNVar5 == pNVar4) goto LAB_100463a31;
      pNVar5 = (Node *)QHashData::nextNode(pNVar5);
      QString::toUtf8();
      FUN_1008e3970("","BattWatcher",0,"Errorneous: %s",local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) goto joined_r0x0001004639a8;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    } while( true );
  }
  goto LAB_100463a5f;
LAB_100463a31:
  if (*(int *)(pNVar4 + 0x10) != -1) {
    if (*(int *)(pNVar4 + 0x10) != 0) {
      LOCK();
      pNVar5 = pNVar4 + 0x10;
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      UNLOCK();
      if (*(int *)pNVar5 != 0) goto LAB_100463a5f;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar4);
  }
LAB_100463a5f:
  p_Var7 = (_func_void_Node_ptr *)param_1[1];
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var7 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) {
        return;
      }
      p_Var7 = (_func_void_Node_ptr *)param_1[1];
    }
    QHashData::free_helper(p_Var7);
  }
  return;
}

