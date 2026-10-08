
void FUN_1003c3530(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int *piVar2;
  QString *pQVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  QArrayData *pQVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  QVariant local_108;
  QArrayData *local_f8;
  Data_conflict local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  _func_void_Node_ptr *local_d0;
  QVariant local_c8;
  _func_void_Node_ptr *local_b8;
  int *local_b0;
  int *local_a8;
  QString *local_a0;
  QString *local_98;
  uint local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  uint local_68;
  QString local_60;
  Data_conflict local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar6 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_1003deae0(&local_88,param_3);
  local_80 = local_88;
  if (*local_88 != -1) {
    if (*local_88 == 0) {
      QListData::detach((int)&local_80);
      iVar13 = local_80[2];
      if (iVar13 != local_80[3]) {
        local_88 = local_88 + (long)local_88[2] * 2 + 4;
        piVar11 = local_80 + (long)iVar13 * 2 + 4;
        lVar7 = (long)local_80[3] * 8 + (long)iVar13 * -8;
        do {
          piVar10 = *(int **)local_88;
          *(int **)piVar11 = piVar10;
          if (1 < *piVar10 + 1U) {
            LOCK();
            *piVar10 = *piVar10 + 1;
            local_31 = *piVar10 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          local_88 = local_88 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_88 = *local_88 + 1;
      local_31 = *local_88 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)local_80[2] * 2 + 4;
  local_70 = local_80 + (long)local_80[3] * 2 + 4;
  local_68 = 1;
  FUN_100036370(&local_88);
  if (local_68 != 0) {
    bVar14 = false;
    do {
      while( true ) {
        piVar11 = local_78;
        if (local_78 == local_70) goto LAB_1003c38c8;
        if ((local_68 == 0) || (bVar14)) break;
        FUN_1003ae3b0(&local_b8,param_3,local_78);
        FUN_1000626e0(&local_b0,&local_b8);
        local_a8 = local_b0;
        if (*local_b0 != -1) {
          if (*local_b0 == 0) {
            QListData::detach((int)&local_a8);
            iVar13 = local_a8[2];
            if (iVar13 != local_a8[3]) {
              piVar10 = local_b0 + (long)local_b0[2] * 2 + 4;
              piVar12 = local_a8 + (long)iVar13 * 2 + 4;
              lVar7 = (long)local_a8[3] * 8 + (long)iVar13 * -8;
              do {
                piVar2 = *(int **)piVar10;
                *(int **)piVar12 = piVar2;
                if (1 < *piVar2 + 1U) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_31 = *piVar2 != 0;
                  UNLOCK();
                }
                piVar12 = piVar12 + 2;
                piVar10 = piVar10 + 2;
                lVar7 = lVar7 + -8;
              } while (lVar7 != 0);
            }
          }
          else {
            LOCK();
            *local_b0 = *local_b0 + 1;
            local_31 = *local_b0 != 0;
            UNLOCK();
          }
        }
        local_a0 = (QString *)(local_a8 + (long)local_a8[2] * 2 + 4);
        local_98 = (QString *)(local_a8 + (long)local_a8[3] * 2 + 4);
        local_90 = 1;
        FUN_100036370(&local_b0);
        if (*(int *)(local_b8 + 0x10) != -1) {
          if (*(int *)(local_b8 + 0x10) != 0) {
            LOCK();
            pcVar1 = local_b8 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_31 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c37d6;
          }
          QHashData::free_helper(local_b8);
        }
LAB_1003c37d6:
        bVar15 = bVar14;
        if (local_90 != 0) {
          do {
            pQVar3 = local_a0;
            bVar15 = bVar14;
            if (local_a0 == local_98) break;
            QString::operator=(&local_60,local_a0);
            FUN_1003ae3b0(&local_d0,param_3,piVar11);
            FUN_1003deba0(&local_c8,&local_d0,pQVar3);
            QVariant::operator=((QVariant *)&local_58,&local_c8);
            QVariant::~QVariant(&local_c8);
            if (*(int *)(local_d0 + 0x10) != -1) {
              if (*(int *)(local_d0 + 0x10) != 0) {
                LOCK();
                pcVar1 = local_d0 + 0x10;
                *(int *)pcVar1 = *(int *)pcVar1 + -1;
                local_31 = *(int *)pcVar1 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c3872;
              }
              QHashData::free_helper(local_d0);
            }
LAB_1003c3872:
            local_a0 = local_a0 + 1;
            uVar9 = local_90 ^ 1;
            bVar14 = true;
            bVar16 = local_90 != 1;
            local_90 = uVar9;
            bVar15 = true;
          } while (bVar16);
        }
        bVar14 = bVar15;
        FUN_100036370(&local_a8);
        local_78 = local_78 + 2;
        local_68 = 1;
      }
      local_78 = local_78 + 2;
      uVar9 = local_68 ^ 1;
      bVar15 = local_68 != 1;
      local_68 = uVar9;
    } while (bVar15);
  }
LAB_1003c38c8:
  FUN_100036370(&local_80);
  local_d8 = (QArrayData *)QString::fromAscii_helper("SystemName",10);
  cVar4 = QString::endsWith(&local_60,&local_d8,1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c393d;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1003c393d:
  iVar13 = (int)uVar6;
  if (cVar4 == '\0') {
    QComboBox::findData(uVar6,&local_58,0x100,0x10);
    QComboBox::setCurrentIndex(iVar13);
  }
  else {
    iVar5 = QComboBox::findData(uVar6,&local_58,0x100,0x10);
    if (iVar5 < 0) {
      QVariant::toString();
      iVar5 = *(int *)(local_e0 + 4);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c39af;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1003c39af:
      if (iVar5 != 0) {
        pQVar8 = (QArrayData *)QString::fromAscii_helper("SystemName",10);
        QString::left((int)&local_e8);
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c3a18;
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
LAB_1003c3a18:
        QString::fromUtf8_helper((char *)&local_48,0x1df22bc);
        QString::append(&local_e8);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c3a6d;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_1003c3a6d:
        uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
        FUN_1003e1800(&local_108,uVar6,&local_e8,0);
        QVariant::toString();
        EnumUtils::getLocalizedDeviceName((QString *)&local_f0);
        uVar9 = QComboBox::count();
        QIcon::QIcon((QIcon *)&local_40);
        QComboBox::insertItem(iVar13,(QIcon *)(ulong)uVar9,&local_40,(QVariant *)&local_f0);
        QIcon::~QIcon((QIcon *)&local_40);
        if (*(int *)local_f0.field15 != -1) {
          if (*(int *)local_f0.field15 != 0) {
            LOCK();
            *(int *)local_f0.field15 = *(int *)local_f0.field15 + -1;
            local_31 = *(int *)local_f0.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c3b26;
          }
          QArrayData::deallocate((QArrayData *)local_f0.field15,2,8);
        }
LAB_1003c3b26:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c3b5c;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_1003c3b5c:
        QVariant::~QVariant(&local_108);
        QComboBox::count();
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c3baa;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
      }
    }
LAB_1003c3baa:
    QComboBox::setCurrentIndex(iVar13);
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c3c06;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003c3c06:
  QVariant::~QVariant((QVariant *)&local_58);
  return;
}

