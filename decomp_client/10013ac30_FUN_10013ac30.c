
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10013ac30(long param_1,long param_2,QTreeWidgetItem *param_3)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  QTreeWidgetItem *this;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined **ppuVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  Data *local_248;
  Data *local_240;
  Data *local_238;
  undefined4 local_230;
  QArrayData *local_228;
  undefined *local_220;
  int *local_218;
  QString local_210;
  QString local_208;
  QArrayData *local_200;
  QString local_1f8;
  QArrayData *local_1f0;
  QString local_1e8;
  QArrayData *local_1e0;
  QString local_1d8;
  CHwHddPartition local_1d0 [232];
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  uint local_d0;
  QVariant local_c8;
  QVariant local_b8;
  QVariant local_a8;
  QVariant local_98;
  QVariant local_88;
  QVariant local_78;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  bool local_31;
  
  cVar3 = FUN_1001117b0(param_2);
  if (cVar3 == '\0') {
    local_e8 = *(Data **)(param_2 + 0xa8);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 == 0) {
        QListData::detach((int)&local_e8);
        lVar7 = (long)*(int *)(local_e8 + 8);
        lVar5 = *(long *)(param_2 + 0xa8);
        if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_e8 + lVar7 * 8) &&
           (lVar9 = *(int *)(local_e8 + 0xc) - lVar7,
           lVar9 != 0 && lVar7 <= *(int *)(local_e8 + 0xc))) {
          _memcpy(local_e8 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8)
                  ,lVar9 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + 1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
      }
    }
    local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
    local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
    local_d0 = 1;
    if (*(int *)(local_e8 + 8) == *(int *)(local_e8 + 0xc)) {
      bVar13 = false;
    }
    else {
      bVar13 = false;
      do {
        if ((local_d0 == 0) || (*(CHwHddPartition **)local_e0 == (CHwHddPartition *)0x0)) {
LAB_10013ad9a:
          local_e0 = local_e0 + 8;
          local_d0 = 1;
        }
        else {
          CHwHddPartition::CHwHddPartition(local_1d0,*(CHwHddPartition **)local_e0);
          cVar3 = FUN_1001117b0(local_1d0);
          CHwHddPartition::~CHwHddPartition(local_1d0);
          if (cVar3 == '\0') goto LAB_10013ad9a;
          local_e0 = local_e0 + 8;
          uVar6 = local_d0 ^ 1;
          bVar13 = true;
          bVar12 = local_d0 == 1;
          local_d0 = uVar6;
          if (bVar12) break;
        }
      } while (local_e0 != local_d8);
    }
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if (local_31) goto LAB_10013adfb;
      }
      QListData::dispose(local_e8);
    }
LAB_10013adfb:
    if (!bVar13) {
      return;
    }
  }
  this = operator_new(0x40);
  QTreeWidgetItem::QTreeWidgetItem(this,param_3,0);
  if (*(QTreeWidgetItem **)(param_3 + 0x18) != (QTreeWidgetItem *)0x0) {
    QTreeWidget::setItemExpanded(*(QTreeWidgetItem **)(param_3 + 0x18),SUB81(param_3,0));
  }
  if (*(int *)(*(long *)(param_2 + 0xa8) + 0xc) == *(int *)(*(long *)(param_2 + 0xa8) + 8)) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    QMetaObject::tr((char *)&local_1f0,PTR_staticMetaObject_1021e1520,0x1dc0ec1);
    QString::arg(&local_1e8,&local_1f0,*(undefined4 *)(param_1 + 0x40),0,10,0x20);
    pcVar1 = *(code **)(*(long *)this + 0x20);
    QVariant::QVariant(&local_b8,&local_1e8);
    (*pcVar1)(this,0,0,&local_b8);
    QVariant::~QVariant(&local_b8);
    if (*(int *)local_1e8.field0_0x0 != -1) {
      if (*(int *)local_1e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
        local_31 = *(int *)local_1e8.field0_0x0 != 0;
        UNLOCK();
        if (local_31) goto LAB_10013af06;
      }
      QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
    }
LAB_10013af06:
    if (*(int *)local_1f0 != -1) {
      if (*(int *)local_1f0 != 0) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + -1;
        iVar4 = *(int *)local_1f0;
        UNLOCK();
joined_r0x00010013b013:
        local_31 = iVar4 != 0;
        if (local_31) goto LAB_10013b02b;
      }
