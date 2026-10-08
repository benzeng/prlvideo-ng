
void FUN_1003c22d0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
                  QString *param_5,undefined8 *param_6,char param_7)

{
  QArrayData *pQVar1;
  QString *pQVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  QArrayData *local_100;
  QString local_f8;
  Data *local_f0;
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  uint local_d0;
  QArrayData *local_c8;
  QString local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  uint local_98;
  QArrayData *local_90;
  QString local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  uint local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar4 = FileDevSelectorHelpers::getDeviceItemType(param_3,param_4);
  if (param_7 == '\0') {
    CPrlFileDevSelectorWidget::getFileDevSelector();
    CPrlFileDevSelector::setCurrentItemDisconnected();
  }
  else {
    pQVar1 = (QArrayData *)param_5->field0_0x0;
    if (*(int *)(pQVar1 + 4) == 0) {
      uVar5 = CPrlFileDevSelectorWidget::getCurrentItemType();
      CPrlFileDevSelectorWidget::getCurrentSystemName();
      CPrlFileDevSelectorWidget::getCurrentUserFriendlyName();
      CPrlFileDevSelectorWidget::setCurrentItem(param_2,uVar5,&local_40,&local_48,0);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c243f;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1003c243f:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          iVar6 = *(int *)local_40;
          UNLOCK();
          goto joined_r0x0001003c245d;
        }
        goto LAB_1003c2463;
      }
    }
    else {
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      local_58 = (QArrayData *)*param_6;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      local_50 = pQVar1;
      CPrlFileDevSelectorWidget::setCurrentItem(param_2,iVar4,&local_50,&local_58,0);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c238c;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1003c238c:
      if (*(int *)local_50 != -1) {
        local_40 = local_50;
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          iVar6 = *(int *)local_50;
          UNLOCK();
joined_r0x0001003c245d:
          local_31 = iVar6 != 0;
          if ((bool)local_31) goto LAB_1003c2472;
        }
LAB_1003c2463:
        QArrayData::deallocate(local_40,2,8);
      }
    }
  }
LAB_1003c2472:
  lVar8 = CPrlFileDevSelectorWidget::getFileDevSelector();
  local_80 = *(Data **)(lVar8 + 0x30);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_80);
      lVar9 = (long)*(int *)(local_80 + 8);
      lVar8 = *(long *)(lVar8 + 0x30);
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_80 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_80 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_80 + 0xc))) {
        _memcpy(local_80 + lVar9 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_78);
      lVar8 = (long)*(int *)(local_78 + 8);
      if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_78 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_78 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar8 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)local_80 == -1) {
LAB_1003c25a3:
    if (local_70 != local_68) {
      do {
        if (local_60 == 0) {
LAB_1003c26a7:
          local_70 = local_70 + 8;
          local_60 = 1;
        }
        else {
          pQVar2 = *(QString **)local_70;
          iVar6 = CPrlFileDevSelectorItem::getType();
          if (iVar6 != iVar4) goto LAB_1003c26a7;
          CPrlFileDevSelectorItem::getSystemName();
          cVar3 = operator==(&local_88,param_5);
          if (*(int *)local_88.field0_0x0 != -1) {
            if (*(int *)local_88.field0_0x0 != 0) {
              LOCK();
              *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
              local_31 = *(int *)local_88.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c2625;
            }
            QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
          }
LAB_1003c2625:
          if (cVar3 == '\0') goto LAB_1003c26a7;
          QAction::setEnabled(SUB81(pQVar2,0));
          CPrlFileDevSelectorItem::getUserFriendlyName();
          QAction::setToolTip(pQVar2);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c268b;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_1003c268b:
          if ((param_3 == 5) || (param_3 == 0xb)) goto LAB_1003c26a7;
          local_70 = local_70 + 8;
          uVar7 = local_60 ^ 1;
          bVar11 = local_60 == 1;
          local_60 = uVar7;
          if (bVar11) break;
        }
      } while (local_70 != local_68);
    }
  }
  else {
    if (*(int *)local_80 == 0) {
LAB_1003c2593:
      QListData::dispose(local_80);
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003c2593;
    }
    if (local_60 != 0) goto LAB_1003c25a3;
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c2714;
    }
    QListData::dispose(local_78);
  }
