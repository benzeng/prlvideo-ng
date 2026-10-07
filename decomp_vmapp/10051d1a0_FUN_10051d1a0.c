
void FUN_10051d1a0(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  Node *pNVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  _func_void_Node_ptr *p_Var12;
  undefined8 uVar13;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  Data *local_70;
  QArrayData *local_68;
  uint local_5c;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_58 = (Data *)param_1[0xe];
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar8 = (long)*(int *)(local_58 + 8);
      lVar9 = param_1[0xe];
      if (((Data *)(lVar9 + (long)*(int *)(lVar9 + 8) * 8) != local_58 + lVar8 * 8) &&
         (lVar10 = *(int *)(local_58 + 0xc) - lVar8,
         lVar10 != 0 && lVar8 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar8 * 8 + 0x10,(void *)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) == *(int *)(local_58 + 0xc)) {
LAB_10051d70b:
    local_40 = 1;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_58);
    }
    return;
  }
  plVar2 = param_1 + 0x14;
LAB_10051d2b0:
  local_40 = 1;
  uVar3 = *(uint *)local_50;
  local_5c = uVar3;
  (**(code **)(*param_1 + 0x48))(&local_68,param_1,uVar3);
  if (*(int *)(local_68 + 4) != 0) {
    QMutex::lock();
    pNVar4 = (Node *)*plVar2;
    uVar11 = *(uint *)(pNVar4 + 0x20);
    if (uVar11 != 0) {
      for (pNVar7 = *(Node **)(*(long *)(pNVar4 + 8) +
                              ((ulong)(*(uint *)(pNVar4 + 0x24) ^ uVar3) % (ulong)uVar11) * 8);
          pNVar7 != pNVar4; pNVar7 = *(Node **)pNVar7) {
        if ((*(uint *)(pNVar7 + 8) == (*(uint *)(pNVar4 + 0x24) ^ uVar3)) &&
           (uVar3 == *(uint *)(pNVar7 + 0xc))) {
          if (pNVar7 != pNVar4) {
            local_70 = (Data *)PTR_shared_null_100ba2188;
            if (1 < *(uint *)(pNVar4 + 0x10)) {
              pNVar4 = (Node *)QHashData::detach_helper
                                         ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_10051e270,
                                          0x51e010,0x18);
              p_Var12 = (_func_void_Node_ptr *)*plVar2;
              if (*(int *)(p_Var12 + 0x10) != -1) {
                if (*(int *)(p_Var12 + 0x10) != 0) {
                  LOCK();
                  pcVar1 = p_Var12 + 0x10;
                  *(int *)pcVar1 = *(int *)pcVar1 + -1;
                  local_31 = *(int *)pcVar1 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10051d3c0;
                  p_Var12 = (_func_void_Node_ptr *)*plVar2;
                }
                QHashData::free_helper(p_Var12);
              }
LAB_10051d3c0:
              *plVar2 = (long)pNVar4;
              uVar11 = *(uint *)(pNVar4 + 0x20);
            }
            pNVar7 = pNVar4;
            if (uVar11 == 0) goto LAB_10051d4ca;
            puVar5 = *(undefined8 **)(pNVar4 + 8);
            goto LAB_10051d3e0;
          }
          break;
        }
      }
    }
    QMutex::lock();
    uVar6 = FUN_10051d850(param_1 + 0x12,&local_5c);
    FUN_100050840(uVar6,&local_68);
    QMutex::unlock();
    QMutex::unlock();
  }
  goto LAB_10051d45d;
  while( true ) {
    uVar11 = uVar11 - 1;
    puVar5 = puVar5 + 1;
    pNVar7 = pNVar4;
    if (uVar11 == 0) break;
LAB_10051d3e0:
    pNVar7 = (Node *)*puVar5;
    if ((Node *)*puVar5 != pNVar4) break;
  }
LAB_10051d4ca:
  do {
    if (1 < *(uint *)(pNVar4 + 0x10)) {
      pNVar4 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_10051e270,0x51e010,0x18
                                 );
      p_Var12 = (_func_void_Node_ptr *)*plVar2;
      if (*(int *)(p_Var12 + 0x10) != -1) {
        if (*(int *)(p_Var12 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var12 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10051d531;
          p_Var12 = (_func_void_Node_ptr *)*plVar2;
        }
        QHashData::free_helper(p_Var12);
      }
LAB_10051d531:
      *plVar2 = (long)pNVar4;
    }
    if (pNVar7 == pNVar4) break;
    if (*(uint *)(pNVar7 + 0xc) == uVar3) {
      FUN_100036f00(&local_70,pNVar7 + 0x10);
      pNVar7 = (Node *)FUN_10051dda0(plVar2,pNVar7);
    }
    else {
      pNVar7 = (Node *)QHashData::nextNode(pNVar7);
    }
    pNVar4 = (Node *)*plVar2;
  } while( true );
  QMutex::unlock();
  local_90 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_90);
      lVar9 = (long)*(int *)(local_90 + 8);
      if ((local_70 + (long)*(int *)(local_70 + 8) * 8 != local_90 + lVar9 * 8) &&
         (lVar8 = *(int *)(local_90 + 0xc) - lVar9, lVar8 != 0 && lVar9 <= *(int *)(local_90 + 0xc))
         ) {
        _memcpy(local_90 + lVar9 * 8 + 0x10,local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
    do {
      local_78 = 1;
      uVar6 = *(undefined8 *)local_88;
      lVar9 = FUN_1002a6120(uVar6,0,1);
      uVar13 = 0xf000001c;
      if ((lVar9 != 0) && (uVar13 = 0xf0000009, *(int *)(local_68 + 4) <= *(int *)(lVar9 + 8))) {
        uVar13 = 0;
        FUN_1002a5a50(lVar9,0,local_68 + *(long *)(local_68 + 0x10));
      }
      FUN_1004c07d0(param_1,uVar6,uVar13);
      local_88 = local_88 + 8;
    } while (local_88 != local_80);
  }
  local_78 = 1;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10051d6c9;
    }
    QListData::dispose(local_90);
  }
LAB_10051d6c9:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10051d45d;
    }
    QListData::dispose(local_70);
  }
LAB_10051d45d:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10051d48d;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10051d48d:
  local_50 = local_50 + 8;
  if (local_50 == local_48) goto LAB_10051d70b;
  goto LAB_10051d2b0;
}

