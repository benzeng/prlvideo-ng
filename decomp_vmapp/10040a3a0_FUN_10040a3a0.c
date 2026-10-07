
void FUN_10040a3a0(long param_1,char param_2)

{
  Node *pNVar1;
  char cVar2;
  int iVar3;
  Node *pNVar4;
  Node *pNVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 local_3c;
  int local_38;
  undefined1 local_31;
  
  QMutex::lock();
  cVar2 = FUN_10040bb30(param_1,param_2,&local_38,&local_3c);
  if (cVar2 == '\0') goto LAB_10040a66e;
  plVar6 = (long *)(param_1 + 0x38);
  if (param_2 != '\0') {
    plVar6 = (long *)(param_1 + 0x30);
  }
  if ((*plVar6 == 0) || (iVar3 = FUN_10040d680(), iVar3 == local_38)) goto LAB_10040a66e;
  QMutex::lock();
  if (param_2 == '\0') {
    pNVar5 = *(Node **)(param_1 + 0x80);
    if (1 < *(int *)(pNVar5 + 0x10) + 1U) {
      LOCK();
      pNVar4 = pNVar5 + 0x10;
      *(int *)pNVar4 = *(int *)pNVar4 + 1;
      local_31 = *(int *)pNVar4 != 0;
      UNLOCK();
    }
    pNVar4 = pNVar5;
    if ((((byte)pNVar5[0x28] & 1) == 0) && (1 < *(uint *)(pNVar5 + 0x10))) {
      pNVar4 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_10040c150,0x40bfb0,0x18
                                 );
      if (*(int *)(pNVar5 + 0x10) != -1) {
        if (*(int *)(pNVar5 + 0x10) != 0) {
          LOCK();
          pNVar1 = pNVar5 + 0x10;
          *(int *)pNVar1 = *(int *)pNVar1 + -1;
          local_31 = *(int *)pNVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10040a5cf;
        }
        QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
      }
    }
LAB_10040a5cf:
    iVar3 = *(int *)(pNVar4 + 0x20);
    pNVar5 = pNVar4;
    if (iVar3 != 0) {
      puVar7 = *(undefined8 **)(pNVar4 + 8);
      do {
        pNVar5 = (Node *)*puVar7;
        if ((Node *)*puVar7 != pNVar4) break;
        iVar3 = iVar3 + -1;
        puVar7 = puVar7 + 1;
        pNVar5 = pNVar4;
      } while (iVar3 != 0);
    }
    for (; pNVar5 != pNVar4; pNVar5 = (Node *)QHashData::nextNode(pNVar5)) {
      (**(code **)**(undefined8 **)(pNVar5 + 0x10))
                (local_3c,*(undefined8 **)(pNVar5 + 0x10),0,local_38);
    }
    if (*(int *)(pNVar4 + 0x10) != -1) {
      if (*(int *)(pNVar4 + 0x10) != 0) {
        LOCK();
        pNVar5 = pNVar4 + 0x10;
        *(int *)pNVar5 = *(int *)pNVar5 + -1;
        local_31 = *(int *)pNVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10040a662;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar4);
    }
  }
  else {
    pNVar5 = *(Node **)(param_1 + 0x78);
    if (1 < *(int *)(pNVar5 + 0x10) + 1U) {
      LOCK();
      pNVar4 = pNVar5 + 0x10;
      *(int *)pNVar4 = *(int *)pNVar4 + 1;
      local_31 = *(int *)pNVar4 != 0;
      UNLOCK();
    }
    pNVar4 = pNVar5;
    if ((((byte)pNVar5[0x28] & 1) == 0) && (1 < *(uint *)(pNVar5 + 0x10))) {
      pNVar4 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_10040c150,0x40bfb0,0x18
                                 );
      if (*(int *)(pNVar5 + 0x10) != -1) {
        if (*(int *)(pNVar5 + 0x10) != 0) {
          LOCK();
          pNVar1 = pNVar5 + 0x10;
          *(int *)pNVar1 = *(int *)pNVar1 + -1;
          local_31 = *(int *)pNVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10040a4a6;
        }
        QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
      }
    }
LAB_10040a4a6:
    iVar3 = *(int *)(pNVar4 + 0x20);
    pNVar5 = pNVar4;
    if (iVar3 != 0) {
      puVar7 = *(undefined8 **)(pNVar4 + 8);
      do {
        pNVar5 = (Node *)*puVar7;
        if ((Node *)*puVar7 != pNVar4) break;
        iVar3 = iVar3 + -1;
        puVar7 = puVar7 + 1;
        pNVar5 = pNVar4;
      } while (iVar3 != 0);
    }
    for (; pNVar5 != pNVar4; pNVar5 = (Node *)QHashData::nextNode(pNVar5)) {
      (**(code **)**(undefined8 **)(pNVar5 + 0x10))
                (local_3c,*(undefined8 **)(pNVar5 + 0x10),1,local_38);
    }
    if (*(int *)(pNVar4 + 0x10) != -1) {
      if (*(int *)(pNVar4 + 0x10) != 0) {
        LOCK();
        pNVar5 = pNVar4 + 0x10;
        *(int *)pNVar5 = *(int *)pNVar5 + -1;
        local_31 = *(int *)pNVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10040a662;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar4);
    }
  }
LAB_10040a662:
  QMutex::unlock();
LAB_10040a66e:
  QMutex::unlock();
  return;
}