LAB_1003c2714:
  lVar8 = CPrlFileDevSelectorWidget::getFileDevSelector();
  local_b8 = *(Data **)(lVar8 + 0x38);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 == 0) {
      QListData::detach((int)&local_b8);
      lVar9 = (long)*(int *)(local_b8 + 8);
      lVar8 = *(long *)(lVar8 + 0x38);
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_b8 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_b8 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_b8 + 0xc))) {
        _memcpy(local_b8 + lVar9 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
    }
  }
  local_b0 = local_b8;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 == 0) {
      QListData::detach((int)&local_b0);
      lVar8 = (long)*(int *)(local_b0 + 8);
      if ((local_b8 + (long)*(int *)(local_b8 + 8) * 8 != local_b0 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_b0 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_b0 + 0xc))
         ) {
        _memcpy(local_b0 + lVar8 * 8 + 0x10,local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
    }
  }
  local_a8 = local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10;
  local_a0 = local_b0 + (long)*(int *)(local_b0 + 0xc) * 8 + 0x10;
  local_98 = 1;
  if (*(int *)local_b8 == -1) {
LAB_1003c286b:
    do {
      if (local_a8 == local_a0) break;
      if (local_98 == 0) goto LAB_1003c296a;
      pQVar2 = *(QString **)local_a8;
      iVar6 = CPrlFileDevSelectorItem::getType();
      if (iVar6 == iVar4) {
        CPrlFileDevSelectorItem::getSystemName();
        cVar3 = operator==(&local_c0,param_5);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c28f8;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
LAB_1003c28f8:
        if (cVar3 == '\0') goto LAB_1003c2960;
        QAction::setEnabled(SUB81(pQVar2,0));
        CPrlFileDevSelectorItem::getUserFriendlyName();
        QAction::setToolTip(pQVar2);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c296a;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
      }
      else {
LAB_1003c2960:
        local_98 = 0;
      }
LAB_1003c296a:
      local_a8 = local_a8 + 8;
      uVar7 = local_98 ^ 1;
      bVar11 = local_98 != 1;
      local_98 = uVar7;
    } while (bVar11);
  }
  else {
    if (*(int *)local_b8 == 0) {
LAB_1003c2858:
      QListData::dispose(local_b8);
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003c2858;
    }
    if (local_98 != 0) goto LAB_1003c286b;
  }
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c29c9;
    }
    QListData::dispose(local_b0);
  }
LAB_1003c29c9:
  lVar8 = CPrlFileDevSelectorWidget::getFileDevSelector();
  local_f0 = *(Data **)(lVar8 + 0x40);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 == 0) {
      QListData::detach((int)&local_f0);
      lVar9 = (long)*(int *)(local_f0 + 8);
      lVar8 = *(long *)(lVar8 + 0x40);
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_f0 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_f0 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_f0 + 0xc))) {
        _memcpy(local_f0 + lVar9 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + 1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
    }
  }
  local_e8 = local_f0;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 == 0) {
      QListData::detach((int)&local_e8);
      lVar8 = (long)*(int *)(local_e8 + 8);
      if ((local_f0 + (long)*(int *)(local_f0 + 8) * 8 != local_e8 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_e8 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_e8 + 0xc))
         ) {
        _memcpy(local_e8 + lVar8 * 8 + 0x10,local_f0 + (long)*(int *)(local_f0 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + 1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
    }
  }
  local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
  local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
  local_d0 = 1;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 == 0) {
LAB_1003c2b0d:
      QListData::dispose(local_f0);
    }
    else {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003c2b0d;
    }
    if (local_d0 == 0) goto LAB_1003c2c46;
  }
  do {
    if (local_e0 == local_d8) break;
    if (local_d0 == 0) goto LAB_1003c2c1a;
    pQVar2 = *(QString **)local_e0;
    iVar6 = CPrlFileDevSelectorItem::getType();
    if (iVar6 == iVar4) {
      CPrlFileDevSelectorItem::getSystemName();
      cVar3 = operator==(&local_f8,param_5);
      if (*(int *)local_f8.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          local_31 = *(int *)local_f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c2ba8;
        }
        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
      }
LAB_1003c2ba8:
      if (cVar3 == '\0') goto LAB_1003c2c10;
      QAction::setEnabled(SUB81(pQVar2,0));
      CPrlFileDevSelectorItem::getUserFriendlyName();
      QAction::setToolTip(pQVar2);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c2c1a;
        }
        QArrayData::deallocate(local_100,2,8);
      }
    }
    else {
LAB_1003c2c10:
      local_d0 = 0;
    }
LAB_1003c2c1a:
    local_e0 = local_e0 + 8;
    uVar7 = local_d0 ^ 1;
    bVar11 = local_d0 != 1;
    local_d0 = uVar7;
  } while (bVar11);
LAB_1003c2c46:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_e8);
  }
  return;
}

