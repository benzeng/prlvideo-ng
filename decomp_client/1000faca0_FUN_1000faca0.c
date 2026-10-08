
void FUN_1000faca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  QMenu *pQVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  QKeySequence local_130 [8];
  QString local_128;
  QString local_120;
  QKeySequence local_118 [8];
  QArrayData *local_110;
  undefined4 local_104;
  Data *local_100;
  Data *local_f8;
  Data *local_f0;
  Data *local_e8;
  int local_e0;
  int local_d4;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  int local_90;
  QKeySequence local_88 [8];
  QArrayData *local_80;
  QKeySequence local_78 [8];
  QArrayData *local_70;
  QKeySequence local_68 [8];
  QArrayData *local_60;
  QKeySequence local_58 [8];
  QArrayData *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar6,param_1 + 0x10);
  if (lVar7 == 0) {
    return;
  }
  local_48 = 0x100000010;
  FUN_10018c2b0(lVar7);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar3 = CVmCommonOptions::getOsVersion();
  if ((uVar3 & 0xfffffffd) == 0x80c) {
    local_40 = 0x300100003001;
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Power_User_Menu____10226d578);
    QKeySequence::QKeySequence(local_58);
    FUN_1000f9b40(param_2,&local_50,&local_48,1,0x441,0,0,local_58);
    QKeySequence::~QKeySequence(local_58);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000fadb8;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1000fadb8:
    local_40 = CONCAT44(0x10,(undefined4)local_40);
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
    QKeySequence::QKeySequence(local_68);
    FUN_1000f9b40(param_2,&local_60,&local_48,1,0x203,0,0,local_68);
    QKeySequence::~QKeySequence(local_68);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000fae48;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1000fae48:
  local_40 = 0x4200003002;
  uVar6 = FUN_1006915d0();
  FUN_100691620(uVar6,0x42,lVar7);
  QAction::text();
  QKeySequence::QKeySequence(local_78);
  FUN_1000f9b40(param_2,&local_70,&local_48,1,0x441,0,0,local_78);
  QKeySequence::~QKeySequence(local_78);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000faeec;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000faeec:
  local_40 = CONCAT44(0x10,(undefined4)local_40);
  local_80 = (QArrayData *)PTR_shared_null_1021e1288;
  QKeySequence::QKeySequence(local_88);
  FUN_1000f9b40(param_2,&local_80,&local_48,1,0x203,0,0,local_88);
  QKeySequence::~QKeySequence(local_88);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000faf73;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1000faf73:
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    QObject::deleteLater();
  }
  pQVar8 = operator_new(0x30);
  QMenu::QMenu(pQVar8,(QWidget *)0x0);
  piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar8);
  piVar10 = *(int **)(param_1 + 0x28);
  if (piVar10 != piVar9) {
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      piVar10 = *(int **)(param_1 + 0x28);
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_31 = *piVar10 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar9;
    *(QMenu **)(param_1 + 0x30) = pQVar8;
  }
  if (piVar9 != (int *)0x0) {
    LOCK();
    *piVar9 = *piVar9 + -1;
    local_31 = *piVar9 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar9);
    }
  }
  uVar6 = FUN_1006b9420();
  FUN_1006b96e0(&local_b0,uVar6);
  local_a8 = local_b0;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 == 0) {
      QListData::detach((int)&local_a8);
      lVar12 = (long)*(int *)(local_a8 + 8);
      if ((local_b0 + (long)*(int *)(local_b0 + 8) * 8 != local_a8 + lVar12 * 8) &&
         (lVar13 = *(int *)(local_a8 + 0xc) - lVar12,
         lVar13 != 0 && lVar12 <= *(int *)(local_a8 + 0xc))) {
        _memcpy(local_a8 + lVar12 * 8 + 0x10,local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10,
                lVar13 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + 1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
  local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
  local_90 = 1;
  if (*(int *)local_b0 == -1) {
LAB_1000fb10d:
    if (local_a0 != local_98) {
      do {
        uVar4 = FUN_1006947d0(*(undefined8 *)local_a0);
        uVar6 = FUN_1006915d0();
        lVar12 = FUN_100691620(uVar6,uVar4,lVar7);
        if (lVar12 == 0) {
          if (3 < DAT_10230ffd0) {
            FUN_1006946e0(&local_c0,uVar4);
            QString::toUtf8();
            FUN_100df99c0("STUBMENU","prl_client_app",4,"Can\'t find action for %s.",
                          local_b8 + *(long *)(local_b8 + 0x10));
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000fb293;
              }
              QArrayData::deallocate(local_b8,1,8);
            }
LAB_1000fb293:
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000fb2d0;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
          }
        }
        else {
          QObject::property((char *)&local_d0);
          cVar2 = QVariant::toBool();
          QVariant::~QVariant(&local_d0);
          if (cVar2 == '\0') {
            uVar11 = FUN_1006e1350();
            uVar6 = 0;
            if ((*(long *)(param_1 + 0x28) != 0) &&
               (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
              uVar6 = *(undefined8 *)(param_1 + 0x30);
            }
            FUN_1006e1670(uVar11,lVar12,uVar6,lVar7,1);
            pQVar8 = (QMenu *)0x0;
            if ((*(long *)(param_1 + 0x28) != 0) &&
               (pQVar8 = (QMenu *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
              pQVar8 = *(QMenu **)(param_1 + 0x30);
            }
            QMenu::addMenu(pQVar8);
          }
        }
LAB_1000fb2d0:
        local_a0 = local_a0 + 8;
        local_90 = 1;
      } while (local_a0 != local_98);
    }
  }
  else {
    if (*(int *)local_b0 == 0) {
LAB_1000fb0fb:
      QListData::dispose(local_b0);
    }
    else {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1000fb0fb;
    }
    if (local_90 != 0) goto LAB_1000fb10d;
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb325;
    }
    QListData::dispose(local_a8);
  }
LAB_1000fb325:
  local_d4 = 0x1000;
  FUN_1000fe170(param_1 + 0x38);
  FUN_1000fe2e0(&DAT_102312080);
  QWidget::actions();
  local_f8 = local_100;
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 == 0) {
      QListData::detach((int)&local_f8);
      lVar12 = (long)*(int *)(local_f8 + 8);
      if ((local_100 + (long)*(int *)(local_100 + 8) * 8 != local_f8 + lVar12 * 8) &&
         (lVar13 = *(int *)(local_f8 + 0xc) - lVar12,
         lVar13 != 0 && lVar12 <= *(int *)(local_f8 + 0xc))) {
        _memcpy(local_f8 + lVar12 * 8 + 0x10,local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10,
                lVar13 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
    }
  }
  local_f0 = local_f8 + (long)*(int *)(local_f8 + 8) * 8 + 0x10;
  local_e8 = local_f8 + (long)*(int *)(local_f8 + 0xc) * 8 + 0x10;
  local_e0 = 1;
  if (*(int *)local_100 == -1) {
LAB_1000fb442:
    if (local_f0 != local_e8) {
      do {
        uVar6 = *(undefined8 *)local_f0;
        iVar5 = FUN_1006947d0(uVar6);
        uVar4 = 1;
        if (iVar5 - 5U < 8) {
          uVar4 = *(undefined4 *)(&DAT_100e14ad0 + (long)(int)(iVar5 - 5U) * 4);
        }
        local_104 = 0;
        FUN_1000fa230(param_1,uVar6,param_2,&local_d4,0,uVar4,&local_104);
        local_f0 = local_f0 + 8;
        local_e0 = 1;
      } while (local_f0 != local_e8);
    }
  }
  else {
    if (*(int *)local_100 == 0) {
LAB_1000fb430:
      QListData::dispose(local_100);
    }
    else {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1000fb430;
    }
    if (local_e0 != 0) goto LAB_1000fb442;
  }
  puVar1 = PTR_shared_null_1021e1288;
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb51b;
    }
    QListData::dispose(local_f8);
  }
LAB_1000fb51b:
  local_110 = (QArrayData *)puVar1;
  QKeySequence::QKeySequence(local_118);
  FUN_1000f9b40(param_2,&local_110,&local_48,1,0x803,0,0,local_118);
  QKeySequence::~QKeySequence(local_118);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fb5ac;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1000fb5ac:
  local_40 = CONCAT44(local_40._4_4_,local_d4);
  local_d4 = local_d4 + 1;
  QMetaObject::tr((char *)&local_120,PTR_staticMetaObject_1021e1520,(int)PTR_s_Configure_10226e2c0);
  uVar6 = FUN_1006915d0();
  lVar7 = FUN_100691620(uVar6,0x3e,lVar7);
  if (lVar7 != 0) {
    QAction::text();
    QString::operator=(&local_120,&local_128);
    if (*(int *)local_128.field0_0x0 != -1) {
      if (*(int *)local_128.field0_0x0 != 0) {
        LOCK();
        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
        local_31 = *(int *)local_128.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000fb655;
      }
      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
    }
  }
LAB_1000fb655:
  QKeySequence::QKeySequence(local_130);
  FUN_1000f9b40(param_2,&local_120,&local_48,1,0x204,0x1000,0,local_130);
  QKeySequence::~QKeySequence(local_130);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_120.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
  return;
}

