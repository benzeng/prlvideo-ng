
void FUN_1006588c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  QVariant local_140;
  QVariant local_130;
  Data *local_120;
  Data *local_118;
  Data *local_110;
  undefined4 local_108;
  Data *local_100;
  Data *local_f8;
  Data *local_f0;
  undefined4 local_e8;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  undefined4 local_c8;
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  undefined4 local_a8;
  QVariant local_a0;
  QVariant local_90;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100659330(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x98));
  iVar4 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"At work",
                     0xffffffff,1);
  if (iVar4 != 0) {
    iVar4 = QString::compare_helper
                      (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"At home"
                       ,0xffffffff,1);
    if (iVar4 != 0) {
      iVar4 = QString::compare_helper
                        (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                         "At school",0xffffffff,1);
      if (iVar4 != 0) goto LAB_10065911b;
      local_100 = *(Data **)(param_1 + 0xf8);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 == 0) {
          QListData::detach((int)&local_100);
          lVar7 = (long)*(int *)(local_100 + 8);
          lVar1 = *(long *)(param_1 + 0xf8);
          if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_100 + lVar7 * 8) &&
             (lVar8 = *(int *)(local_100 + 0xc) - lVar7,
             lVar8 != 0 && lVar7 <= *(int *)(local_100 + 0xc))) {
            _memcpy(local_100 + lVar7 * 8 + 0x10,
                    (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + 1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
        }
      }
      local_f8 = local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10;
      local_f0 = local_100 + (long)*(int *)(local_100 + 0xc) * 8 + 0x10;
      if (*(int *)(local_100 + 8) != *(int *)(local_100 + 0xc)) {
        do {
          local_e8 = 1;
          QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x48) + 0x10));
          QWidget::hide();
          local_f8 = local_f8 + 8;
        } while (local_f8 != local_f0);
      }
      local_e8 = 1;
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100658f7c;
        }
        QListData::dispose(local_100);
      }
LAB_100658f7c:
      local_120 = *(Data **)(param_1 + 0x100);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 == 0) {
          QListData::detach((int)&local_120);
          lVar7 = (long)*(int *)(local_120 + 8);
          lVar1 = *(long *)(param_1 + 0x100);
          if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_120 + lVar7 * 8) &&
             (lVar8 = *(int *)(local_120 + 0xc) - lVar7,
             lVar8 != 0 && lVar7 <= *(int *)(local_120 + 0xc))) {
            _memcpy(local_120 + lVar7 * 8 + 0x10,
                    (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + 1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
        }
      }
      local_118 = local_120 + (long)*(int *)(local_120 + 8) * 8 + 0x10;
      local_110 = local_120 + (long)*(int *)(local_120 + 0xc) * 8 + 0x10;
      if (*(int *)(local_120 + 8) != *(int *)(local_120 + 0xc)) {
        do {
          local_108 = 1;
          uVar2 = *(undefined8 *)local_118;
          uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
          QObject::property((char *)&local_130);
          uVar5 = QVariant::toInt((bool *)&local_130);
          QObject::property((char *)&local_140);
          uVar6 = QVariant::toInt((bool *)&local_140);
          QGridLayout::addWidget(uVar3,uVar2,uVar5,uVar6,1,1,0);
          QVariant::~QVariant(&local_140);
          QVariant::~QVariant(&local_130);
          QWidget::show();
          local_118 = local_118 + 8;
        } while (local_118 != local_110);
      }
      local_108 = 1;
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10065911b;
        }
        QListData::dispose(local_120);
      }
      goto LAB_10065911b;
    }
    local_c0 = *(Data **)(param_1 + 0x100);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 == 0) {
        QListData::detach((int)&local_c0);
        lVar7 = (long)*(int *)(local_c0 + 8);
        lVar1 = *(long *)(param_1 + 0x100);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_c0 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_c0 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_c0 + 0xc))) {
          _memcpy(local_c0 + lVar7 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + 1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
      }
    }
    local_b8 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
    local_b0 = local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_c0 + 8) != *(int *)(local_c0 + 0xc)) {
      do {
        local_a8 = 1;
        QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x48) + 0x10));
        QWidget::hide();
        local_b8 = local_b8 + 8;
      } while (local_b8 != local_b0);
    }
    local_a8 = 1;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100658d9c;
      }
      QListData::dispose(local_c0);
    }
LAB_100658d9c:
    local_e0 = *(Data **)(param_1 + 0xf8);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 == 0) {
        QListData::detach((int)&local_e0);
        lVar7 = (long)*(int *)(local_e0 + 8);
        lVar1 = *(long *)(param_1 + 0xf8);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_e0 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_e0 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_e0 + 0xc))) {
          _memcpy(local_e0 + lVar7 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + 1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
      }
    }
    local_d8 = local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10;
    local_d0 = local_e0 + (long)*(int *)(local_e0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_e0 + 8) != *(int *)(local_e0 + 0xc)) {
      do {
        local_c8 = 1;
        QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x48) + 0x10));
        QWidget::hide();
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
        if ((bool)local_31) goto LAB_10065911b;
      }
      QListData::dispose(local_e0);
    }
    goto LAB_10065911b;
  }
  local_60 = *(Data **)(param_1 + 0x100);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar7 = (long)*(int *)(local_60 + 8);
      lVar1 = *(long *)(param_1 + 0x100);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_60 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_60 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar7 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x48) + 0x10));
      QWidget::hide();
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100658b6a;
    }
    QListData::dispose(local_60);
  }
LAB_100658b6a:
  local_80 = *(Data **)(param_1 + 0xf8);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_80);
      lVar7 = (long)*(int *)(local_80 + 8);
      lVar1 = *(long *)(param_1 + 0xf8);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_80 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_80 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_80 + 0xc))
         ) {
        _memcpy(local_80 + lVar7 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
    do {
      local_68 = 1;
      uVar2 = *(undefined8 *)local_78;
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
      QObject::property((char *)&local_90);
      uVar5 = QVariant::toInt((bool *)&local_90);
      QObject::property((char *)&local_a0);
      uVar6 = QVariant::toInt((bool *)&local_a0);
      QGridLayout::addWidget(uVar3,uVar2,uVar5,uVar6,1,1,0);
      QVariant::~QVariant(&local_a0);
      QVariant::~QVariant(&local_90);
      QWidget::show();
      local_78 = local_78 + 8;
    } while (local_78 != local_70);
  }
  local_68 = 1;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065911b;
    }
    QListData::dispose(local_80);
  }
LAB_10065911b:
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
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

