
/* WARNING: Type propagation algorithm not settling */

void FUN_100070780(QObject *param_1,long param_2)

{
  QObject *pQVar1;
  char cVar2;
  int iVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  Data *pDVar17;
  undefined *puVar18;
  Data *pDVar19;
  ulong uVar20;
  undefined *puVar21;
  bool bVar22;
  QString local_128;
  QString local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  long local_f8 [2];
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  undefined4 local_d0;
  Data *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  Data *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  pQVar1 = param_1 + 0x40;
  lVar7 = *(long *)(param_1 + 0x40);
  lVar9 = 0;
  if (((lVar7 != 0) && (lVar9 = 0, *(int *)(lVar7 + 4) != 0)) &&
     (lVar9 = *(long *)(param_1 + 0x48), lVar9 != 0)) {
    if (lVar9 == param_2) {
      cVar2 = FUN_1001248b0();
      if (cVar2 == '\0') goto LAB_10007086e;
      lVar7 = *(long *)pQVar1;
      pQVar4 = (QObject *)0x0;
      if (lVar7 != 0) goto LAB_1000707fd;
    }
    else {
LAB_1000707fd:
      pQVar4 = (QObject *)0x0;
      if (*(int *)(lVar7 + 4) != 0) {
        pQVar4 = *(QObject **)(param_1 + 0x48);
      }
    }
    QObject::disconnect(pQVar4,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                        "1onAfterActiveVmConfigurationChanged(const CVmConfiguration&)");
    piVar5 = *(int **)(param_1 + 0x40);
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)pQVar1 != (void *)0x0)) {
        operator_delete(*(void **)pQVar1);
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(long *)pQVar1 = 0;
    }
  }
