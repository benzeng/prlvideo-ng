
QComboBox * FUN_100534cd0(long param_1,QWidget *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  AnonymousBitField0 *pAVar3;
  uint uVar4;
  QComboBox *this;
  long lVar5;
  int *piVar6;
  int iVar7;
  int **ppiVar8;
  QString local_e8;
  QVariant local_e0;
  int *local_d0;
  int *local_c8;
  AnonymousBitField0 *local_c0;
  int *local_b8;
  int local_b0;
  QVariant local_a8;
  Data_conflict local_98;
  QString local_90;
  QVariant local_88;
  int *local_78;
  int *local_70;
  AnonymousBitField0 *local_68;
  int *local_60;
  int local_58;
  QIcon local_50 [8];
  QString local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  this = operator_new(0x30);
  QComboBox::QComboBox(this,param_2);
  iVar7 = (int)this;
  if (*(int *)(param_4 + 4) != 1) {
    if (*(int *)(param_4 + 4) != 0) {
      return this;
    }
    FUN_100538a00(&local_78);
    local_70 = local_78;
    if (*local_78 != -1) {
      if (*local_78 == 0) {
        QListData::detach((int)&local_70);
        iVar1 = local_70[2];
        if (iVar1 != local_70[3]) {
          local_78 = local_78 + (long)local_78[2] * 2 + 4;
          piVar6 = local_70 + (long)iVar1 * 2 + 4;
          lVar5 = (long)local_70[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)local_78;
            *(int **)piVar6 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar6 = piVar6 + 2;
            local_78 = local_78 + 2;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *local_78 = *local_78 + 1;
        local_31 = *local_78 != 0;
        UNLOCK();
      }
    }
    local_68 = (AnonymousBitField0 *)(local_70 + (long)local_70[2] * 2 + 4);
    local_60 = local_70 + (long)local_70[3] * 2 + 4;
    local_58 = 1;
    FUN_100039a80(&local_78);
    if ((local_58 != 0) && (local_68 != (AnonymousBitField0 *)local_60)) {
      do {
        pAVar3 = local_68;
        FUN_10002c180(&local_90,param_1 + 0x10,local_68);
        QVariant::QVariant(&local_88,&local_90);
        uVar4 = QComboBox::count();
        QIcon::QIcon(local_50);
        QComboBox::insertItem(iVar7,(QIcon *)(ulong)uVar4,(QString *)local_50,(QVariant *)pAVar3);
        QIcon::~QIcon(local_50);
        QVariant::~QVariant(&local_88);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100535182;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_100535182:
        local_68 = &((Private *)local_68)->field1_0x8;
        local_58 = 1;
      } while (local_68 != (AnonymousBitField0 *)local_60);
    }
    ppiVar8 = &local_70;
    goto LAB_1005351a3;
  }
  QMetaObject::tr(&local_98.field0,PTR_staticMetaObject_1021e1520,(int)PTR_s_Your_Mac_10226de28);
  QVariant::QVariant(&local_a8,PTR_s_COMPUTER_FAKE_ID_1022710d8);
  uVar4 = QComboBox::count();
  QIcon::QIcon((QIcon *)&local_48);
  QComboBox::insertItem(iVar7,(QIcon *)(ulong)uVar4,&local_48,(QVariant *)&local_98);
  QIcon::~QIcon((QIcon *)&local_48);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98.field15 != -1) {
    if (*(int *)local_98.field15 != 0) {
      LOCK();
      *(int *)local_98.field15 = *(int *)local_98.field15 + -1;
      local_31 = *(int *)local_98.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100534dd3;
    }
    QArrayData::deallocate((QArrayData *)local_98.field15,2,8);
  }
LAB_100534dd3:
  FUN_100538a00(&local_d0);
  local_c8 = local_d0;
  if (*local_d0 != -1) {
    if (*local_d0 == 0) {
      QListData::detach((int)&local_c8);
      iVar1 = local_c8[2];
      if (iVar1 != local_c8[3]) {
        local_d0 = local_d0 + (long)local_d0[2] * 2 + 4;
        piVar6 = local_c8 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_c8[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_d0;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_d0 = local_d0 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_d0 = *local_d0 + 1;
      local_31 = *local_d0 != 0;
      UNLOCK();
    }
  }
  local_c0 = (AnonymousBitField0 *)(local_c8 + (long)local_c8[2] * 2 + 4);
  local_b8 = local_c8 + (long)local_c8[3] * 2 + 4;
  local_b0 = 1;
  FUN_100039a80(&local_d0);
  if ((local_b0 != 0) && (local_c0 != (AnonymousBitField0 *)local_b8)) {
    do {
      pAVar3 = local_c0;
      FUN_10002c180(&local_e8,param_1 + 0x18,local_c0);
      QVariant::QVariant(&local_e0,&local_e8);
      uVar4 = QComboBox::count();
      QIcon::QIcon(local_40);
      QComboBox::insertItem(iVar7,(QIcon *)(ulong)uVar4,(QString *)local_40,(QVariant *)pAVar3);
      QIcon::~QIcon(local_40);
      QVariant::~QVariant(&local_e0);
      if (*(int *)local_e8.field0_0x0 != -1) {
        if (*(int *)local_e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
          local_31 = *(int *)local_e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100535052;
        }
        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
      }
LAB_100535052:
      local_c0 = &((Private *)local_c0)->field1_0x8;
      local_b0 = 1;
    } while (local_c0 != (AnonymousBitField0 *)local_b8);
  }
  ppiVar8 = &local_c8;
LAB_1005351a3:
  FUN_100039a80(ppiVar8);
  return this;
}

