
void FUN_10071fea0(long param_1,long param_2)

{
  code *pcVar1;
  Data *pDVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined8 uVar11;
  _func_void_Node_ptr *p_Var12;
  uint uVar13;
  long lVar14;
  long lVar15;
  Data *pDVar16;
  QArrayData *pQVar17;
  bool bVar18;
  long lVar19;
  Data *pDVar20;
  bool bVar21;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  _func_void_Node_ptr *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  uint local_78;
  Data *local_70;
  undefined4 local_64;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  uint local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return;
  }
  FUN_100721010(&local_60,param_1 + 0x20);
  FUN_1000722f0(&local_58,&local_60);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_10071ff8a:
    bVar5 = false;
    do {
      while( true ) {
        bVar18 = bVar5;
        if (local_50 == local_48) goto LAB_1007200ee;
        local_64 = **(undefined4 **)local_50;
        if (local_40 != 0) break;
LAB_10071ffa0:
        local_50 = local_50 + 8;
        local_40 = 1;
        bVar5 = bVar18;
      }
      FUN_100721bc0(&local_70,param_1 + 0x20,&local_64);
      iVar3 = *(int *)(local_70 + 8);
      pDVar16 = local_70 + (long)iVar3 * 8 + 0x10;
      iVar4 = *(int *)(local_70 + 0xc);
      pDVar2 = local_70 + (long)iVar4 * 8 + 0x10;
      pDVar20 = pDVar16;
      if (iVar3 != iVar4) {
        lVar19 = (long)iVar4 * 8 + (long)iVar3 * -8;
        do {
          pDVar20 = pDVar16;
          if (*(long *)pDVar16 == param_2) break;
          pDVar16 = pDVar16 + 8;
          lVar19 = lVar19 + -8;
          pDVar20 = pDVar2;
        } while (lVar19 != 0);
      }
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100720049;
        }
        QListData::dispose(local_70);
      }
LAB_100720049:
      if (pDVar20 == pDVar2) goto LAB_10071ffa0;
      local_50 = local_50 + 8;
      uVar13 = local_40 ^ 1;
      bVar18 = true;
      bVar21 = local_40 != 1;
      local_40 = uVar13;
      bVar5 = true;
    } while (bVar21);
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_10071ff35:
      iVar3 = *(int *)(local_60 + 0xc);
      if (iVar3 != *(int *)(local_60 + 8)) {
        lVar19 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar3 * -8;
        pDVar16 = local_60 + (long)iVar3 * 8 + 8;
        do {
          if (*(void **)pDVar16 != (void *)0x0) {
            operator_delete(*(void **)pDVar16);
          }
          pDVar16 = pDVar16 + -8;
          lVar19 = lVar19 + 8;
        } while (lVar19 != 0);
      }
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10071ff35;
    }
    if (local_40 != 0) goto LAB_10071ff8a;
    bVar18 = false;
  }
LAB_1007200ee:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072015f;
    }
    iVar3 = *(int *)(local_58 + 0xc);
    if (iVar3 != *(int *)(local_58 + 8)) {
      lVar19 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
      pDVar16 = local_58 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar16 != (void *)0x0) {
          operator_delete(*(void **)pDVar16);
        }
        pDVar16 = pDVar16 + -8;
        lVar19 = lVar19 + 8;
      } while (lVar19 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_10072015f:
  if (!bVar18) {
    local_90 = *(Data **)(param_1 + 0x28);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 == 0) {
        QListData::detach((int)&local_90);
        lVar14 = (long)*(int *)(local_90 + 8);
        lVar19 = *(long *)(param_1 + 0x28);
        if (((Data *)(lVar19 + (long)*(int *)(lVar19 + 8) * 8) != local_90 + lVar14 * 8) &&
           (lVar15 = *(int *)(local_90 + 0xc) - lVar14,
           lVar15 != 0 && lVar14 <= *(int *)(local_90 + 0xc))) {
          _memcpy(local_90 + lVar14 * 8 + 0x10,
                  (void *)(lVar19 + 0x10 + (long)*(int *)(lVar19 + 8) * 8),lVar15 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
    }
    local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
    local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
    local_78 = 1;
    while (uVar13 = local_78, local_88 != local_80) {
      while ((uVar13 == 0 || (*(long *)local_88 != param_2))) {
        local_88 = local_88 + 8;
        local_78 = 1;
        uVar13 = 1;
        if (local_80 == local_88) goto LAB_100720265;
      }
      local_88 = local_88 + 8;
      local_78 = uVar13 ^ 1;
      bVar18 = true;
      if (uVar13 == 1) break;
    }
LAB_100720265:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10072028a;
      }
      QListData::dispose(local_90);
    }
  }
