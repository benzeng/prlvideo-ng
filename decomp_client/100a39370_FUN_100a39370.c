
undefined1 FUN_100a39370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Node *pNVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  Node *pNVar6;
  Node *pNVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  bool bVar15;
  long local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  uint local_50;
  Data *local_48;
  undefined8 local_40;
  Node *local_38;
  undefined1 local_29;
  
  local_38 = (Node *)PTR_shared_null_1021e15d0;
  cVar3 = FUN_100a3e050(param_1,param_2,&local_38);
  pNVar7 = local_38;
  if (cVar3 == '\0') {
    uVar14 = 0;
    goto LAB_100a396f7;
  }
  if (*(int *)(local_38 + 0x14) == 0) {
    uVar14 = 0;
    goto LAB_100a396f7;
  }
  if (1 < *(int *)(local_38 + 0x10) + 1U) {
    LOCK();
    pNVar6 = local_38 + 0x10;
    *(int *)pNVar6 = *(int *)pNVar6 + 1;
    local_29 = *(int *)pNVar6 != 0;
    UNLOCK();
  }
  pNVar6 = local_38;
  if ((((byte)local_38[0x28] & 1) == 0) && (1 < *(uint *)(local_38 + 0x10))) {
    pNVar6 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)local_38,FUN_100a40260,0xa3f580,0x18
                               );
    if (*(int *)(pNVar7 + 0x10) != -1) {
      if (*(int *)(pNVar7 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar7 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        local_29 = *(int *)pNVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a39423;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar7);
    }
  }
LAB_100a39423:
  iVar5 = *(int *)(pNVar6 + 0x20);
  pNVar7 = pNVar6;
  if (iVar5 != 0) {
    plVar11 = *(long **)(pNVar6 + 8);
    do {
      pNVar7 = (Node *)*plVar11;
      if ((Node *)*plVar11 != pNVar6) break;
      iVar5 = iVar5 + -1;
      plVar11 = plVar11 + 1;
      pNVar7 = pNVar6;
    } while (iVar5 != 0);
  }
  if (pNVar7 != pNVar6) {
    do {
      local_40 = *(undefined8 *)(pNVar7 + 0x10);
      FUN_100a3c310(&local_40,param_3,0);
      pNVar7 = (Node *)QHashData::nextNode(pNVar7);
    } while (pNVar7 != pNVar6);
  }
  if (*(int *)(pNVar6 + 0x10) != -1) {
    if (*(int *)(pNVar6 + 0x10) != 0) {
      LOCK();
      pNVar7 = pNVar6 + 0x10;
      *(int *)pNVar7 = *(int *)pNVar7 + -1;
      local_29 = *(int *)pNVar7 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a394b1;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
  }
LAB_100a394b1:
  pNVar7 = local_38;
  if (1 < *(uint *)(local_38 + 0x10)) {
    pNVar7 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)local_38,FUN_100a40260,0xa3f580,0x18
                               );
    if (*(int *)(local_38 + 0x10) != -1) {
      if (*(int *)(local_38 + 0x10) != 0) {
        LOCK();
        pNVar6 = local_38 + 0x10;
        *(int *)pNVar6 = *(int *)pNVar6 + -1;
        local_29 = *(int *)pNVar6 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a39512;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_38);
    }
  }
LAB_100a39512:
  local_38 = pNVar7;
  iVar5 = *(int *)(local_38 + 0x20);
  pNVar7 = local_38;
  if (iVar5 != 0) {
    plVar11 = *(long **)(local_38 + 8);
    do {
      pNVar7 = (Node *)*plVar11;
      if ((Node *)*plVar11 != local_38) break;
      iVar5 = iVar5 + -1;
      plVar11 = plVar11 + 1;
      pNVar7 = local_38;
    } while (iVar5 != 0);
  }
  lVar2 = *(long *)(pNVar7 + 0x10);
  uVar8 = FUN_100152280();
  FUN_100154b10(&local_48,uVar8);
  local_68 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_68);
      lVar12 = (long)*(int *)(local_68 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_68 + lVar12 * 8) &&
         (lVar13 = *(int *)(local_68 + 0xc) - lVar12,
         lVar13 != 0 && lVar12 <= *(int *)(local_68 + 0xc))) {
        _memcpy(local_68 + lVar12 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar13 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  local_50 = 1;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      if (local_50 == 0) {
LAB_100a39687:
        local_60 = local_60 + 8;
        local_50 = 1;
      }
      else {
        uVar8 = *(undefined8 *)local_60;
        FUN_10018c250(&local_70,uVar8);
        if (local_70 == lVar2) {
          uVar9 = FUN_10018c280(uVar8);
          uVar9 = FUN_100319c50(uVar9);
          bVar4 = FUN_100330a50(uVar9);
          bVar4 = bVar4 ^ 1;
        }
        else {
          bVar4 = 0;
        }
        if (local_70 != 0) {
          _PrlHandle_Free();
        }
        if (bVar4 == 0) goto LAB_100a39687;
        uVar8 = FUN_10018c280(uVar8);
        FUN_10031b640(uVar8,0);
        local_60 = local_60 + 8;
        uVar10 = local_50 ^ 1;
        bVar15 = local_50 == 1;
        local_50 = uVar10;
        if (bVar15) break;
      }
    } while (local_60 != local_58);
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a396cf;
    }
    QListData::dispose(local_68);
  }
LAB_100a396cf:
  uVar14 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a396f7;
    }
    QListData::dispose(local_48);
  }
LAB_100a396f7:
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pNVar7 = local_38 + 0x10;
      *(int *)pNVar7 = *(int *)pNVar7 + -1;
      UNLOCK();
      if (*(int *)pNVar7 != 0) {
        return uVar14;
      }
      local_29 = 0;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_38);
  }
  return uVar14;
}

