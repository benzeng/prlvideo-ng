
long * FUN_10071eb40(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  CMacUserShortcutsStorage *this;
  _func_void_Node_ptr *p_Var9;
  void *pvVar10;
  ulong uVar11;
  _func_void_Node_ptr *p_Var12;
  Data *pDVar13;
  _func_void_Node_ptr *p_Var14;
  _func_void_Node_ptr *p_Var15;
  _func_void_Node_ptr *p_Var16;
  QKeySequence *pQVar17;
  Data *local_c8;
  QString local_c0;
  QKeySequence local_b8 [8];
  QString local_b0;
  _func_void_Node_ptr *local_a8;
  Data *local_a0;
  Data *local_98 [2];
  uint local_84;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  int local_60;
  _func_void_Node_ptr *local_58;
  _func_void_Node_ptr *local_50;
  _func_void_Node_ptr *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  p_Var16 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  *param_1 = (long)PTR_shared_null_1021e15d0;
  cVar5 = FUN_10071f870(param_2);
  if (cVar5 == '\0') {
    return param_1;
  }
  FUN_100060bb0();
  uVar7 = FUN_100060bb0();
  uVar7 = FUN_1000609c0(uVar7);
  FUN_100061050(3,uVar7);
  lVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar8 != 0) {
    uVar7 = FUN_10018c280(lVar8);
    uVar7 = FUN_100319c50(uVar7);
    cVar5 = FUN_100330a50(uVar7);
    if (cVar5 != '\0') {
      FUN_100725230(&local_40);
      FUN_1007213a0(param_1,&local_40);
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_40 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10071ec04;
        }
        QHashData::free_helper(local_40);
      }
    }
  }
LAB_10071ec04:
  if (*(int *)(*param_1 + 0x14) != 0) {
    return param_1;
  }
  local_48 = p_Var16;
  uVar7 = FUN_100060bb0();
  uVar7 = FUN_1000609c0(uVar7);
  FUN_10071f9f0(uVar7,&local_48);
  puVar4 = PTR_m_instance_1021e1450;
  local_50 = p_Var16;
  if (*(long *)PTR_m_instance_1021e1450 == 0) {
    this = operator_new(0x18);
    CMacUserShortcutsStorage::CMacUserShortcutsStorage(this);
    *(CMacUserShortcutsStorage **)puVar4 = this;
    DAT_102274b30 = 1;
  }
  CMacUserShortcutsStorage::userShortcuts();
  FUN_100721470(&local_50,&local_58);
  if (*(int *)(local_58 + 0x10) != -1) {
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071eca8;
    }
    QHashData::free_helper(local_58);
  }