LAB_10072028a:
  if (!bVar18) {
    if (DAT_10230ffd0 < 3) {
      return;
    }
    uVar9 = FUN_100723870(param_2);
    FUN_1006946e0(&local_a0,uVar9);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",3,"KeyAction not found - %s",
                  local_98 + *(long *)(local_98 + 0x10));
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10072032e;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_10072032e:
    if (*(int *)local_a0 == -1) {
      return;
    }
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      UNLOCK();
      if (*(int *)local_a0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_a0,2,8);
    return;
  }
  if (DAT_1023109a0 == (void *)0x0) {
    pvVar10 = operator_new(0x18);
    FUN_1007251b0(pvVar10);
    DAT_102274b04 = 1;
    DAT_1023109a0 = pvVar10;
  }
  pvVar10 = DAT_1023109a0;
  uVar9 = FUN_100723870(param_2);
  cVar6 = FUN_100725b40(pvVar10,uVar9);
  if (cVar6 != '\0') {
    return;
  }
  local_a8 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  uVar11 = FUN_100060bb0();
  uVar11 = FUN_1000609c0(uVar11);
  FUN_10071f9f0(uVar11,&local_a8);
  uVar13 = FUN_100723870(param_2);
  if (*(uint *)(local_a8 + 0x20) != 0) {
    for (p_Var12 = *(_func_void_Node_ptr **)
                    (*(long *)(local_a8 + 8) +
                    ((ulong)(*(uint *)(local_a8 + 0x24) ^ uVar13) %
                    (ulong)*(uint *)(local_a8 + 0x20)) * 8); p_Var12 != local_a8;
        p_Var12 = *(_func_void_Node_ptr **)p_Var12) {
      if ((*(uint *)(p_Var12 + 8) == (*(uint *)(local_a8 + 0x24) ^ uVar13)) &&
         (uVar13 == *(uint *)(p_Var12 + 0xc))) {
        if ((p_Var12 != local_a8) &&
           ((uVar13 = FUN_100723870(param_2), *(int *)(local_a8 + 0x14) != 0 &&
            (*(uint *)(local_a8 + 0x20) != 0)))) {
          p_Var12 = *(_func_void_Node_ptr **)
                     (*(long *)(local_a8 + 8) +
                     ((ulong)(*(uint *)(local_a8 + 0x24) ^ uVar13) %
                     (ulong)*(uint *)(local_a8 + 0x20)) * 8);
          goto LAB_10072047d;
        }
        break;
      }
    }
  }
LAB_10072059f:
  uVar9 = FUN_100723870(param_2);
  FUN_1006946e0(&local_c8,uVar9);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Cannot get QAction for shortcut: %s",
                local_c0 + *(long *)(local_c0 + 0x10));
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100720627;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_100720627:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072065d;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10072065d:
  if (*(int *)(local_a8 + 0x10) != -1) {
    if (*(int *)(local_a8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_a8);
  }
  return;
LAB_10072047d:
  if (p_Var12 == local_a8) goto LAB_10072059f;
  if ((*(uint *)(p_Var12 + 8) == (*(uint *)(local_a8 + 0x24) ^ uVar13)) &&
     (uVar13 == *(uint *)(p_Var12 + 0xc))) {
    if ((p_Var12 != local_a8) &&
       ((lVar19 = *(long *)(p_Var12 + 0x10), lVar19 != 0 &&
        (cVar6 = QAction::isEnabled(), cVar6 != '\0')))) {
      QObject::objectName();
      QString::toUtf8();
      pQVar17 = local_b0 + *(long *)(local_b0 + 0x10);
      uVar7 = QAction::isVisible();
      uVar8 = QAction::isEnabled();
      FUN_100df99c0("","prl_client_app",0,
                    "trying to trigger action with name %s, visible state %d, enable state %d",
                    pQVar17,uVar7,uVar8);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10072055a;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
LAB_10072055a:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100720590;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100720590:
      QAction::activate(lVar19,0);
      goto LAB_10072065d;
    }
    goto LAB_10072059f;
  }
  p_Var12 = *(_func_void_Node_ptr **)p_Var12;
  goto LAB_10072047d;
}