LAB_10007086e:
  FUN_100060bb0();
  iVar3 = FUN_100060e10(param_2);
  if ((iVar3 == 3) && (cVar2 = FUN_1001248b0(), cVar2 == '\0')) {
    pQVar4 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    piVar5 = (int *)0x0;
    if (pQVar4 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    }
    piVar6 = *(int **)pQVar1;
    if (piVar6 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_31 = *piVar5 != 0;
        UNLOCK();
        piVar6 = *(int **)pQVar1;
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)pQVar1 != (void *)0x0)) {
          operator_delete(*(void **)pQVar1);
        }
      }
      *(int **)(param_1 + 0x40) = piVar5;
      *(QObject **)(param_1 + 0x48) = pQVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar5);
      }
    }
    if ((((*(long *)pQVar1 != 0) && (*(int *)(*(long *)pQVar1 + 4) != 0)) &&
        (lVar7 = *(long *)(param_1 + 0x48), lVar7 != 0)) && (lVar7 != lVar9)) {
      QObject::connect(&local_40,lVar7,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                       "1onAfterActiveVmConfigurationChanged(const CVmConfiguration&)",0);
      if (local_40 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_40);
    }
  }
  FUN_1001c72e0(&local_48);
  if (((*(long *)pQVar1 == 0) || (*(int *)(*(long *)pQVar1 + 4) == 0)) ||
     (*(long *)(param_1 + 0x48) == 0)) {
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  else {
    FUN_10018d830(&local_50);
  }
  lVar7 = 0;
  if ((*(long *)pQVar1 != 0) && (lVar7 = 0, *(int *)(*(long *)pQVar1 + 4) != 0)) {
    lVar7 = *(long *)(param_1 + 0x48);
  }
  iVar3 = 0;
  if (lVar7 != 0) {
    iVar3 = 200;
  }
  MacUtils::setMenuBarAppMenuTitle(&local_50,iVar3);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100070a56;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100070a56:
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_mainMenu_102269d78);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_itemAtIndex__102269d80,0);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_submenu_102269d88);
  lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_numberOfItems_102269da0);
  puVar21 = PTR_s_action_102269db8;
  puVar18 = PTR_s_itemAtIndex__102269d80;
  if (0 < lVar7) {
    lVar7 = 0;
    do {
      lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,puVar18,lVar7);
      puVar10 = (undefined *)(*(code *)PTR__objc_msgSend_1021e1c68)(lVar9,puVar21);
      if (puVar10 == PTR_s_hide__102269df0) {
        if (lVar9 == 0) break;
        QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Hide__1_102270a80);
        if (((*(long *)pQVar1 == 0) || (*(int *)(*(long *)pQVar1 + 4) == 0)) ||
           (*(long *)(param_1 + 0x48) == 0)) {
          local_68 = local_48;
          if (1 < *(int *)local_48 + 1U) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + 1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
          }
        }
        else {
          FUN_10018d830(&local_68);
        }
        QString::arg(&local_58,&local_60,&local_68,0,0x20);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100070bc1;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100070bc1:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100070bf1;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100070bf1:
        uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                           &local_58);
        (*(code *)PTR__objc_msgSend_1021e1c68)(lVar9,PTR_s_setTitle__102268ee8,uVar8);
        if (*(int *)local_58 == -1) break;
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_58,2,8);
        break;
      }
      lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_numberOfItems_102269da0);
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_mainMenu_102269d78);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_itemAtIndex__102269d80,0);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_submenu_102269d88);
  lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_numberOfItems_102269da0);
  puVar21 = PTR_s_action_102269db8;
  puVar18 = PTR_s_itemAtIndex__102269d80;
  if (0 < lVar7) {
    lVar7 = 0;
    do {
      lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,puVar18,lVar7);
      puVar10 = (undefined *)(*(code *)PTR__objc_msgSend_1021e1c68)(lVar9,puVar21);
      if (puVar10 == PTR_s_terminate__102269de8) {
        if (lVar9 == 0) break;
        lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar9,PTR_s_target_102269db0);
        if (lVar7 != *(long *)(param_1 + 0x50)) {
          (*(code *)PTR__objc_msgSend_1021e1c68)(lVar9,PTR_s_setTarget__102268cd8);
        }
        QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Quit__1_102270a78);
        if (((*(long *)pQVar1 == 0) || (*(int *)(*(long *)pQVar1 + 4) == 0)) ||
           (*(long *)(param_1 + 0x48) == 0)) {
          local_80 = local_48;
          if (1 < *(int *)local_48 + 1U) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + 1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
          }
        }
        else {
          FUN_10018d830(&local_80);
        }
        QString::arg(&local_70,&local_78,&local_80,0,0x20);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100070df1;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100070df1:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100070e21;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100070e21:
        uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                           &local_70);
        (*(code *)PTR__objc_msgSend_1021e1c68)(lVar9,PTR_s_setTitle__102268ee8,uVar8);
        if (*(int *)local_70 == -1) break;
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_70,2,8);
        break;
      }
      lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_numberOfItems_102269da0);
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_mainMenu_102269d78);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_itemAtIndex__102269d80,0);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_submenu_102269d88);
  local_88 = (Data *)PTR_shared_null_1021e15e8;
  lVar7 = *(long *)pQVar1;
  if (((lVar7 == 0) || (*(int *)(lVar7 + 4) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    local_8c = 0x12;
    FUN_100071ff0(&local_88,&local_8c);
    lVar7 = *(long *)pQVar1;
    if (lVar7 != 0) goto LAB_100070f13;
  }
  else {
LAB_100070f13:
    if ((*(int *)(lVar7 + 4) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
      local_90 = 0x7a;
      FUN_100071ff0(&local_88,&local_90);
    }
  }
  local_94 = 0x10;
  FUN_100071ff0(&local_88,&local_94);
  lVar7 = *(long *)pQVar1;
  if (((lVar7 == 0) || (*(int *)(lVar7 + 4) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    local_98 = 0x7b;
    FUN_100071ff0(&local_88,&local_98);
    local_9c = 0x3d;
    FUN_100071ff0(&local_88,&local_9c);
    lVar7 = *(long *)pQVar1;
    if (lVar7 != 0) goto LAB_100070fc1;
LAB_100071030:
    local_a8 = 0x10;
    FUN_100071ff0(&local_88,&local_a8);
    local_ac = 0x8e;
    FUN_100071ff0(&local_88,&local_ac);
    local_b0 = 0x4f;
    FUN_100071ff0(&local_88,&local_b0);
    local_b4 = 0x50;
    FUN_100071ff0(&local_88,&local_b4);
    local_b8 = 0x52;
    FUN_100071ff0(&local_88,&local_b8);
    local_bc = 0x86;
    FUN_100071ff0(&local_88,&local_bc);
    local_c0 = 0x60;
    FUN_100071ff0(&local_88,&local_c0);
  }
  else {
LAB_100070fc1:
    if ((*(int *)(lVar7 + 4) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
      local_a0 = 0x5f;
      FUN_100071ff0(&local_88,&local_a0);
      local_a4 = 0x3c;
      FUN_100071ff0(&local_88,&local_a4);
      lVar7 = *(long *)pQVar1;
      if (lVar7 == 0) goto LAB_100071030;
    }
    if ((*(int *)(lVar7 + 4) == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_100071030;
  }
  uVar11 = FUN_1006915d0();
  lVar7 = FUN_100691620(uVar11,0x13,param_2);
  puVar21 = PTR_s_numberOfItems_102269da0;
  puVar18 = PTR_s_itemAtIndex__102269d80;
  if (lVar7 != 0) {
    for (lVar9 = 0; lVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,puVar21), lVar9 < lVar12;
        lVar9 = lVar9 + 1) {
      uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,puVar18,lVar9);
      puVar10 = (undefined *)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_action_102269db8);
      if ((puVar10 == PTR_s_qtDispatcherToQAction__102269dc0) &&
         (lVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_tag_102269160),
         lVar12 == lVar7)) {
        bVar22 = true;
        if ((*(long *)pQVar1 != 0) && (*(int *)(*(long *)pQVar1 + 4) != 0)) {
          bVar22 = *(long *)(param_1 + 0x48) == 0;
        }
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_setHidden__102268e10,bVar22 ^ 1);
        break;
      }
    }
  }
  local_c8 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000722f0(&local_e8,&local_88);
  local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
  local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_e8 + 8) != *(int *)(local_e8 + 0xc)) {
    do {
      local_d0 = 1;
      iVar3 = **(int **)local_e0;
      if (iVar3 == 0x10) {
        local_f8[1] = 0;
        FUN_100072390(&local_c8,local_f8 + 1);
      }
      else {
        uVar11 = FUN_1006915d0();
        local_f8[0] = FUN_100691620(uVar11,iVar3,param_2);
        if (local_f8[0] != 0) {
          FUN_100072390(&local_c8,local_f8);
        }
      }
      local_e0 = local_e0 + 8;
    } while (local_e0 != local_d8);
  }
  local_d0 = 1;
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007131f;
    }
    iVar3 = *(int *)(local_e8 + 0xc);
    if (iVar3 != *(int *)(local_e8 + 8)) {
      lVar7 = (long)*(int *)(local_e8 + 8) * 8 + (long)iVar3 * -8;
      pDVar17 = local_e8 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar17 != (void *)0x0) {
          operator_delete(*(void **)pDVar17);
        }
        pDVar17 = pDVar17 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_e8);
  }
