
void FUN_100133e70(QWidget *param_1,char param_2)

{
  Data *pDVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  Data *pDVar5;
  long lVar6;
  QMenu *pQVar7;
  QMenu *this;
  undefined8 *puVar8;
  QMenu *this_00;
  long lVar9;
  int iVar10;
  QArrayData *local_138;
  QString local_130;
  QString local_128;
  QString local_120;
  uint local_114;
  Data *local_110;
  Data *local_108;
  Data *local_100;
  undefined4 local_f8;
  Data *local_f0;
  uint local_e4;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  undefined4 local_c8;
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  undefined4 local_98;
  QString local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  QArrayData *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  QMenu::clear();
  if (param_2 != '\0') {
    FUN_100135850(param_1,param_1);
    QMenu::addSeparator();
  }
  FUN_100129290(&local_88);
  pDVar1 = local_88;
  if (1 < *(uint *)local_88) {
    uVar2 = *(uint *)(local_88 + 8);
    pDVar5 = (Data *)QListData::detach((int)&local_88);
    lVar6 = (long)(int)*(uint *)(local_88 + 8);
    if ((pDVar1 + (long)(int)uVar2 * 8 + 0x10 != local_88 + lVar6 * 8 + 0x10) &&
       (lVar9 = (int)*(uint *)(local_88 + 0xc) - lVar6,
       lVar9 != 0 && lVar6 <= (int)*(uint *)(local_88 + 0xc))) {
      _memcpy(local_88 + lVar6 * 8 + 0x10,pDVar1 + (long)(int)uVar2 * 8 + 0x10,lVar9 * 8);
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        local_31 = *(int *)pDVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100133f22;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_100133f22:
  pDVar1 = local_88 + (long)(int)*(uint *)(local_88 + 8) * 8 + 0x10;
  if (1 < *(uint *)local_88) {
    pDVar5 = (Data *)QListData::detach((int)&local_88);
    lVar6 = (long)(int)*(uint *)(local_88 + 8);
    if ((pDVar1 != local_88 + lVar6 * 8 + 0x10) &&
       (lVar9 = (int)*(uint *)(local_88 + 0xc) - lVar6,
       lVar9 != 0 && lVar6 <= (int)*(uint *)(local_88 + 0xc))) {
      _memcpy(local_88 + lVar6 * 8 + 0x10,pDVar1,lVar9 * 8);
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        local_31 = *(int *)pDVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100133f8b;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_100133f8b:
  if (pDVar1 != local_88 + (long)(int)*(uint *)(local_88 + 0xc) * 8 + 0x10) {
    local_80 = local_88 + (long)(int)*(uint *)(local_88 + 0xc) * 8 + 0x10;
    local_78 = pDVar1;
    FUN_100137f70(&local_78,&local_80,pDVar1,FUN_100135a70);
  }
  pQVar7 = operator_new(0x10);
  EnumUtils::OsTypeToString((uint)&local_90);
  QAction::QAction((QAction *)pQVar7,&local_90,(QObject *)param_1);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100134022;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100134022:
  this = operator_new(0x30);
  QMenu::QMenu(this,param_1);
  QAction::setMenu(pQVar7);
  local_b0 = local_88;
  if (*(uint *)local_88 != 0xffffffff) {
    if (*(uint *)local_88 == 0) {
      QListData::detach((int)&local_b0);
      lVar6 = (long)(int)*(uint *)(local_b0 + 8);
      if ((local_88 + (long)(int)*(uint *)(local_88 + 8) * 8 != local_b0 + lVar6 * 8) &&
         (lVar9 = (int)*(uint *)(local_b0 + 0xc) - lVar6,
         lVar9 != 0 && lVar6 <= (int)*(uint *)(local_b0 + 0xc))) {
        _memcpy(local_b0 + lVar6 * 8 + 0x10,local_88 + (long)(int)*(uint *)(local_88 + 8) * 8 + 0x10
                ,lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(uint *)local_88 = *(uint *)local_88 + 1;
      local_31 = *(uint *)local_88 != 0;
      UNLOCK();
    }
  }
  local_a8 = local_b0 + (long)(int)*(uint *)(local_b0 + 8) * 8 + 0x10;
  local_a0 = local_b0 + (long)(int)*(uint *)(local_b0 + 0xc) * 8 + 0x10;
  if (*(uint *)(local_b0 + 8) != *(uint *)(local_b0 + 0xc)) {
    do {
      local_98 = 1;
      FUN_100129340(&local_b8,param_1 + 0x30,*(uint *)local_a8 & 0xff);
      local_c0 = (Data *)PTR_shared_null_1021e15e8;
      local_e0 = local_b8;
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 == 0) {
          QListData::detach((int)&local_e0);
          lVar6 = (long)*(int *)(local_e0 + 8);
          if ((local_b8 + (long)*(int *)(local_b8 + 8) * 8 != local_e0 + lVar6 * 8) &&
             (lVar9 = *(int *)(local_e0 + 0xc) - lVar6,
             lVar9 != 0 && lVar6 <= *(int *)(local_e0 + 0xc))) {
            _memcpy(local_e0 + lVar6 * 8 + 0x10,local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10,
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
      local_d8 = local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10;
      local_d0 = local_e0 + (long)*(int *)(local_e0 + 0xc) * 8 + 0x10;
      if (*(int *)(local_e0 + 8) != *(int *)(local_e0 + 0xc)) {
        do {
          local_c8 = 1;
          local_e4 = *(uint *)local_d8;
          cVar4 = EnumUtils::isOsVersionSupported(local_e4);
          if (cVar4 != '\0') {
            FUN_1000bf010(&local_c0,&local_e4);
          }
          local_d8 = local_d8 + 8;
        } while (local_d8 != local_d0);
      }
      local_c8 = 1;
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10013426d;
        }
        QListData::dispose(local_e0);
      }
LAB_10013426d:
      FUN_100135aa0(&local_f0);
      pDVar1 = local_f0;
      if (1 < *(uint *)local_f0) {
        uVar2 = *(uint *)(local_f0 + 8);
        pDVar5 = (Data *)QListData::detach((int)&local_f0);
        lVar6 = (long)(int)*(uint *)(local_f0 + 8);
        if ((pDVar1 + (long)(int)uVar2 * 8 + 0x10 != local_f0 + lVar6 * 8 + 0x10) &&
           (lVar9 = (int)*(uint *)(local_f0 + 0xc) - lVar6,
           lVar9 != 0 && lVar6 <= (int)*(uint *)(local_f0 + 0xc))) {
          _memcpy(local_f0 + lVar6 * 8 + 0x10,pDVar1 + (long)(int)uVar2 * 8 + 0x10,lVar9 * 8);
        }
        if (*(int *)pDVar5 != -1) {
          if (*(int *)pDVar5 != 0) {
            LOCK();
            *(int *)pDVar5 = *(int *)pDVar5 + -1;
            local_31 = *(int *)pDVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100134300;
          }
          QListData::dispose(pDVar5);
        }
      }
LAB_100134300:
      pDVar1 = local_f0 + (long)(int)*(uint *)(local_f0 + 8) * 8 + 0x10;
      if (1 < *(uint *)local_f0) {
        pDVar5 = (Data *)QListData::detach((int)&local_f0);
        lVar6 = (long)(int)*(uint *)(local_f0 + 8);
        if ((pDVar1 != local_f0 + lVar6 * 8 + 0x10) &&
           (lVar9 = (int)*(uint *)(local_f0 + 0xc) - lVar6,
           lVar9 != 0 && lVar6 <= (int)*(uint *)(local_f0 + 0xc))) {
          _memcpy(local_f0 + lVar6 * 8 + 0x10,pDVar1,lVar9 * 8);
        }
        if (*(int *)pDVar5 != -1) {
          if (*(int *)pDVar5 != 0) {
            LOCK();
            *(int *)pDVar5 = *(int *)pDVar5 + -1;
            local_31 = *(int *)pDVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100134380;
          }
          QListData::dispose(pDVar5);
        }
      }
LAB_100134380:
      if (pDVar1 != local_f0 + (long)(int)*(uint *)(local_f0 + 0xc) * 8 + 0x10) {
        local_70 = local_f0 + (long)(int)*(uint *)(local_f0 + 0xc) * 8 + 0x10;
        local_68 = pDVar1;
        FUN_100137f70(&local_68,&local_70,pDVar1,FUN_100135c90);
      }
      FUN_100135cc0(param_1,param_1,&local_f0,1);
      if (*(uint *)(local_f0 + 0xc) == *(uint *)(local_f0 + 8)) {
        bVar3 = false;
      }
      else {
        bVar3 = (int)(*(uint *)(local_f0 + 0xc) - *(uint *)(local_f0 + 8)) <
                (int)(*(uint *)(local_c0 + 0xc) - *(uint *)(local_c0 + 8));
      }
      local_110 = local_f0;
      if (*(uint *)local_f0 != 0xffffffff) {
        if (*(uint *)local_f0 == 0) {
          QListData::detach((int)&local_110);
          lVar6 = (long)(int)*(uint *)(local_110 + 8);
          if ((local_f0 + (long)(int)*(uint *)(local_f0 + 8) * 8 != local_110 + lVar6 * 8) &&
             (lVar9 = (int)*(uint *)(local_110 + 0xc) - lVar6,
             lVar9 != 0 && lVar6 <= (int)*(uint *)(local_110 + 0xc))) {
            _memcpy(local_110 + lVar6 * 8 + 0x10,
                    local_f0 + (long)(int)*(uint *)(local_f0 + 8) * 8 + 0x10,lVar9 * 8);
          }
        }
        else {
          LOCK();
          *(uint *)local_f0 = *(uint *)local_f0 + 1;
          local_31 = *(uint *)local_f0 != 0;
          UNLOCK();
        }
      }
      local_108 = local_110 + (long)(int)*(uint *)(local_110 + 8) * 8 + 0x10;
      local_100 = local_110 + (long)(int)*(uint *)(local_110 + 0xc) * 8 + 0x10;
      if (*(uint *)(local_110 + 8) != *(uint *)(local_110 + 0xc)) {
        do {
          local_f8 = 1;
          local_114 = *(uint *)local_108;
          FUN_1001376d0(&local_c0,&local_114);
          local_108 = local_108 + 8;
        } while (local_108 != local_100);
      }
      local_f8 = 1;
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100134514;
        }
        QListData::dispose(local_110);
      }
LAB_100134514:
      pDVar1 = local_c0;
      iVar10 = (int)&local_c0;
      if (bVar3) {
        if (1 < *(uint *)local_c0) {
          uVar2 = *(uint *)(local_c0 + 8);
          pDVar5 = (Data *)QListData::detach(iVar10);
          pDVar1 = pDVar1 + (long)(int)uVar2 * 8 + 0x10;
          lVar6 = (long)(int)*(uint *)(local_c0 + 8);
          if ((pDVar1 != local_c0 + lVar6 * 8 + 0x10) &&
             (lVar9 = (int)*(uint *)(local_c0 + 0xc) - lVar6,
             lVar9 != 0 && lVar6 <= (int)*(uint *)(local_c0 + 0xc))) {
            _memcpy(local_c0 + lVar6 * 8 + 0x10,pDVar1,lVar9 * 8);
          }
          if (*(int *)pDVar5 != -1) {
            if (*(int *)pDVar5 != 0) {
              LOCK();
              *(int *)pDVar5 = *(int *)pDVar5 + -1;
              local_31 = *(int *)pDVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100134590;
            }
            QListData::dispose(pDVar5);
          }
        }
LAB_100134590:
        pDVar1 = local_c0 + (long)(int)*(uint *)(local_c0 + 8) * 8 + 0x10;
        if (1 < *(uint *)local_c0) {
          pDVar5 = (Data *)QListData::detach(iVar10);
          lVar6 = (long)(int)*(uint *)(local_c0 + 8);
          if ((pDVar1 != local_c0 + lVar6 * 8 + 0x10) &&
             (lVar9 = (int)*(uint *)(local_c0 + 0xc) - lVar6,
             lVar9 != 0 && lVar6 <= (int)*(uint *)(local_c0 + 0xc))) {
            _memcpy(local_c0 + lVar6 * 8 + 0x10,pDVar1,lVar9 * 8);
          }
          if (*(int *)pDVar5 != -1) {
            if (*(int *)pDVar5 != 0) {
              LOCK();
              *(int *)pDVar5 = *(int *)pDVar5 + -1;
              local_31 = *(int *)pDVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100134610;
            }
            QListData::dispose(pDVar5);
          }
        }
LAB_100134610:
        if (pDVar1 != local_c0 + (long)(int)*(uint *)(local_c0 + 0xc) * 8 + 0x10) {
          local_60 = local_c0 + (long)(int)*(uint *)(local_c0 + 0xc) * 8 + 0x10;
          local_58 = pDVar1;
          FUN_100137f70(&local_58,&local_60,pDVar1,FUN_100135c90);
        }
        pQVar7 = operator_new(0x10);
        QMetaObject::tr((char *)&local_130,PTR_staticMetaObject_1021e1520,0x1dc0d50);
        QString::fromUtf8_helper((char *)&local_50,0x1e31adc);
        puVar8 = (undefined8 *)QString::append(&local_130);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001346d9;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1001346d9:
        EnumUtils::OsTypeToString((uint)&local_138);
        local_128.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar8;
        if (1 < *(int *)local_128.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + 1;
          local_31 = *(int *)local_128.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_128);
        FUN_100137810(&local_120,&local_128,PTR_s__10226d698);
        QAction::QAction((QAction *)pQVar7,&local_120,(QObject *)param_1);
        if (*(int *)local_120.field0_0x0 != -1) {
          if (*(int *)local_120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
            local_31 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100134781;
          }
          QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
        }
LAB_100134781:
        if (*(int *)local_128.field0_0x0 != -1) {
          if (*(int *)local_128.field0_0x0 != 0) {
            LOCK();
            *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
            local_31 = *(int *)local_128.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001347b7;
          }
          QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
        }
LAB_1001347b7:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001347f0;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_1001347f0:
        if (*(int *)local_130.field0_0x0 != -1) {
          if (*(int *)local_130.field0_0x0 != 0) {
            LOCK();
            *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
            local_31 = *(int *)local_130.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100134826;
          }
          QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
        }
LAB_100134826:
        this_00 = operator_new(0x30);
        QMenu::QMenu(this_00,param_1);
        QAction::setMenu(pQVar7);
        FUN_100135cc0(param_1,this_00,&local_c0,0);
        QWidget::addAction((QAction *)param_1);
      }
      else {
        if (1 < *(uint *)local_c0) {
          uVar2 = *(uint *)(local_c0 + 8);
          pDVar5 = (Data *)QListData::detach(iVar10);
          pDVar1 = pDVar1 + (long)(int)uVar2 * 8 + 0x10;
          lVar6 = (long)(int)*(uint *)(local_c0 + 8);
          if ((pDVar1 != local_c0 + lVar6 * 8 + 0x10) &&
             (lVar9 = (int)*(uint *)(local_c0 + 0xc) - lVar6,
             lVar9 != 0 && lVar6 <= (int)*(uint *)(local_c0 + 0xc))) {
            _memcpy(local_c0 + lVar6 * 8 + 0x10,pDVar1,lVar9 * 8);
          }
          if (*(int *)pDVar5 != -1) {
            if (*(int *)pDVar5 != 0) {
              LOCK();
              *(int *)pDVar5 = *(int *)pDVar5 + -1;
              local_31 = *(int *)pDVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001348f0;
            }
            QListData::dispose(pDVar5);
          }
        }
LAB_1001348f0:
        pDVar1 = local_c0 + (long)(int)*(uint *)(local_c0 + 8) * 8 + 0x10;
        if (1 < *(uint *)local_c0) {
          pDVar5 = (Data *)QListData::detach(iVar10);
          lVar6 = (long)(int)*(uint *)(local_c0 + 8);
          if ((pDVar1 != local_c0 + lVar6 * 8 + 0x10) &&
             (lVar9 = (int)*(uint *)(local_c0 + 0xc) - lVar6,
             lVar9 != 0 && lVar6 <= (int)*(uint *)(local_c0 + 0xc))) {
            _memcpy(local_c0 + lVar6 * 8 + 0x10,pDVar1,lVar9 * 8);
          }
          if (*(int *)pDVar5 != -1) {
            if (*(int *)pDVar5 != 0) {
              LOCK();
              *(int *)pDVar5 = *(int *)pDVar5 + -1;
              local_31 = *(int *)pDVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100134960;
            }
            QListData::dispose(pDVar5);
          }
        }
LAB_100134960:
        if (pDVar1 != local_c0 + (long)(int)*(uint *)(local_c0 + 0xc) * 8 + 0x10) {
          local_48 = local_c0 + (long)(int)*(uint *)(local_c0 + 0xc) * 8 + 0x10;
          local_40 = pDVar1;
          FUN_100137f70(&local_40,&local_48,pDVar1,FUN_100135c90);
        }
        FUN_100135cc0(param_1,this,&local_c0,0);
        QMenu::addSeparator();
      }
      QMenu::addSeparator();
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001349f7;
        }
        QListData::dispose(local_f0);
      }
LAB_1001349f7:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100134a23;
        }
        QListData::dispose(local_c0);
      }
LAB_100134a23:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100134a4f;
        }
        QListData::dispose(local_b8);
      }
LAB_100134a4f:
      local_a8 = local_a8 + 8;
    } while (local_a8 != local_a0);
  }
  local_98 = 1;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100134ab2;
    }
    QListData::dispose(local_b0);
  }
LAB_100134ab2:
  QWidget::addAction((QAction *)param_1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_88);
  }
  return;
}

