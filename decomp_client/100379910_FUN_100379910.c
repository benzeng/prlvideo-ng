
void FUN_100379910(QMoveEvent *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  QWidget *pQVar11;
  _func_void_Node_ptr *p_Var12;
  long lVar13;
  char *pcVar14;
  QArrayData *pQVar15;
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar16;
  undefined8 in_stack_fffffffffffffe40;
  undefined4 uVar17;
  undefined8 in_stack_fffffffffffffe48;
  undefined4 uVar18;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar19;
  undefined8 in_stack_fffffffffffffe60;
  undefined4 uVar20;
  undefined8 in_stack_fffffffffffffe68;
  undefined4 uVar21;
  undefined8 in_stack_fffffffffffffe70;
  undefined4 uVar22;
  _func_void_Node_ptr *local_118;
  QArrayData *local_110;
  int local_104;
  QArrayData *local_100;
  QArrayData *local_f8;
  int local_ec;
  _func_void_Node_ptr *local_e8;
  undefined1 local_d9;
  int *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int *local_40;
  char *local_38;
  
  uVar16 = (undefined4)((ulong)in_stack_fffffffffffffe38 >> 0x20);
  uVar17 = (undefined4)((ulong)in_stack_fffffffffffffe40 >> 0x20);
  uVar18 = (undefined4)((ulong)in_stack_fffffffffffffe48 >> 0x20);
  uVar19 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
  uVar20 = (undefined4)((ulong)in_stack_fffffffffffffe60 >> 0x20);
  uVar21 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
  uVar22 = (undefined4)((ulong)in_stack_fffffffffffffe70 >> 0x20);
  QWidget::moveEvent(param_1);
  MacUtils::getDisplaySizes();
  iVar2 = *(int *)(local_e8 + 0x14);
  QApplication::desktop();
  iVar7 = QDesktopWidget::numScreens();
  if ((iVar2 != iVar7) || (*(char *)(*(long *)(param_1 + 0x38) + 0x48) == '\0')) goto LAB_100379dcd;
  pQVar11 = (QWidget *)QApplication::desktop();
  local_ec = QDesktopWidget::screenNumber(pQVar11);
  QApplication::desktop();
  uVar8 = QDesktopWidget::numScreens();
  if (1 < DAT_10230ffd0) {
    pcVar14 = "non-";
    if ((*(byte *)(param_2 + 0x12) & 2) != 0) {
      pcVar14 = "";
    }
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    uVar6 = *(undefined4 *)(param_2 + 0x18);
    lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
    if (((lVar13 == 0) || (*(int *)(lVar13 + 4) == 0)) ||
       (*(long *)(*(long *)(param_1 + 0x38) + 0x20) == 0)) {
      local_100 = (QArrayData *)PTR_shared_null_1021e1288;
    }
    else {
      FUN_100323d90(&local_100);
    }
    QString::toUtf8();
    pQVar15 = local_f8 + *(long *)(local_f8 + 0x10);
    lVar13 = *(long *)(param_1 + 0x38);
    uVar9 = 0xffffffff;
    if (((*(long *)(lVar13 + 0x18) != 0) && (*(int *)(*(long *)(lVar13 + 0x18) + 4) != 0)) &&
       (*(long *)(lVar13 + 0x20) != 0)) {
      uVar9 = FUN_100323e20();
      lVar13 = *(long *)(param_1 + 0x38);
    }
    FUN_100df99c0("","prl_client_app",2,
                  "Process %sspontaneous move event from (%d, %d) to (%d, %d) by VM [%s] display #%d widget in FullScreen. Cached FS number=%d, current screen number=%d, total number of host screens=%d"
                  ,pcVar14,uVar3,CONCAT44(uVar16,uVar4),CONCAT44(uVar17,uVar5),
                  CONCAT44(uVar18,uVar6),pQVar15,CONCAT44(uVar19,uVar9),
                  CONCAT44(uVar20,*(undefined4 *)(lVar13 + 0x4c)),CONCAT44(uVar21,local_ec),
                  CONCAT44(uVar22,uVar8));
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_d9 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_100379af5;
      }
      QArrayData::deallocate(local_f8,1,8);
    }
LAB_100379af5:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_d9 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_100379b31;
      }
      QArrayData::deallocate(local_100,2,8);
    }
  }
LAB_100379b31:
  if (local_ec == -1) goto LAB_100379dcd;
  lVar13 = *(long *)(param_1 + 0x38);
  iVar2 = *(int *)(lVar13 + 0x4c);
  if (local_ec == iVar2) goto LAB_100379dcd;
  *(int *)(lVar13 + 0x4c) = local_ec;
  local_104 = iVar2;
  MacUtils::getActiveMonitorEDIDs();
  uVar10 = MacUtils::cgDisplayIdByScreenNumber(local_ec);
  if ((*(int *)(local_118 + 0x14) != 0) && (*(uint *)(local_118 + 0x20) != 0)) {
    for (p_Var12 = *(_func_void_Node_ptr **)
                    (*(long *)(local_118 + 8) +
                    ((ulong)(*(uint *)(local_118 + 0x24) ^ uVar10) %
                    (ulong)*(uint *)(local_118 + 0x20)) * 8); p_Var12 != local_118;
        p_Var12 = *(_func_void_Node_ptr **)p_Var12) {
      if ((*(uint *)(p_Var12 + 8) == (*(uint *)(local_118 + 0x24) ^ uVar10)) &&
         (uVar10 == *(uint *)(p_Var12 + 0xc))) {
        if (p_Var12 != local_118) {
          local_110 = *(QArrayData **)(p_Var12 + 0x10);
          if (1 < *(int *)local_110 + 1U) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + 1;
            local_d9 = *(int *)local_110 != 0;
            UNLOCK();
          }
          goto LAB_100379bf6;
        }
        break;
      }
    }
  }
  local_110 = (QArrayData *)PTR_shared_null_1021e1288;
LAB_100379bf6:
  QByteArray::operator=((QByteArray *)(lVar13 + 0x50),(QByteArray *)&local_110);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_d9 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100379c41;
    }
    QArrayData::deallocate(local_110,1,8);
  }
LAB_100379c41:
  if (*(int *)(local_118 + 0x10) != -1) {
    if (*(int *)(local_118 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_118 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_d9 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_100379c7c;
    }
    QHashData::free_helper(local_118);
  }
LAB_100379c7c:
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = &local_104;
  local_d0 = "int";
  local_40 = &local_ec;
  local_38 = "int";
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 0x38),"onMovedInFullscreenToOtherScreen",2,0,0);
LAB_100379dcd:
  if (*(int *)(local_e8 + 0x10) != -1) {
    if (*(int *)(local_e8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_e8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_d9 = 0;
    }
    QHashData::free_helper(local_e8);
  }
  return;
}