LAB_10071eca8:
  FUN_100721540(&local_80,&local_48);
  FUN_1000722f0(&local_78,&local_80);
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)local_80 == -1) {
LAB_10071ed93:
    for (; local_70 != local_68; local_70 = local_70 + 8) {
      uVar3 = **(uint **)local_70;
      local_84 = uVar3;
      if ((*(int *)(local_48 + 0x14) != 0) && (*(uint *)(local_48 + 0x20) != 0)) {
        p_Var9 = *(_func_void_Node_ptr **)
                  (*(long *)(local_48 + 8) +
                  ((ulong)(*(uint *)(local_48 + 0x24) ^ uVar3) % (ulong)*(uint *)(local_48 + 0x20))
                  * 8);
LAB_10071edd3:
        if (p_Var9 == local_48) goto LAB_10071ed80;
        if ((*(uint *)(p_Var9 + 8) != (*(uint *)(local_48 + 0x24) ^ uVar3)) ||
           (uVar3 != *(uint *)(p_Var9 + 0xc))) goto LAB_10071edd0;
        if ((p_Var9 == local_48) || (*(long *)(p_Var9 + 0x10) == 0)) goto LAB_10071ed80;
        if (DAT_102310998 == (void *)0x0) {
          pvVar10 = operator_new(0x18);
          FUN_1006faf60(pvVar10);
          DAT_102274400 = 1;
          DAT_102310998 = pvVar10;
        }
        cVar5 = FUN_1006faa10(DAT_102310998,uVar3);
        if (cVar5 == '\0') {
          if (uVar3 != 100) goto LAB_10071ef46;
          goto LAB_10071ed80;
        }
        if (DAT_102310998 == (void *)0x0) {
          pvVar10 = operator_new(0x18);
          FUN_1006faf60(pvVar10);
          DAT_102274400 = 1;
          DAT_102310998 = pvVar10;
        }
        FUN_1006fb640(local_98,DAT_102310998,uVar3);
        uVar11 = FUN_100708300(local_98);
        pDVar13 = local_98[0];
        if (*(int *)local_98[0] == -1) goto LAB_10071ef3e;
        if (*(int *)local_98[0] != 0) {
          LOCK();
          *(int *)local_98[0] = *(int *)local_98[0] + -1;
          local_31 = *(int *)local_98[0] != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10071ef3e;
        }
        iVar2 = *(int *)(local_98[0] + 0xc);
        if (iVar2 != *(int *)(local_98[0] + 8)) {
          lVar8 = (long)*(int *)(local_98[0] + 8) * 8 + (long)iVar2 * -8;
          pQVar17 = (QKeySequence *)(local_98[0] + (long)iVar2 * 8 + 8);
          do {
            QKeySequence::~QKeySequence(pQVar17);
            pQVar17 = pQVar17 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose(pDVar13);
        p_Var16 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
LAB_10071ef3e:
        if ((uVar11 & 2) != 0 && uVar3 != 100) {
LAB_10071ef46:
          local_a0 = (Data *)PTR_shared_null_1021e15e8;
          if ((*(int *)(local_50 + 0x14) != 0) && (*(uint *)(local_50 + 0x20) != 0)) {
            for (p_Var9 = *(_func_void_Node_ptr **)
                           (*(long *)(local_50 + 8) +
                           ((ulong)(*(uint *)(local_50 + 0x24) ^ uVar3) %
                           (ulong)*(uint *)(local_50 + 0x20)) * 8); p_Var9 != local_50;
                p_Var9 = *(_func_void_Node_ptr **)p_Var9) {
              if ((*(uint *)(p_Var9 + 8) == (*(uint *)(local_50 + 0x24) ^ uVar3)) &&
                 (uVar3 == *(uint *)(p_Var9 + 0xc))) {
                if (p_Var9 != local_50) {
                  FUN_100722240(&local_a8,p_Var9 + 0x10);
                  p_Var16 = local_a8;
                }
                break;
              }
            }
          }
          local_a8 = p_Var16;
          QAction::text();
          p_Var9 = local_a8;
          uVar3 = *(uint *)(local_a8 + 0x20);
          p_Var14 = p_Var9;
          if (uVar3 != 0) {
            uVar6 = qHash(&local_b0,*(uint *)(local_a8 + 0x24));
            uVar11 = (ulong)uVar6 % (ulong)uVar3;
            p_Var16 = *(_func_void_Node_ptr **)(*(long *)(p_Var9 + 8) + uVar11 * 8);
            if (p_Var16 != p_Var9) {
              p_Var15 = (_func_void_Node_ptr *)(*(long *)(p_Var9 + 8) + uVar11 * 8);
              do {
                p_Var12 = p_Var16;
                if (*(uint *)(p_Var16 + 8) == uVar6) {
                  cVar5 = operator==(&local_b0,(QString *)(p_Var16 + 0x10));
                  p_Var12 = *(_func_void_Node_ptr **)p_Var15;
                  p_Var14 = p_Var12;
                  if (cVar5 != '\0') break;
                }
                p_Var16 = *(_func_void_Node_ptr **)p_Var12;
                p_Var14 = p_Var9;
                p_Var15 = p_Var12;
              } while (p_Var16 != p_Var9);
            }
          }
          p_Var16 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
          if (*(int *)local_b0.field0_0x0 != -1) {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_31 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10071f078;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
          }
LAB_10071f078:
          if (p_Var14 == p_Var9) {
            QAction::shortcuts();
            FUN_100707070(&local_a0,&local_c8);
            pDVar13 = local_c8;
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10071f208;
              }
              iVar2 = *(int *)(local_c8 + 0xc);
              if (iVar2 != *(int *)(local_c8 + 8)) {
                lVar8 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar2 * -8;
                pQVar17 = (QKeySequence *)(local_c8 + (long)iVar2 * 8 + 8);
                do {
                  QKeySequence::~QKeySequence(pQVar17);
                  pQVar17 = pQVar17 + -8;
                  lVar8 = lVar8 + 8;
                } while (lVar8 != 0);
              }
              QListData::dispose(pDVar13);
              p_Var16 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
            }
          }
          else {
            QAction::text();
            if ((*(int *)(p_Var9 + 0x14) == 0) || (uVar3 = *(uint *)(p_Var9 + 0x20), uVar3 == 0)) {
LAB_10071f112:
              QKeySequence::QKeySequence(local_b8);
            }
            else {
              uVar6 = qHash(&local_c0,*(uint *)(p_Var9 + 0x24));
              uVar11 = (ulong)uVar6 % (ulong)uVar3;
              p_Var14 = *(_func_void_Node_ptr **)(*(long *)(p_Var9 + 8) + uVar11 * 8);
              if (p_Var14 == p_Var9) goto LAB_10071f112;
              p_Var15 = (_func_void_Node_ptr *)(*(long *)(p_Var9 + 8) + uVar11 * 8);
              do {
                if (*(uint *)(p_Var14 + 8) == uVar6) {
                  cVar5 = operator==(&local_c0,(QString *)(p_Var14 + 0x10));
                  p_Var12 = *(_func_void_Node_ptr **)p_Var15;
                  p_Var14 = *(_func_void_Node_ptr **)p_Var15;
                  if (cVar5 == '\0') goto LAB_10071f0e7;
                  break;
                }
LAB_10071f0e7:
                p_Var15 = p_Var14;
                p_Var14 = *(_func_void_Node_ptr **)p_Var15;
                p_Var12 = p_Var9;
              } while (p_Var14 != p_Var9);
              if (p_Var12 == p_Var9) goto LAB_10071f112;
              QKeySequence::QKeySequence(local_b8,(QKeySequence *)(p_Var12 + 0x18));
            }
            FUN_100560a10(&local_a0,local_b8);
            QKeySequence::~QKeySequence(local_b8);
            if (*(int *)local_c0.field0_0x0 != -1) {
              if (*(int *)local_c0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                local_31 = *(int *)local_c0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10071f208;
              }
              QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
            }
          }
LAB_10071f208:
          if (*(int *)(local_a0 + 0xc) != *(int *)(local_a0 + 8)) {
            uVar7 = FUN_100721670(param_1,&local_84);
            FUN_100707070(uVar7,&local_a0);
          }
          if (*(int *)(p_Var9 + 0x10) != -1) {
            if (*(int *)(p_Var9 + 0x10) != 0) {
              LOCK();
              pcVar1 = p_Var9 + 0x10;
              *(int *)pcVar1 = *(int *)pcVar1 + -1;
              local_31 = *(int *)pcVar1 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10071f25e;
            }
            QHashData::free_helper(p_Var9);
          }
LAB_10071f25e:
          pDVar13 = local_a0;
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10071ed80;
            }
            iVar2 = *(int *)(local_a0 + 0xc);
            if (iVar2 != *(int *)(local_a0 + 8)) {
              lVar8 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar2 * -8;
              pQVar17 = (QKeySequence *)(local_a0 + (long)iVar2 * 8 + 8);
              do {
                QKeySequence::~QKeySequence(pQVar17);
                pQVar17 = pQVar17 + -8;
                lVar8 = lVar8 + 8;
              } while (lVar8 != 0);
            }
            QListData::dispose(pDVar13);
          }
        }
      }