LAB_10007131f:
  if (*(int *)(local_c8 + 8) < *(int *)(local_c8 + 0xc)) {
    uVar20 = 0;
    puVar18 = PTR_s_itemAtIndex__102269d80;
    puVar21 = PTR_s_isSeparatorItem_102269dd8;
    puVar10 = PTR_s_separatorItem_102269de0;
    do {
      lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,puVar18,uVar20);
      if (lVar7 != 0) {
        plVar13 = (long *)FUN_100071e50(&local_c8,uVar20 & 0xffffffff);
        if (*plVar13 == 0) {
          cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,puVar21);
          if (cVar2 == '\0') {
            uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                               (PTR__OBJC_CLASS___NSMenuItem_10226aa10,puVar10);
            (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar8,PTR_s_insertItem_atIndex__102269dd0,uVar11,uVar20);
          }
        }
        else {
          FUN_100071e50(&local_c8,uVar20 & 0xffffffff);
          QAction::text();
          local_110 = (QArrayData *)QString::fromAscii_helper("&&",2);
          local_118 = (QArrayData *)QString::fromAscii_helper("&",1);
          puVar14 = (undefined8 *)QString::replace(&local_108,&local_110,&local_118,1);
          local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar14;
          if (1 < *(int *)local_100.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
          }
          if (*(int *)local_118 != -1) {
            if (*(int *)local_118 != 0) {
              LOCK();
              *(int *)local_118 = *(int *)local_118 + -1;
              local_31 = *(int *)local_118 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100071440;
            }
            QArrayData::deallocate(local_118,2,8);
          }
LAB_100071440:
          if (*(int *)local_110 != -1) {
            if (*(int *)local_110 != 0) {
              LOCK();
              *(int *)local_110 = *(int *)local_110 + -1;
              local_31 = *(int *)local_110 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100071476;
            }
            QArrayData::deallocate(local_110,2,8);
          }
LAB_100071476:
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_31 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000714ac;
            }
            QArrayData::deallocate(local_108,2,8);
          }
