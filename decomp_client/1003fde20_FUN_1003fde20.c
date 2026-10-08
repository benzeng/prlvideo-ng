
void FUN_1003fde20(undefined8 param_1,undefined8 param_2,long param_3)

{
  QString *pQVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QString local_b8;
  int local_b0;
  QString local_a8;
  QArrayData *local_a0;
  undefined2 local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  uint local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  lVar5 = CPrlFileDevSelectorWidget::getFileDevSelector();
  local_40 = *(Data **)(lVar5 + 0x30);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar6 = (long)*(int *)(local_40 + 8);
      lVar5 = *(long *)(lVar5 + 0x30);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_40 + lVar6 * 8) &&
         (lVar8 = *(int *)(local_40 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar6 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  lVar5 = CPrlFileDevSelectorWidget::getFileDevSelector();
  local_48 = *(Data **)(lVar5 + 0x38);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar6 = (long)*(int *)(local_48 + 8);
      lVar5 = *(long *)(lVar5 + 0x38);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_48 + lVar6 * 8) &&
         (lVar8 = *(int *)(local_48 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar6 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  FUN_10041d480(&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fdf4b;
    }
    QListData::dispose(local_48);
  }
LAB_1003fdf4b:
  lVar5 = CPrlFileDevSelectorWidget::getFileDevSelector();
  local_50 = *(Data **)(lVar5 + 0x40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar6 = (long)*(int *)(local_50 + 8);
      lVar5 = *(long *)(lVar5 + 0x40);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_50 + lVar6 * 8) &&
         (lVar8 = *(int *)(local_50 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar6 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  FUN_10041d480(&local_40,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fdfeb;
    }
    QListData::dispose(local_50);
  }
LAB_1003fdfeb:
  local_70 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_70);
      lVar5 = (long)*(int *)(local_70 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_70 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_70 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar5 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      pQVar1 = *(QString **)local_68;
      FUN_10041a130(&local_90,param_3 + 8);
      local_88 = local_90 + (long)local_90[2] * 2 + 4;
      local_80 = local_90 + (long)local_90[3] * 2 + 4;
      local_78 = 1;
      if (local_90[2] != local_90[3]) {
        do {
          piVar2 = *(int **)local_88;
          local_a8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(piVar2 + 2);
          if (1 < *(int *)local_a8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
          }
          local_b0 = *piVar2;
          local_a0 = *(QArrayData **)(piVar2 + 4);
          if (1 < *(int *)local_a0 + 1U) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + 1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
          }
          local_98 = (undefined2)piVar2[6];
          if (local_78 != 0) {
            iVar4 = CPrlFileDevSelectorItem::getType();
            if (iVar4 == local_b0) {
              CPrlFileDevSelectorItem::getSystemName();
              cVar3 = operator==(&local_b8,&local_a8);
              if (cVar3 == '\0') {
                bVar9 = false;
              }
              else {
                bVar9 = (char)local_98 != '\0';
              }
              if (*(int *)local_b8.field0_0x0 != -1) {
                if (*(int *)local_b8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                  local_31 = *(int *)local_b8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003fe1c8;
                }
                QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
              }
LAB_1003fe1c8:
              if (bVar9) {
                QAction::setEnabled(SUB81(pQVar1,0));
                CPrlFileDevSelectorItem::getUserFriendlyName();
                QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,0x1df33d3);
                local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c8;
                if (1 < *(int *)local_c8 + 1U) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + 1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                }
                QString::append(&local_c0);
                QAction::setToolTip(pQVar1);
                if (*(int *)local_c0.field0_0x0 != -1) {
                  if (*(int *)local_c0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                    local_31 = *(int *)local_c0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003fe273;
                  }
                  QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
                }
LAB_1003fe273:
                if (*(int *)local_d0 != -1) {
                  if (*(int *)local_d0 != 0) {
                    LOCK();
                    *(int *)local_d0 = *(int *)local_d0 + -1;
                    local_31 = *(int *)local_d0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003fe2a9;
                  }
                  QArrayData::deallocate(local_d0,2,8);
                }
LAB_1003fe2a9:
                if (*(int *)local_c8 != -1) {
                  if (*(int *)local_c8 != 0) {
                    LOCK();
                    *(int *)local_c8 = *(int *)local_c8 + -1;
                    local_31 = *(int *)local_c8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003fe2e0;
                  }
                  QArrayData::deallocate(local_c8,2,8);
                }
              }
            }
LAB_1003fe2e0:
            local_78 = 0;
          }
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fe31d;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1003fe31d:
          if (*(int *)local_a8.field0_0x0 != -1) {
            if (*(int *)local_a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
              local_31 = *(int *)local_a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003fe353;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
          }
LAB_1003fe353:
          local_88 = local_88 + 2;
          uVar7 = local_78 ^ 1;
          bVar9 = local_78 != 1;
          local_78 = uVar7;
        } while ((bVar9) && (local_88 != local_80));
      }
      if (*local_90 != -1) {
        if (*local_90 != 0) {
          LOCK();
          *local_90 = *local_90 + -1;
          local_31 = *local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003fe3ac;
        }
        FUN_10041a960(&local_90,local_90);
      }
LAB_1003fe3ac:
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fe3ef;
    }
    QListData::dispose(local_70);
  }
LAB_1003fe3ef:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

