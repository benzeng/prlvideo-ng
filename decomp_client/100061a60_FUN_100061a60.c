
ulong FUN_100061a60(long *param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  Node *pNVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  undefined4 local_d0;
  Data *local_c8;
  _func_void_Node_ptr *local_c0;
  Node *local_b8;
  int *local_b0;
  int *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  int local_70;
  undefined8 local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_1 + 0x14) == 0) {
    return *(ulong *)PTR_self_1021e1388;
  }
  FUN_1000626e0(&local_b0,param_1);
  local_a8 = local_b0;
  if (*local_b0 != -1) {
    if (*local_b0 == 0) {
      QListData::detach((int)&local_a8);
      iVar4 = local_a8[2];
      if (iVar4 != local_a8[3]) {
        local_b0 = local_b0 + (long)local_b0[2] * 2 + 4;
        piVar10 = local_a8 + (long)iVar4 * 2 + 4;
        lVar5 = (long)local_a8[3] * 8 + (long)iVar4 * -8;
        do {
          piVar2 = *(int **)local_b0;
          *(int **)piVar10 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          local_b0 = local_b0 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_b0 = *local_b0 + 1;
      local_31 = *local_b0 != 0;
      UNLOCK();
    }
  }
  FUN_100039a80(&local_b0);
  FUN_1000613c0(&local_b8);
  FUN_1000627a0(&local_c0);
  iVar4 = *(int *)(local_b8 + 0x20);
  uVar12 = 0;
  if (iVar4 != 0) {
    plVar9 = *(long **)(local_b8 + 8);
    do {
      pNVar6 = (Node *)*plVar9;
      if (pNVar6 != local_b8) {
        goto LAB_100061bb0;
      }
      iVar4 = iVar4 + -1;
      plVar9 = plVar9 + 1;
    } while (iVar4 != 0);
  }
  goto LAB_100061bd6;
  while (pNVar6 = (Node *)QHashData::nextNode(pNVar6), pNVar6 != local_b8) {
LAB_100061bb0:
    cVar3 = FUN_1000632f0(pNVar6 + 0x10,&local_c0);
    if (cVar3 != '\0') {
      uVar12 = (ulong)*(uint *)(pNVar6 + 0xc);
      break;
    }
  }
LAB_100061bd6:
  if (*(int *)(local_c0 + 0x10) != -1) {
    if (*(int *)(local_c0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_c0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100061c04;
    }
    QHashData::free_helper(local_c0);
  }
LAB_100061c04:
  if (*(int *)(local_b8 + 0x10) != -1) {
    if (*(int *)(local_b8 + 0x10) != 0) {
      LOCK();
      pNVar6 = local_b8 + 0x10;
      *(int *)pNVar6 = *(int *)pNVar6 + -1;
      local_31 = *(int *)pNVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100061c32;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_b8);
  }
LAB_100061c32:
  local_c8 = (Data *)PTR_shared_null_1021e15e8;
  iVar4 = (int)uVar12;
  if (iVar4 == 1) {
    local_a0 = *(undefined8 *)PTR_self_1021e1388;
    FUN_1000630f0(&local_c8,&local_a0);
  }
  else if (iVar4 == 3) {
    uVar7 = FUN_100152280();
    FUN_100154b10(&local_90,uVar7);
    local_88 = local_90;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 == 0) {
        QListData::detach((int)&local_88);
        lVar5 = (long)*(int *)(local_88 + 8);
        if ((local_90 + (long)*(int *)(local_90 + 8) * 8 != local_88 + lVar5 * 8) &&
           (lVar11 = *(int *)(local_88 + 0xc) - lVar5,
           lVar11 != 0 && lVar5 <= *(int *)(local_88 + 0xc))) {
          _memcpy(local_88 + lVar5 * 8 + 0x10,local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10,
                  lVar11 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
    }
    local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
    local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
    local_70 = 1;
    if (*(int *)local_90 == 0) {
LAB_100061dc6:
      QListData::dispose(local_90);
LAB_100061dcb:
      if (local_70 != 0) goto LAB_100061dd9;
    }
    else {
      if (*(int *)local_90 != -1) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_100061dc6;
        goto LAB_100061dcb;
      }
LAB_100061dd9:
      if (local_80 != local_78) {
        do {
          local_98 = *(undefined8 *)local_80;
          FUN_1000630f0(&local_c8,&local_98);
          local_80 = local_80 + 8;
          local_70 = 1;
        } while (local_80 != local_78);
      }
    }
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100061f4b;
      }
      QListData::dispose(local_88);
    }
  }
  else {
    if (iVar4 != 2) goto LAB_100061f4b;
    uVar7 = FUN_100152280();
    FUN_100154d10(&local_60,uVar7);
    FUN_100062ec0(&local_58,&local_60);
    local_50 = local_58 + (long)local_58[2] * 2 + 4;
    local_48 = local_58 + (long)local_58[3] * 2 + 4;
    local_40 = 1;
    if (*local_60 == 0) {
LAB_100061e63:
      FUN_100063050(&local_60,local_60);
LAB_100061e6c:
      if (local_40 != 0) goto LAB_100061e7b;
    }
    else {
      if (*local_60 != -1) {
        LOCK();
        *local_60 = *local_60 + -1;
        local_31 = *local_60 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_100061e63;
        goto LAB_100061e6c;
      }
LAB_100061e7b:
      do {
        if (local_50 == local_48) break;
        piVar10 = (int *)**(undefined8 **)local_50;
        uVar7 = (*(undefined8 **)local_50)[1];
        if (piVar10 != (int *)0x0) {
          LOCK();
          *piVar10 = *piVar10 + 1;
          local_31 = *piVar10 != 0;
          UNLOCK();
        }
        if (local_40 != 0) {
          local_68 = 0;
          if ((piVar10 != (int *)0x0) && (local_68 = 0, piVar10[1] != 0)) {
            local_68 = uVar7;
          }
          FUN_1000630f0(&local_c8,&local_68);
          local_40 = 0;
        }
        if (piVar10 != (int *)0x0) {
          LOCK();
          *piVar10 = *piVar10 + -1;
          local_31 = *piVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar10);
          }
        }
        local_50 = local_50 + 2;
        uVar8 = local_40 ^ 1;
        bVar13 = local_40 != 1;
        local_40 = uVar8;
      } while (bVar13);
    }
    if (*local_58 != -1) {
      if (*local_58 != 0) {
        LOCK();
        *local_58 = *local_58 + -1;
        local_31 = *local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100061f4b;
      }
      FUN_100063050(&local_58,local_58);
    }
  }
