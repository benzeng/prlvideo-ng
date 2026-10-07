
bool FUN_1000470c0(long param_1,undefined8 *param_2)

{
  Node *pNVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 *puVar7;
  Node *pNVar8;
  long *plVar9;
  int *piVar10;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  pNVar1 = *(Node **)(param_1 + 0x70);
  if (1 < *(int *)(pNVar1 + 0x10) + 1U) {
    LOCK();
    pNVar5 = pNVar1 + 0x10;
    *(int *)pNVar5 = *(int *)pNVar5 + 1;
    local_31 = *(int *)pNVar5 != 0;
    UNLOCK();
  }
  pNVar5 = pNVar1;
  if ((((byte)pNVar1[0x28] & 1) == 0) && (1 < *(uint *)(pNVar1 + 0x10))) {
    pNVar5 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar1,FUN_100022e20,0x22550,0x18);
    if (*(int *)(pNVar1 + 0x10) != -1) {
      if (*(int *)(pNVar1 + 0x10) != 0) {
        LOCK();
        pNVar6 = pNVar1 + 0x10;
        *(int *)pNVar6 = *(int *)pNVar6 + -1;
        local_31 = *(int *)pNVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004715c;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar1);
    }
  }
LAB_10004715c:
  QMutex::unlock();
  pNVar1 = pNVar5 + 0x10;
  if (1 < *(int *)(pNVar5 + 0x10) + 1U) {
    LOCK();
    *(int *)pNVar1 = *(int *)pNVar1 + 1;
    local_31 = *(int *)pNVar1 != 0;
    UNLOCK();
  }
  pNVar6 = pNVar5;
  if ((((byte)pNVar5[0x28] & 1) == 0) && (1 < *(uint *)(pNVar5 + 0x10))) {
    pNVar6 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100022e20,0x22550,0x18);
    if (*(int *)pNVar1 != -1) {
      if (*(int *)pNVar1 != 0) {
        LOCK();
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        local_31 = *(int *)pNVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000471db;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
    }
  }
LAB_1000471db:
  iVar3 = *(int *)(pNVar6 + 0x20);
  pNVar8 = pNVar6;
  if (iVar3 != 0) {
    plVar9 = *(long **)(pNVar6 + 8);
    do {
      pNVar8 = (Node *)*plVar9;
      if ((Node *)*plVar9 != pNVar6) break;
      iVar3 = iVar3 + -1;
      plVar9 = plVar9 + 1;
      pNVar8 = pNVar6;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (pNVar8 != pNVar6) {
    iVar3 = 0;
    do {
      local_40 = *(QArrayData **)(pNVar8 + 0x10);
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      puVar7 = operator_new(8);
      piVar10 = (int *)*param_2;
      *puVar7 = piVar10;
      if (1 < *piVar10 + 1U) {
        LOCK();
        *piVar10 = *piVar10 + 1;
        local_31 = *piVar10 != 0;
        UNLOCK();
        piVar10 = (int *)*puVar7;
      }
      uVar4 = FUN_100519800(param_1 + 0x28,&local_40,*(long *)(piVar10 + 4) + (long)piVar10,
                            piVar10[1],FUN_100047500,puVar7);
      cVar2 = FUN_100519210(uVar4);
      if (cVar2 == '\0') {
        QString::toUtf8();
        FUN_1008e3970("FSCRMON","vm",0,
                      "Error: failed to send request to client with uuid=\"%s\", code=%d",
                      local_48 + *(long *)(local_48 + 0x10),uVar4);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100047320;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
LAB_100047320:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100047350;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100047350:
      pNVar8 = (Node *)QHashData::nextNode(pNVar8);
    } while (pNVar8 != pNVar6);
  }
  if (*(int *)(pNVar6 + 0x10) != -1) {
    if (*(int *)(pNVar6 + 0x10) != 0) {
      LOCK();
      pNVar8 = pNVar6 + 0x10;
      *(int *)pNVar8 = *(int *)pNVar8 + -1;
      local_31 = *(int *)pNVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100047398;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
  }
LAB_100047398:
  if (*(int *)pNVar1 != -1) {
    if (*(int *)pNVar1 != 0) {
      LOCK();
      *(int *)pNVar1 = *(int *)pNVar1 + -1;
      local_31 = *(int *)pNVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000473c2;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
  }
LAB_1000473c2:
  return 0 < iVar3;
}

