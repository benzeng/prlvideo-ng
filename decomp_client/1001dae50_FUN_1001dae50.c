
void FUN_1001dae50(long param_1,int param_2)

{
  int iVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Node *pNVar6;
  QArrayData *local_40;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_32;
  
  if (param_2 < 0) goto LAB_1001dafd9;
  pNVar6 = *(Node **)(param_1 + 0x20);
  if (1 < *(int *)(pNVar6 + 0x10) + 1U) {
    LOCK();
    pNVar2 = pNVar6 + 0x10;
    *(int *)pNVar2 = *(int *)pNVar2 + 1;
    local_36 = *(int *)pNVar2 != 0;
    UNLOCK();
  }
  pNVar2 = pNVar6;
  if ((((byte)pNVar6[0x28] & 1) == 0) && (1 < *(uint *)(pNVar6 + 0x10))) {
    pNVar2 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar6,FUN_1001e3b90,0x1e3b40,0x28);
    if (*(int *)(pNVar6 + 0x10) != -1) {
      if (*(int *)(pNVar6 + 0x10) != 0) {
        LOCK();
        pNVar3 = pNVar6 + 0x10;
        *(int *)pNVar3 = *(int *)pNVar3 + -1;
        local_35 = *(int *)pNVar3 != 0;
        UNLOCK();
        if ((bool)local_35) goto LAB_1001daee7;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
    }
  }
LAB_1001daee7:
  iVar1 = *(int *)(pNVar2 + 0x20);
  if (iVar1 != 0) {
    puVar5 = *(undefined8 **)(pNVar2 + 8);
    do {
      if ((Node *)*puVar5 != pNVar2) {
        pNVar6 = (Node *)*puVar5;
        goto LAB_1001daf30;
      }
      iVar1 = iVar1 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar1 != 0);
  }
  goto LAB_1001dafab;
LAB_1001daf30:
  do {
    pNVar3 = (Node *)QHashData::nextNode(pNVar6);
    QString::normalized(&local_40,pNVar6 + 0x10,1,0);
    uVar4 = FUN_100152280();
    FUN_1001554a0(uVar4);
    FUN_1001db070();
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_34 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_34) goto LAB_1001dafa3;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1001dafa3:
    pNVar6 = pNVar3;
  } while (pNVar3 != pNVar2);
LAB_1001dafab:
  if (*(int *)(pNVar2 + 0x10) != -1) {
    if (*(int *)(pNVar2 + 0x10) != 0) {
      LOCK();
      pNVar6 = pNVar2 + 0x10;
      *(int *)pNVar6 = *(int *)pNVar6 + -1;
      local_32 = *(int *)pNVar6 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1001dafd9;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar2);
  }
LAB_1001dafd9:
  FUN_1001e2f00(param_1 + 0x20);
  return;
}

