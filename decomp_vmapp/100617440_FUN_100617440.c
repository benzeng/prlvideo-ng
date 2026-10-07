
int FUN_100617440(void)

{
  Node *pNVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Node *pNVar6;
  undefined8 uVar7;
  Node *pNVar8;
  long *plVar9;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  iVar4 = FUN_100615920(1);
  pNVar8 = DAT_1011cca50;
  if (iVar4 < 0) {
    uVar7 = FUN_1007dd120(iVar4);
    FUN_1008e3970("","prlplg",0,"ReloadDynPlugins(): UnloadAllPlugins failed by err %s",uVar7);
    goto LAB_1006176dc;
  }
  if (1 < *(int *)(DAT_1011cca50 + 0x10) + 1U) {
    LOCK();
    pNVar6 = DAT_1011cca50 + 0x10;
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
        pNVar1 = pNVar8 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        local_31 = *(int *)pNVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006174f3;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar8);
    }
  }
LAB_1006174f3:
  iVar4 = *(int *)(pNVar6 + 0x20);
  pNVar8 = pNVar6;
  if (iVar4 != 0) {
    plVar9 = *(long **)(pNVar6 + 8);
    do {
      pNVar8 = (Node *)*plVar9;
      if ((Node *)*plVar9 != pNVar6) break;
      iVar4 = iVar4 + -1;
      plVar9 = plVar9 + 1;
      pNVar8 = pNVar6;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  if (pNVar8 != pNVar6) {
    iVar4 = 0;
    do {
      local_40 = *(QArrayData **)(pNVar8 + 0x10);
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      bVar3 = true;
LAB_100617570:
      if (bVar3) {
        iVar5 = FUN_100615e80(&local_40,1);
        bVar3 = false;
        if (iVar5 < 0) {
          if (-1 < iVar4) {
            iVar4 = iVar5;
          }
          QString::toUtf8();
          lVar2 = *(long *)(local_48 + 0x10);
          uVar7 = FUN_1007dd120(iVar5);
          FUN_1008e3970("","prlplg",0,"ReloadDynPlugins(): LoadDynPlugins from %s failed by err %s",
                        local_48 + lVar2,uVar7);
          bVar3 = false;
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100617570;
            }
            QArrayData::deallocate(local_48,1,8);
          }
        }
        goto LAB_100617570;
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100617664;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100617664:
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
      if ((bool)local_31) goto LAB_1006176dc;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
  }
LAB_1006176dc:
  QMutex::unlock();
  return iVar4;
}