LAB_100061f4b:
  local_e8 = local_c8;
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 == 0) {
      QListData::detach((int)&local_e8);
      lVar5 = (long)*(int *)(local_e8 + 8);
      if ((local_c8 + (long)*(int *)(local_c8 + 8) * 8 != local_e8 + lVar5 * 8) &&
         (lVar11 = *(int *)(local_e8 + 0xc) - lVar5,
         lVar11 != 0 && lVar5 <= *(int *)(local_e8 + 0xc))) {
        _memcpy(local_e8 + lVar5 * 8 + 0x10,local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
    }
  }
  local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
  local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_e8 + 8) != *(int *)(local_e8 + 0xc)) {
    do {
      local_d0 = 1;
      uVar12 = *(ulong *)local_e0;
      cVar3 = FUN_100061770(uVar12,param_1);
      iVar4 = 1;
      if (cVar3 != '\0') goto LAB_100062041;
      local_e0 = local_e0 + 8;
    } while (local_e0 != local_d8);
  }
  local_d0 = 1;
  iVar4 = 4;
LAB_100062041:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006206d;
    }
    QListData::dispose(local_e8);
  }
LAB_10006206d:
  if (iVar4 == 4) {
    uVar12 = 0;
  }
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000620a2;
    }
    QListData::dispose(local_c8);
  }
LAB_1000620a2:
  FUN_100039a80(&local_a8);
  return uVar12;
}

