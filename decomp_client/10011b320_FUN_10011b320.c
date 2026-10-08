
undefined8 * FUN_10011b320(undefined8 *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int extraout_var;
  _func_void_Node_ptr *p_Var6;
  int extraout_EDX;
  int extraout_var_00;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  int local_58;
  _func_void_Node_ptr *local_50;
  QString local_48;
  Data *local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  MacUtils::getHiDPIDisplays();
  iVar4 = *(int *)(local_40 + 0xc);
  iVar8 = *(int *)(local_40 + 8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011b37c;
    }
    QListData::dispose(local_40);
  }
LAB_10011b37c:
  if (iVar4 == iVar8) {
    lVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12e8);
    if (lVar5 == 0) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",3,"this function must be used only for gui applictions");
      }
      *param_1 = puVar3;
      goto LAB_10011bb7e;
    }
    lVar5 = QApplication::desktop();
    if (lVar5 == 0) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",3,"desktop widget is NULL");
      }
      *param_1 = local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      goto LAB_10011bb7e;
    }
    for (lVar7 = 0; iVar4 = QDesktopWidget::numScreens(), lVar7 < iVar4; lVar7 = lVar7 + 1) {
      local_d0 = (QArrayData *)QString::fromAscii_helper("%1%2:%3:%4,%5\n",0xe);
      local_d8 = (QArrayData *)QString::fromAscii_helper("Display",7);
      QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
      QString::arg(&local_c0,&local_c8,lVar7,0,10,0x20);
      local_e0 = (QArrayData *)QString::fromAscii_helper("Geometry",8);
      QString::arg(&local_b8,&local_c0,&local_e0,0,0x20);
      iVar4 = QDesktopWidget::screenGeometry((int)lVar5);
      QString::arg(&local_b0,&local_b8,(long)((extraout_EDX + 1) - iVar4),0,10,0x20);
      QDesktopWidget::screenGeometry((int)lVar5);
      QString::arg(&local_a8,&local_b0,(long)((extraout_var_00 + 1) - extraout_var),0,10,0x20);
      QString::append(&local_48);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011b530;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_10011b530:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011b566;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_10011b566:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011b59c;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_10011b59c:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011b5d2;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_10011b5d2:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011b608;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_10011b608:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011b63e;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_10011b63e:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011b674;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_10011b674:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011b3d0;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_10011b3d0:
    }
  }
  else {
    MacUtils::getDisplaySizes();
    FUN_1001299e0(&local_78,&local_50);
    local_70 = local_78;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 == 0) {
        QListData::detach((int)&local_70);
        lVar5 = (long)*(int *)(local_70 + 8);
        if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_70 + lVar5 * 8) &&
           (lVar7 = *(int *)(local_70 + 0xc) - lVar5,
           lVar7 != 0 && lVar5 <= *(int *)(local_70 + 0xc))) {
          _memcpy(local_70 + lVar5 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                  lVar7 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
    }
    local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
    local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
    local_58 = 1;
    if (*(int *)local_78 == -1) {
LAB_10011b7d0:
      if (local_68 != local_60) {
        iVar4 = 0;
        do {
          uVar2 = *(uint *)local_68;
          local_a0 = (QArrayData *)
                     QString::fromAscii_helper("Display%1:Geometry:%2,%3:Scale factor:%4\n",0x29);
          QString::arg(&local_98,&local_a0,(long)iVar4,0,10,0x20);
          iVar8 = -1;
          if ((*(int *)(local_50 + 0x14) != 0) && (*(uint *)(local_50 + 0x20) != 0)) {
            for (p_Var6 = *(_func_void_Node_ptr **)
                           (*(long *)(local_50 + 8) +
                           ((ulong)(*(uint *)(local_50 + 0x24) ^ uVar2) %
                           (ulong)*(uint *)(local_50 + 0x20)) * 8); p_Var6 != local_50;
                p_Var6 = *(_func_void_Node_ptr **)p_Var6) {
              if ((*(uint *)(p_Var6 + 8) == (*(uint *)(local_50 + 0x24) ^ uVar2)) &&
                 (uVar2 == *(uint *)(p_Var6 + 0xc))) {
                if (p_Var6 != local_50) {
                  iVar8 = (int)*(undefined8 *)(p_Var6 + 0x18);
                }
                break;
              }
            }
          }
          QString::arg(&local_90,&local_98,(long)iVar8,0,10,0x20);
          lVar5 = -1;
          if ((*(int *)(local_50 + 0x14) != 0) && (*(uint *)(local_50 + 0x20) != 0)) {
            for (p_Var6 = *(_func_void_Node_ptr **)
                           (*(long *)(local_50 + 8) +
                           ((ulong)(*(uint *)(local_50 + 0x24) ^ uVar2) %
                           (ulong)*(uint *)(local_50 + 0x20)) * 8); p_Var6 != local_50;
                p_Var6 = *(_func_void_Node_ptr **)p_Var6) {
              if ((*(uint *)(p_Var6 + 8) == (*(uint *)(local_50 + 0x24) ^ uVar2)) &&
                 (uVar2 == *(uint *)(p_Var6 + 0xc))) {
                if (p_Var6 != local_50) {
                  lVar5 = *(long *)(p_Var6 + 0x18);
                }
                break;
              }
            }
          }
          QString::arg(&local_88,&local_90,lVar5 >> 0x20,0,10,0x20);
          uVar9 = 0;
          if ((*(int *)(local_50 + 0x14) != 0) && (*(uint *)(local_50 + 0x20) != 0)) {
            for (p_Var6 = *(_func_void_Node_ptr **)
                           (*(long *)(local_50 + 8) +
                           ((ulong)(*(uint *)(local_50 + 0x24) ^ uVar2) %
                           (ulong)*(uint *)(local_50 + 0x20)) * 8); p_Var6 != local_50;
                p_Var6 = *(_func_void_Node_ptr **)p_Var6) {
              if ((*(uint *)(p_Var6 + 8) == (*(uint *)(local_50 + 0x24) ^ uVar2)) &&
                 (uVar2 == *(uint *)(p_Var6 + 0xc))) {
                if (p_Var6 != local_50) {
                  uVar9 = *(undefined8 *)(p_Var6 + 0x10);
                }
                break;
              }
            }
          }
          QString::arg(uVar9,&local_80,&local_88,0,0x67,0xffffffff,0x20);
          QString::append(&local_48);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10011b9ca;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_10011b9ca:
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10011b9fa;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_10011b9fa:
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10011ba30;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_10011ba30:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10011ba66;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_10011ba66:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10011ba9c;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_10011ba9c:
          iVar4 = iVar4 + 1;
          local_68 = local_68 + 8;
          local_58 = 1;
        } while (local_68 != local_60);
      }
    }
    else {
      if (*(int *)local_78 == 0) {
LAB_10011b7c1:
        QListData::dispose(local_78);
      }
      else {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_10011b7c1;
      }
      if (local_58 != 0) goto LAB_10011b7d0;
    }
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011bae2;
      }
      QListData::dispose(local_70);
    }
LAB_10011bae2:
    if (*(int *)(local_50 + 0x10) != -1) {
      if (*(int *)(local_50 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_50 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011bb11;
      }
      QHashData::free_helper(local_50);
    }
  }
LAB_10011bb11:
  *param_1 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
LAB_10011bb7e:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