LAB_10013b01c:
      QArrayData::deallocate(local_1f0,2,8);
    }
  }
  else {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    QMetaObject::tr((char *)&local_1e0,PTR_staticMetaObject_1021e1520,0x1dc0eab);
    QString::arg(&local_1d8,&local_1e0,*(undefined4 *)(param_1 + 0x44),0,10,0x20);
    pcVar1 = *(code **)(*(long *)this + 0x20);
    QVariant::QVariant(&local_c8,&local_1d8);
    (*pcVar1)(this,0,0,&local_c8);
    QVariant::~QVariant(&local_c8);
    if (*(int *)local_1d8.field0_0x0 != -1) {
      if (*(int *)local_1d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
        local_31 = *(int *)local_1d8.field0_0x0 != 0;
        UNLOCK();
        if (local_31) goto LAB_10013aff5;
      }
      QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
    }
LAB_10013aff5:
    if (*(int *)local_1e0 != -1) {
      local_1f0 = local_1e0;
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        iVar4 = *(int *)local_1e0;
        UNLOCK();
        goto joined_r0x00010013b013;
      }
      goto LAB_10013b01c;
    }
  }
LAB_10013b02b:
  lVar5 = CHwHddPartition::getSize();
  lVar5 = ((ulong)(lVar5 >> 0x3f) >> 0x2c) + lVar5;
  lVar7 = lVar5 >> 0x14;
  QMetaObject::tr((char *)&local_200,PTR_staticMetaObject_1021e1520,0x1dc0ece);
  auVar14._8_4_ = (int)(lVar5 >> 0x34);
  auVar14._0_8_ = lVar7;
  auVar14._12_4_ = _UNK_100e11114;
  QString::arg((((double)CONCAT44(_DAT_100e11110,(int)lVar7) - _DAT_100e11120) +
               (auVar14._8_8_ - _UNK_100e11128)) * DAT_100e14d10,&local_1f8,&local_200,0,0x66,1,0x20
              );
  pcVar1 = *(code **)(*(long *)this + 0x20);
  QVariant::QVariant(&local_a8,&local_1f8);
  (*pcVar1)(this,1,0,&local_a8);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_1f8.field0_0x0 != -1) {
    if (*(int *)local_1f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
      local_31 = *(int *)local_1f8.field0_0x0 != 0;
      UNLOCK();
      if (local_31) goto LAB_10013b11d;
    }
    QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
  }
LAB_10013b11d:
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if (local_31) goto LAB_10013b153;
    }
    QArrayData::deallocate(local_200,2,8);
  }
LAB_10013b153:
  CHwHddPartition::getType();
  EnumUtils::partitionTypeToString((uint)&local_208);
  pcVar1 = *(code **)(*(long *)this + 0x20);
  QVariant::QVariant(&local_98,&local_208);
  (*pcVar1)(this,2,0,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_208.field0_0x0 != -1) {
    if (*(int *)local_208.field0_0x0 != 0) {
      LOCK();
      *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
      local_31 = *(int *)local_208.field0_0x0 != 0;
      UNLOCK();
      if (local_31) goto LAB_10013b1d8;
    }
    QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
  }
LAB_10013b1d8:
  CHwHddPartition::getSystemName();
  pcVar1 = *(code **)(*(long *)this + 0x20);
  QVariant::QVariant(&local_88,&local_210);
  (*pcVar1)(this,3,0,&local_88);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_210.field0_0x0 != -1) {
    if (*(int *)local_210.field0_0x0 != 0) {
      LOCK();
      *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
      UNLOCK();
      local_31 = *(int *)local_210.field0_0x0 != 0;
      if (*(int *)local_210.field0_0x0 != 0) goto LAB_10013b24d;
    }
    QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
  }
