
void FUN_1001c2cc0(long param_1)

{
  QArrayData *pQVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  QMapNodeBase *pQVar13;
  ulong *puVar14;
  QWidget *pQVar15;
  QMapNodeBase *pQVar16;
  QArrayData *pQVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  QArrayData *pQVar21;
  long lVar22;
  QArrayData *pQVar23;
  QArrayData *local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  QArrayData *local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  if ((*(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7ffffff0) < 0x10) {
    FUN_1001c34e0(&local_40,*(undefined4 *)(PTR_shared_null_1021e1288 + 4),0x10,0);
  }
  local_88 = local_40;
  if (*(uint *)local_40 < 2) {
    local_40[0xb] = (QArrayData)((byte)local_40[0xb] | 0x80);
  }
  uVar10 = FUN_100152280();
  FUN_100154b10(&local_68,uVar10);
  local_60 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_60);
      lVar18 = (long)*(int *)(local_60 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_60 + lVar18 * 8) &&
         (lVar20 = *(int *)(local_60 + 0xc) - lVar18,
         lVar20 != 0 && lVar18 <= *(int *)(local_60 + 0xc))) {
        _memcpy(local_60 + lVar18 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                lVar20 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 == -1) {
LAB_1001c2e13:
    for (; local_58 != local_50; local_58 = local_58 + 8) {
      uVar10 = *(undefined8 *)local_58;
      uVar11 = FUN_10018c280(uVar10);
      cVar4 = FUN_10031bb10(uVar11);
      if ((cVar4 != '\0') && (iVar7 = FUN_10018a9d0(uVar10), iVar7 == 0x30000004)) {
        plVar12 = (long *)FUN_100319950(uVar11);
        pQVar13 = (QMapNodeBase *)*plVar12;
        if (*(int *)pQVar13 == 0) {
          pQVar13 = (QMapNodeBase *)QMapDataBase::createData();
          if (*(long *)(*plVar12 + 0x10) != 0) {
            puVar14 = (ulong *)FUN_1000340b0(*(long *)(*plVar12 + 0x10),pQVar13);
            *(ulong **)(pQVar13 + 0x10) = puVar14;
            *puVar14 = *puVar14 & 3 | (ulong)(pQVar13 + 8);
            QMapDataBase::recalcMostLeftNode();
          }
        }
        else if (*(int *)pQVar13 != -1) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + 1;
          local_31 = *(int *)pQVar13 != 0;
          UNLOCK();
          pQVar13 = (QMapNodeBase *)*plVar12;
        }
        if (*(long *)(pQVar13 + 0x10) != 0) {
          pQVar16 = *(QMapNodeBase **)(pQVar13 + 0x20);
          while (pQVar16 != pQVar13 + 8) {
            lVar18 = 0;
            if ((*(long *)(pQVar16 + 0x20) != 0) &&
               (lVar18 = 0, *(int *)(*(long *)(pQVar16 + 0x20) + 4) != 0)) {
              lVar18 = *(long *)(pQVar16 + 0x28);
            }
            pQVar15 = (QWidget *)FUN_100323e30(lVar18,0);
            if (pQVar15 != (QWidget *)0x0) {
              plVar12 = (long *)CHostDesktopWorkspacesController::instance();
              bVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
              bVar6 = FUN_1003798a0(pQVar15);
              cVar4 = FUN_100327830(lVar18);
              if ((cVar4 == '\0' && (bVar5 & bVar6) == 1) && (*(int *)(lVar18 + 200) == 2)) {
                uVar8 = MacUtils::getDisplayForWidget(pQVar15);
                lVar18 = *(long *)(lVar18 + 0xd0) + *(long *)(*(long *)(lVar18 + 0xd0) + 0x10);
                uVar2 = *(uint *)(local_88 + 4);
                uVar9 = uVar2 + 1;
                uVar19 = *(uint *)(local_88 + 8) & 0x7fffffff;
                if ((*(uint *)local_88 < 2) && (uVar9 <= uVar19)) {
                  lVar20 = *(long *)(local_88 + 0x10);
                  lVar22 = (long)(int)uVar2 * 0x10;
                  *(undefined4 *)(local_88 + lVar22 + lVar20) = uVar8;
                  *(long *)(local_88 + lVar22 + 8 + lVar20) = lVar18;
                }
                else {
                  uVar3 = uVar19;
                  if (uVar19 < uVar9) {
                    uVar3 = uVar9;
                  }
                  FUN_1001c34e0(&local_40,(long)(int)uVar2,uVar3,(ulong)(uVar19 < uVar9) << 3);
                  lVar20 = *(long *)(local_40 + 0x10);
                  uVar2 = *(uint *)(local_40 + 4);
                  *(undefined4 *)(local_40 + (long)(int)uVar2 * 0x10 + lVar20) = uVar8;
                  *(long *)(local_40 + (long)(int)uVar2 * 0x10 + 8 + lVar20) = lVar18;
                }
                *(uint *)(local_40 + 4) = *(uint *)(local_40 + 4) + 1;
                local_88 = local_40;
              }
            }
            pQVar16 = (QMapNodeBase *)QMapNodeBase::nextNode();
          }
        }
        if (*(int *)pQVar13 != -1) {
          if (*(int *)pQVar13 != 0) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            local_31 = *(int *)pQVar13 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001c2e00;
          }
          if (*(long *)(pQVar13 + 0x10) != 0) {
            FUN_100034170();
            QMapDataBase::freeTree(pQVar13,(int)*(undefined8 *)(pQVar13 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)pQVar13);
        }
      }
LAB_1001c2e00:
      local_48 = 1;
    }
  }
  else {
    if (*(int *)local_68 == 0) {
LAB_1001c2dde:
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1001c2dde;
    }
    if (local_48 != 0) goto LAB_1001c2e13;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c3082;
    }
    QListData::dispose(local_60);
  }