LAB_1000714ac:
          lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_tag_102269160);
          lVar12 = 0;
          if (lVar9 == 0) {
LAB_100071603:
            for (; lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                     (uVar8,PTR_s_numberOfItems_102269da0), lVar12 < lVar7;
                lVar12 = lVar12 + 1) {
              lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                (uVar8,PTR_s_itemAtIndex__102269d80,lVar12);
              if (((lVar7 != 0) &&
                  (lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_tag_102269160),
                  lVar9 != 0)) &&
                 (lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_target_102269db0),
                 lVar9 != 0)) {
                lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_action_102269db8);
                lVar15 = _NSSelectorFromString(&cf_itemFired_);
                puVar18 = PTR__OBJC_CLASS___NSString_10226a7c8;
                if (lVar9 == lVar15) {
                  uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_title_102268f30);
                  if (puVar18 == (undefined *)0x0) {
                    local_128.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
                  }
                  else {
                    _objc_msgSend_stret((undefined *)&local_128,(ID)puVar18,
                                        PTR_s_QStringWithString__1022696d0,uVar11);
                  }
                  cVar2 = operator==(&local_128,&local_100);
                  if (*(int *)local_128.field0_0x0 != -1) {
                    if (*(int *)local_128.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
                      local_31 = *(int *)local_128.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10007171f;
                    }
                    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
                  }
LAB_10007171f:
                  if (cVar2 != '\0') {
                    if ((int)uVar20 != (int)lVar12) {
                      (*(code *)PTR__objc_msgSend_1021e1c68)
                                (uVar8,PTR_s_removeItem__102269dc8,lVar7);
                      (*(code *)PTR__objc_msgSend_1021e1c68)
                                (uVar8,PTR_s_insertItem_atIndex__102269dd0,lVar7,uVar20);
                    }
                    break;
                  }
                }
              }
            }
          }
          else {
            lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_target_102269db0);
            lVar12 = 0;
            if (lVar9 == 0) goto LAB_100071603;
            lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_action_102269db8);
            lVar15 = _NSSelectorFromString(&cf_itemFired_);
            puVar18 = PTR__OBJC_CLASS___NSString_10226a7c8;
            lVar12 = 0;
            if (lVar9 != lVar15) goto LAB_100071603;
            uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_title_102268f30);
            if (puVar18 == (undefined *)0x0) {
              local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
            }
            else {
              _objc_msgSend_stret((undefined *)&local_120,(ID)puVar18,
                                  PTR_s_QStringWithString__1022696d0,uVar11);
            }
            cVar2 = operator==(&local_120,&local_100);
            if (*(int *)local_120.field0_0x0 != -1) {
              if (*(int *)local_120.field0_0x0 != 0) {
                LOCK();
                *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                local_31 = *(int *)local_120.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000715e8;
              }
              QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
            }
LAB_1000715e8:
            lVar12 = 0;
            if (cVar2 == '\0') goto LAB_100071603;
          }
          puVar10 = PTR_s_separatorItem_102269de0;
          puVar21 = PTR_s_isSeparatorItem_102269dd8;
          puVar18 = PTR_s_itemAtIndex__102269d80;
          if (*(int *)local_100.field0_0x0 != -1) {
            if (*(int *)local_100.field0_0x0 != 0) {
              LOCK();
              *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
              local_31 = *(int *)local_100.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000717b0;
            }
            QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
          }
        }
      }
LAB_1000717b0:
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)*(int *)(local_c8 + 0xc) - (long)*(int *)(local_c8 + 8));
  }
  puVar18 = PTR_s_itemAtIndex__102269d80;
  lVar7 = 0;
  lVar9 = 1;
  while (lVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_numberOfItems_102269da0),
        lVar7 < lVar12 + -1) {
    uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,puVar18,lVar7);
    uVar16 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,puVar18,lVar9);
    cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_isSeparatorItem_102269dd8);
    if ((cVar2 == '\0') ||
       (cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar16,PTR_s_isSeparatorItem_102269dd8),
       cVar2 == '\0')) {
      lVar7 = lVar9;
      lVar9 = lVar9 + 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_removeItem__102269dc8,uVar16);
    }
  }
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100071990;
    }
    QListData::dispose(local_c8);
  }
LAB_100071990:
  pDVar17 = local_88;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000719f3;
    }
    iVar3 = *(int *)(local_88 + 0xc);
    if (iVar3 != *(int *)(local_88 + 8)) {
      lVar7 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar3 * -8;
      pDVar19 = local_88 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar19 != (void *)0x0) {
          operator_delete(*(void **)pDVar19);
        }
        pDVar19 = pDVar19 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar17);
  }
LAB_1000719f3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