LAB_10013b24d:
  local_248 = *(Data **)(param_2 + 0xa8);
  if (*(int *)(local_248 + 0xc) != *(int *)(local_248 + 8)) {
    if (*(int *)local_248 != -1) {
      if (*(int *)local_248 == 0) {
        QListData::detach((int)&local_248);
        lVar7 = (long)*(int *)(local_248 + 8);
        lVar5 = *(long *)(param_2 + 0xa8);
        if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_248 + lVar7 * 8) &&
           (lVar9 = *(int *)(local_248 + 0xc) - lVar7,
           lVar9 != 0 && lVar7 <= *(int *)(local_248 + 0xc))) {
          _memcpy(local_248 + lVar7 * 8 + 0x10,
                  (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar9 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + 1;
        local_31 = *(int *)local_248 != 0;
        UNLOCK();
      }
    }
    local_240 = local_248 + (long)*(int *)(local_248 + 8) * 8 + 0x10;
    local_238 = local_248 + (long)*(int *)(local_248 + 0xc) * 8 + 0x10;
    if (*(int *)(local_248 + 8) != *(int *)(local_248 + 0xc)) {
      do {
        local_230 = 1;
        FUN_10013ac30(param_1,*(undefined8 *)local_240,this);
        local_240 = local_240 + 8;
      } while (local_240 != local_238);
    }
    local_230 = 1;
    if (*(int *)local_248 != -1) {
      if (*(int *)local_248 != 0) {
        LOCK();
        *(int *)local_248 = *(int *)local_248 + -1;
        local_31 = *(int *)local_248 != 0;
        UNLOCK();
        if (local_31) goto LAB_10013b48f;
      }
      QListData::dispose(local_248);
    }
LAB_10013b48f:
    iVar4 = FUN_10013bc40(param_1,this);
    pcVar1 = *(code **)(*(long *)this + 0x20);
    QVariant::QVariant(&local_48,iVar4);
    (*pcVar1)(this,0,10,&local_48);
    QVariant::~QVariant(&local_48);
    return;
  }
  local_220 = PTR_shared_null_1021e15e8;
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  if (lVar5 == 0) {
LAB_10013b34b:
    lVar9 = 0;
  }
  else {
    lVar7 = 0;
    do {
      while (lVar9 = lVar5, cVar3 = operator<((QString *)(lVar9 + 0x18),(QString *)(param_1 + 0x38))
            , cVar3 != '\0') {
        lVar5 = *(long *)(lVar9 + 0x10);
        if (*(long *)(lVar9 + 0x10) == 0) {
          lVar9 = lVar7;
          if (lVar7 == 0) goto LAB_10013b34b;
          goto LAB_10013b33b;
        }
      }
      lVar5 = *(long *)(lVar9 + 8);
      lVar7 = lVar9;
    } while (*(long *)(lVar9 + 8) != 0);
LAB_10013b33b:
    cVar3 = operator<((QString *)(param_1 + 0x38),(QString *)(lVar9 + 0x18));
    if (cVar3 != '\0') goto LAB_10013b34b;
  }
  ppuVar11 = &local_220;
  if (lVar9 != 0) {
    ppuVar11 = (undefined **)(lVar9 + 0x20);
  }
  local_218 = (int *)*ppuVar11;
  if (*local_218 != -1) {
    if (*local_218 == 0) {
      QListData::detach((int)&local_218);
      iVar4 = local_218[2];
      if (iVar4 != local_218[3]) {
        puVar8 = (undefined8 *)(*ppuVar11 + (long)*(int *)(*ppuVar11 + 8) * 8 + 0x10);
        piVar10 = local_218 + (long)iVar4 * 2 + 4;
        lVar5 = (long)local_218[3] * 8 + (long)iVar4 * -8;
        do {
          piVar2 = (int *)*puVar8;
          *(int **)piVar10 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          puVar8 = puVar8 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_218 = *local_218 + 1;
      local_31 = *local_218 != 0;
      UNLOCK();
    }
  }
  FUN_100039a80(&local_220);
  CHwHddPartition::getSystemName();
  cVar3 = QtPrivate::QStringList_contains(&local_218,&local_228,1);
  bVar13 = true;
  if (cVar3 == '\0') {
    (**(code **)(*(long *)param_3 + 0x18))(&local_78,param_3,0,10);
    iVar4 = QVariant::toInt((bool *)&local_78);
    QVariant::~QVariant(&local_78);
    bVar13 = iVar4 == 2;
  }
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
      if (local_31) goto LAB_10013b57b;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_10013b57b:
  if (bVar13) {
    pcVar1 = *(code **)(*(long *)this + 0x20);
    QVariant::QVariant(&local_68,2);
    (*pcVar1)(this,0,10,&local_68);
    QVariant::~QVariant(&local_68);
  }
  else {
    pcVar1 = *(code **)(*(long *)this + 0x20);
    QVariant::QVariant(&local_58,0);
    (*pcVar1)(this,0,10,&local_58);
    QVariant::~QVariant(&local_58);
  }
  FUN_100039a80(&local_218);
  return;
}

