
void FUN_100074470(long param_1,long param_2)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  Node *pNVar6;
  undefined8 *puVar7;
  Node *pNVar8;
  CVmEventParameter *pCVar9;
  Node *pNVar10;
  long *plVar11;
  long *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  CVmEvent local_248 [8];
  undefined1 local_240 [216];
  QEvent local_168 [32];
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [8];
  undefined1 local_130 [216];
  QEvent local_58 [39];
  undefined1 local_31;
  
  if (*(int *)(param_2 + 0x14) != *(int *)(param_1 + 0x370)) {
    return;
  }
  QMutex::lock();
  pNVar8 = *(Node **)(param_1 + 0x368);
  if (1 < *(int *)(pNVar8 + 0x10) + 1U) {
    LOCK();
    pNVar6 = pNVar8 + 0x10;
    *(int *)pNVar6 = *(int *)pNVar6 + 1;
    local_31 = *(int *)pNVar6 != 0;
    UNLOCK();
  }
  pNVar6 = pNVar8;
  if ((((byte)pNVar8[0x28] & 1) == 0) && (1 < *(uint *)(pNVar8 + 0x10))) {
    pNVar6 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar8,FUN_100022e20,0x22550,0x18);
    if (*(int *)(pNVar8 + 0x10) != -1) {
      if (*(int *)(pNVar8 + 0x10) != 0) {
        LOCK();
        pNVar10 = pNVar8 + 0x10;
        *(int *)pNVar10 = *(int *)pNVar10 + -1;
        local_31 = *(int *)pNVar10 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100074531;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar8);
    }
  }
LAB_100074531:
  QMutex::unlock();
  puVar7 = (undefined8 *)FUN_1000b1620(*(undefined8 *)(param_1 + 0x20));
  local_140 = (QArrayData *)*puVar7;
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_138,0x186e7,&local_140,0,100000,0,&local_148,0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000745e9;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1000745e9:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007461f;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10007461f:
  if (1 < *(int *)(pNVar6 + 0x10) + 1U) {
    LOCK();
    pNVar8 = pNVar6 + 0x10;
    *(int *)pNVar8 = *(int *)pNVar8 + 1;
    local_31 = *(int *)pNVar8 != 0;
    UNLOCK();
  }
  pNVar8 = pNVar6;
  if ((((byte)pNVar6[0x28] & 1) == 0) && (1 < *(uint *)(pNVar6 + 0x10))) {
    pNVar8 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar6,FUN_100022e20,0x22550,0x18);
    if (*(int *)(pNVar6 + 0x10) != -1) {
      if (*(int *)(pNVar6 + 0x10) != 0) {
        LOCK();
        pNVar10 = pNVar6 + 0x10;
        *(int *)pNVar10 = *(int *)pNVar10 + -1;
        local_31 = *(int *)pNVar10 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007469e;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
    }
  }
LAB_10007469e:
  iVar5 = *(int *)(pNVar8 + 0x20);
  pNVar10 = pNVar8;
  if (iVar5 != 0) {
    plVar11 = *(long **)(pNVar8 + 8);
    do {
      pNVar10 = (Node *)*plVar11;
      if ((Node *)*plVar11 != pNVar8) break;
      iVar5 = iVar5 + -1;
      plVar11 = plVar11 + 1;
      pNVar10 = pNVar8;
    } while (iVar5 != 0);
  }
  if (pNVar10 != pNVar8) {
    do {
      pQVar1 = *(QArrayData **)(pNVar10 + 0x10);
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      CVmEvent::CVmEvent(local_248);
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      local_250 = pQVar1;
      cVar4 = FUN_1000736d0(param_1,&local_250,1);
      if (*(int *)local_250 != -1) {
        if (*(int *)local_250 != 0) {
          LOCK();
          *(int *)local_250 = *(int *)local_250 + -1;
          local_31 = *(int *)local_250 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100074790;
        }
        QArrayData::deallocate(local_250,2,8);
      }
LAB_100074790:
      if (cVar4 != '\0') {
        pCVar9 = operator_new(0xd0);
        CBaseNode::toString(SUB81(&local_258,0),SUB81(local_240,0));
        local_260 = (QArrayData *)QString::fromAscii_helper("conn_stats_connection_info",0x1a);
        CVmEventParameter::CVmEventParameter(pCVar9,1,&local_258);
        CVmEvent::addEventParameter((CVmEventParameter *)local_138);
        if (*(int *)local_260 != -1) {
          if (*(int *)local_260 != 0) {
            LOCK();
            *(int *)local_260 = *(int *)local_260 + -1;
            local_31 = *(int *)local_260 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10007483c;
          }
          QArrayData::deallocate(local_260,2,8);
        }
LAB_10007483c:
        if (*(int *)local_258 != -1) {
          if (*(int *)local_258 != 0) {
            LOCK();
            *(int *)local_258 = *(int *)local_258 + -1;
            local_31 = *(int *)local_258 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100074880;
          }
          QArrayData::deallocate(local_258,2,8);
        }
      }
LAB_100074880:
      QEvent::~QEvent(local_168);
      CVmEventBase::~CVmEventBase((CVmEventBase *)local_248);
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_31 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000748c3;
        }
        QArrayData::deallocate(pQVar1,2,8);
      }
LAB_1000748c3:
      pNVar10 = (Node *)QHashData::nextNode(pNVar10);
    } while (pNVar10 != pNVar8);
  }
  if (*(int *)(pNVar8 + 0x10) != -1) {
    if (*(int *)(pNVar8 + 0x10) != 0) {
      LOCK();
      pNVar10 = pNVar8 + 0x10;
      *(int *)pNVar10 = *(int *)pNVar10 + -1;
      local_31 = *(int *)pNVar10 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100074916;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar8);
  }
LAB_100074916:
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  CBaseNode::toString(SUB81(&local_268,0),SUB81(local_130,0));
  plVar11 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_270 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_100bef0d0;
    local_270 = plVar11;
  }
  FUN_100063e20(uVar2,&local_268,0xbbb,&local_270,0);
  if (local_270 != (long *)0x0) {
    LOCK();
    plVar11 = local_270 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_270 + 0x10))();
    }
  }
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000749eb;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1000749eb:
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  if (*(int *)(pNVar6 + 0x10) != -1) {
    if (*(int *)(pNVar6 + 0x10) != 0) {
      LOCK();
      pNVar8 = pNVar6 + 0x10;
      *(int *)pNVar8 = *(int *)pNVar8 + -1;
      local_31 = *(int *)pNVar8 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
  }
  return;
}

