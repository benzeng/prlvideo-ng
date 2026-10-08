
void FUN_1006e4380(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  int *piVar2;
  ulong uVar3;
  _func_void_Node_ptr *p_Var4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  QAction *pQVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  undefined8 uVar14;
  _func_void_Node_ptr *p_Var15;
  _func_void_Node_ptr *p_Var16;
  _func_void_Node_ptr *p_Var17;
  _func_void_Node_ptr *p_Var18;
  bool bVar19;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",4,"Populating Window menu...");
  }
  uVar9 = FUN_1006915d0();
  lVar11 = 0;
  if ((*param_3 != 0) && (lVar11 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar11 = param_3[1];
  }
  FUN_100691620(uVar9,0x58,lVar11);
  pQVar10 = (QAction *)QAction::menu();
  QWidget::addAction(pQVar10);
  uVar9 = FUN_1006915d0();
  lVar11 = 0;
  if ((*param_3 != 0) && (lVar11 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar11 = param_3[1];
  }
  FUN_100691620(uVar9,0x59,lVar11);
  pQVar10 = (QAction *)QAction::menu();
  QWidget::addAction(pQVar10);
  QAction::menu();
  QMenu::addSeparator();
  uVar9 = FUN_1006915d0();
  lVar11 = 0;
  if ((*param_3 != 0) && (lVar11 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar11 = param_3[1];
  }
  FUN_100691620(uVar9,0x90,lVar11);
  pQVar10 = (QAction *)QAction::menu();
  QWidget::addAction(pQVar10);
  uVar9 = FUN_1006915d0();
  lVar11 = 0;
  if ((*param_3 != 0) && (lVar11 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar11 = param_3[1];
  }
  FUN_100691620(uVar9,0x91,lVar11);
  pQVar10 = (QAction *)QAction::menu();
  QWidget::addAction(pQVar10);
  uVar9 = FUN_1006915d0();
  lVar11 = 0;
  if ((*param_3 != 0) && (lVar11 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar11 = param_3[1];
  }
  FUN_100691620(uVar9,0x92,lVar11);
  pQVar10 = (QAction *)QAction::menu();
  QWidget::addAction(pQVar10);
  uVar9 = FUN_1006915d0();
  lVar11 = 0;
  if ((*param_3 != 0) && (lVar11 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar11 = param_3[1];
  }
  FUN_100691620(uVar9,0x93,lVar11);
  pQVar10 = (QAction *)QAction::menu();
  QWidget::addAction(pQVar10);
  QAction::menu();
  QMenu::addSeparator();
  uVar9 = FUN_1006915d0();
  lVar11 = 0;
  if ((*param_3 != 0) && (lVar11 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar11 = param_3[1];
  }
  FUN_100691620(uVar9,0x42,lVar11);
  pQVar10 = (QAction *)QAction::menu();
  QWidget::addAction(pQVar10);
  FUN_100060bb0();
  lVar11 = 0;
  if ((*param_3 != 0) && (lVar11 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar11 = param_3[1];
  }
  iVar6 = FUN_100060e10(lVar11);
  if (iVar6 == 3) {
    if ((*param_3 != 0) && (*(int *)(*param_3 + 4) != 0)) {
      lVar11 = param_3[1];
LAB_1006e4601:
      if (lVar11 != 0) {
        QAction::menu();
        QMenu::addSeparator();
        uVar9 = FUN_1006915d0();
        FUN_100691620(uVar9,0x62,lVar11);
        pQVar10 = (QAction *)QAction::menu();
        QWidget::addAction(pQVar10);
      }
    }
  }
  else {
    uVar9 = FUN_100060bb0();
    iVar6 = FUN_10005ffb0(uVar9);
    if ((iVar6 == 3) && (cVar5 = FUN_1001248b0(), cVar5 == '\0')) {
      uVar9 = FUN_100060bb0();
      lVar11 = FUN_1000609c0(uVar9);
      goto LAB_1006e4601;
    }
  }
  QAction::menu();
  QMenu::addSeparator();
  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  uVar9 = FUN_100370280();
  FUN_100370f40(&local_68,uVar9);
  FUN_100376390(&local_60,&local_68);
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (*local_68 == -1) {
LAB_1006e46f0:
    do {
      if (local_58 == local_50) break;
      piVar2 = (int *)**(undefined8 **)local_58;
      lVar11 = (*(undefined8 **)local_58)[1];
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_31 = *piVar2 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        if (((piVar2 != (int *)0x0) && (lVar11 != 0)) && (piVar2[1] != 0)) {
          uVar9 = FUN_100152280();
          lVar12 = 0;
          if (piVar2[1] != 0) {
            lVar12 = lVar11;
          }
          FUN_10036d1c0(&local_70,lVar12);
          lVar12 = 0;
          if (piVar2[1] != 0) {
            lVar12 = lVar11;
          }
          FUN_10036bf70(&local_78,lVar12);
          lVar12 = FUN_100154930(uVar9,&local_70,&local_78);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006e47c8;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_1006e47c8:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006e47f8;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_1006e47f8:
          if ((lVar12 != 0) && (cVar5 = FUN_10018c1f0(lVar12,1), cVar5 == '\0')) {
            lVar12 = 0;
            if (piVar2[1] != 0) {
              lVar12 = lVar11;
            }
            FUN_10036bf70(&local_80,lVar12);
            p_Var4 = local_40;
            uVar8 = *(uint *)(local_40 + 0x20);
            p_Var15 = p_Var4;
            if (uVar8 != 0) {
              uVar7 = qHash(&local_80,*(uint *)(local_40 + 0x24));
              uVar3 = (ulong)uVar7 % (ulong)uVar8;
              p_Var16 = *(_func_void_Node_ptr **)(*(long *)(p_Var4 + 8) + uVar3 * 8);
              if (p_Var16 != p_Var4) {
                p_Var18 = (_func_void_Node_ptr *)(*(long *)(p_Var4 + 8) + uVar3 * 8);
                do {
                  p_Var17 = p_Var16;
                  if (*(uint *)(p_Var16 + 8) == uVar7) {
                    cVar5 = operator==(&local_80,(QString *)(p_Var16 + 0x10));
                    p_Var17 = *(_func_void_Node_ptr **)p_Var18;
                    p_Var15 = p_Var17;
                    if (cVar5 != '\0') break;
                  }
                  p_Var16 = *(_func_void_Node_ptr **)p_Var17;
                  p_Var15 = p_Var4;
                  p_Var18 = p_Var17;
                } while (p_Var16 != p_Var4);
              }
            }
            if (*(int *)local_80.field0_0x0 != -1) {
              if (*(int *)local_80.field0_0x0 != 0) {
                LOCK();
                *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
                local_31 = *(int *)local_80.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006e48e1;
              }
              QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
            }
LAB_1006e48e1:
            if (p_Var15 == p_Var4) {
              pvVar13 = operator_new(0x18);
              uVar9 = QAction::menu();
              uVar14 = QApplication::activeWindow();
              lVar12 = 0;
              if (piVar2[1] != 0) {
                lVar12 = lVar11;
              }
              FUN_10036bf70(&local_88,lVar12);
              FUN_1006b35b0(pvVar13,uVar9,uVar14,&local_88);
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006e4976;
                }
                QArrayData::deallocate(local_88,2,8);
              }
LAB_1006e4976:
              pQVar10 = (QAction *)QAction::menu();
              QWidget::addAction(pQVar10);
              lVar12 = 0;
              if (piVar2[1] != 0) {
                lVar12 = lVar11;
              }
              FUN_10036bf70(&local_90,lVar12);
              FUN_100062d00(&local_40,&local_90,local_38);
              if (*(int *)local_90 != -1) {
                if (*(int *)local_90 != 0) {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + -1;
                  local_31 = *(int *)local_90 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006e4a00;
                }
                QArrayData::deallocate(local_90,2,8);
              }
            }
          }
        }
LAB_1006e4a00:
        local_48 = 0;
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_31 = *piVar2 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar2);
        }
      }
      local_58 = local_58 + 2;
      uVar8 = local_48 ^ 1;
      bVar19 = local_48 != 1;
      local_48 = uVar8;
    } while (bVar19);
  }
  else {
    if (*local_68 == 0) {
LAB_1006e46c5:
      FUN_100376000(&local_68,local_68);
    }
    else {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006e46c5;
    }
    if (local_48 != 0) goto LAB_1006e46f0;
  }
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e4a6d;
    }
    FUN_100376000(&local_60,local_60);
  }
LAB_1006e4a6d:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper(local_40);
  }
  return;
}