LAB_10071ed80:
      local_60 = 1;
    }
  }
  else {
    if (*(int *)local_80 == 0) {
LAB_10071ed12:
      iVar2 = *(int *)(local_80 + 0xc);
      if (iVar2 != *(int *)(local_80 + 8)) {
        lVar8 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar2 * -8;
        pDVar13 = local_80 + (long)iVar2 * 8 + 8;
        do {
          if (*(void **)pDVar13 != (void *)0x0) {
            operator_delete(*(void **)pDVar13);
          }
          pDVar13 = pDVar13 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(local_80);
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10071ed12;
    }
    if (local_60 != 0) goto LAB_10071ed93;
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071f34f;
    }
    iVar2 = *(int *)(local_78 + 0xc);
    if (iVar2 != *(int *)(local_78 + 8)) {
      lVar8 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar2 * -8;
      pDVar13 = local_78 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar13 != (void *)0x0) {
          operator_delete(*(void **)pDVar13);
        }
        pDVar13 = pDVar13 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_78);
  }
LAB_10071f34f:
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071f37e;
    }
    QHashData::free_helper(local_50);
  }
LAB_10071f37e:
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_48);
  }
  return param_1;
LAB_10071edd0:
  p_Var9 = *(_func_void_Node_ptr **)p_Var9;
  goto LAB_10071edd3;
}