LAB_1001c3082:
  if (*(uint *)local_88 == 0) {
    if ((int)*(uint *)(local_88 + 8) < 0) {
      local_88 = (QArrayData *)QArrayData::allocate(0x10,8,*(uint *)(local_88 + 8) & 0x7fffffff,0);
      if (local_88 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      local_88[0xb] = (QArrayData)((byte)local_88[0xb] | 0x80);
      local_70 = local_88;
    }
    else {
      local_70 = (QArrayData *)QArrayData::allocate(0x10,8,(long)(int)*(uint *)(local_88 + 4),0);
      local_88 = local_70;
      if (local_70 == (QArrayData *)0x0) {
        local_88 = (QArrayData *)0x0;
        qBadAlloc();
      }
    }
    if ((*(uint *)(local_88 + 8) & 0x7fffffff) != 0) {
      lVar18 = (long)(int)*(uint *)(local_40 + 4) << 4;
      if (lVar18 != 0) {
        pQVar21 = local_40 + *(long *)(local_40 + 0x10);
        pQVar17 = local_88 + *(long *)(local_88 + 0x10);
        do {
          uVar10 = *(undefined8 *)pQVar21;
          pQVar23 = pQVar21 + 8;
          pQVar21 = pQVar21 + 0x10;
          *(undefined8 *)(pQVar17 + 8) = *(undefined8 *)pQVar23;
          *(undefined8 *)pQVar17 = uVar10;
          pQVar17 = pQVar17 + 0x10;
          lVar18 = lVar18 + -0x10;
        } while (lVar18 != 0);
      }
      *(uint *)(local_88 + 4) = *(uint *)(local_40 + 4);
    }
  }
  else {
    if (*(uint *)local_88 != 0xffffffff) {
      LOCK();
      *(uint *)local_88 = *(uint *)local_88 + 1;
      local_31 = *(uint *)local_88 != 0;
      UNLOCK();
    }
    local_70 = local_88;
  }
  lVar18 = (long)(int)*(uint *)(local_88 + 4) << 4;
  if (lVar18 != 0) {
    local_88 = local_88 + *(long *)(local_88 + 0x10);
    do {
      FUN_1001c37d0(param_1 + 0x10,local_88);
      local_88 = local_88 + 0x10;
      lVar18 = lVar18 + -0x10;
    } while (lVar18 != 0);
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c31b4;
    }
    QArrayData::deallocate(local_70,0x10,8);
  }
LAB_1001c31b4:
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x14) != 0) {
    _CGDisplayRestoreColorSyncSettings();
  }
  FUN_1001c3990();
  if (*(uint *)local_40 == 0xffffffff) {
LAB_1001c3225:
    local_78 = local_40;
    pQVar21 = local_40;
  }
  else {
    if (*(uint *)local_40 != 0) {
      LOCK();
      *(uint *)local_40 = *(uint *)local_40 + 1;
      local_31 = *(uint *)local_40 != 0;
      UNLOCK();
      goto LAB_1001c3225;
    }
    if ((int)*(uint *)(local_40 + 8) < 0) {
      pQVar21 = (QArrayData *)QArrayData::allocate(0x10,8,*(uint *)(local_40 + 8) & 0x7fffffff,0);
      if (pQVar21 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      pQVar21[0xb] = (QArrayData)((byte)pQVar21[0xb] | 0x80);
      local_78 = pQVar21;
    }
    else {
      local_78 = (QArrayData *)QArrayData::allocate(0x10,8,(long)(int)*(uint *)(local_40 + 4),0);
      pQVar21 = local_78;
      if (local_78 == (QArrayData *)0x0) {
        pQVar21 = (QArrayData *)0x0;
        qBadAlloc();
      }
    }
    if ((*(uint *)(pQVar21 + 8) & 0x7fffffff) != 0) {
      lVar18 = (long)(int)*(uint *)(local_40 + 4) << 4;
      if (lVar18 != 0) {
        pQVar17 = local_40 + *(long *)(local_40 + 0x10);
        pQVar23 = pQVar21 + *(long *)(pQVar21 + 0x10);
        do {
          uVar10 = *(undefined8 *)pQVar17;
          pQVar1 = pQVar17 + 8;
          pQVar17 = pQVar17 + 0x10;
          *(undefined8 *)(pQVar23 + 8) = *(undefined8 *)pQVar1;
          *(undefined8 *)pQVar23 = uVar10;
          pQVar23 = pQVar23 + 0x10;
          lVar18 = lVar18 + -0x10;
        } while (lVar18 != 0);
      }
      *(uint *)(pQVar21 + 4) = *(uint *)(local_40 + 4);
    }
  }
  if ((long)(int)*(uint *)(pQVar21 + 4) * 0x10 != 0) {
    pQVar17 = pQVar21 + *(long *)(pQVar21 + 0x10);
    pQVar21 = pQVar17 + (long)(int)*(uint *)(pQVar21 + 4) * 0x10;
    do {
      lVar18 = *(long *)(pQVar17 + 8);
      _CGSetDisplayTransferByTable
                (*(undefined4 *)pQVar17,0x100,lVar18,lVar18 + 0x400,lVar18 + 0x800);
      FUN_1000bf310(param_1 + 0x10,pQVar17,local_38);
      pQVar17 = pQVar17 + 0x10;
    } while (pQVar17 != pQVar21);
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c3321;
    }
    QArrayData::deallocate(local_78,0x10,8);
  }
LAB_1001c3321:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QArrayData::deallocate(local_40,0x10,8);
  }
  return;
}

