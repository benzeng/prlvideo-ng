
undefined8 FUN_10012d160(undefined8 param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  QVariant local_108;
  QVariant local_f8;
  QString local_e8;
  QVariant local_e0;
  QString local_d0;
  QVariant local_c8;
  Data_conflict local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QVariant local_80;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  Data *local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  FUN_10012c850(&local_48);
  local_68 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_68);
      lVar5 = (long)*(int *)(local_68 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_68 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_68 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar5 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      plVar1 = *(long **)local_60;
      iVar7 = (int)param_1;
      if (param_3 == 0) {
        iVar3 = (**(code **)(*plVar1 + 0xd8))(plVar1);
        if (iVar3 == 1) {
          lVar5 = ___dynamic_cast(param_1,PTR_typeinfo_1021e1748,&PTR_vtable_1021fb4f0,0);
          pcVar4 = *(code **)(*plVar1 + 0xa8);
          if (lVar5 == 0) goto LAB_10012d23a;
          (*pcVar4)(&local_70,plVar1);
          (**(code **)(*plVar1 + 0xb8))(&local_88,plVar1);
          QVariant::QVariant(&local_80,&local_88);
          local_90 = (QArrayData *)PTR_shared_null_1021e1288;
          local_98 = (QArrayData *)PTR_shared_null_1021e1288;
          local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
          FUN_10013d930(lVar5,&local_70,4,1,&local_80,&local_90,&local_98,&local_a0);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012d429;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_10012d429:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012d45f;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_10012d45f:
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012d495;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_10012d495:
          QVariant::~QVariant(&local_80);
          if (*(int *)local_88.field0_0x0 != -1) {
            if (*(int *)local_88.field0_0x0 != 0) {
              LOCK();
              *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
              local_31 = *(int *)local_88.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012d4cd;
            }
            QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
          }
LAB_10012d4cd:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012d4fd;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_10012d4fd:
          iVar3 = QComboBox::count();
          QVariant::QVariant(&local_b0,4);
          QComboBox::setItemData((int)lVar5,(QVariant *)(ulong)(iVar3 - 1),(int)&local_b0);
          QVariant::~QVariant(&local_b0);
          goto LAB_10012d540;
        }
      }
      else {
        pcVar4 = *(code **)(*plVar1 + 0xa8);
LAB_10012d23a:
        (*pcVar4)(&local_b8,plVar1);
        (**(code **)(*plVar1 + 0xb8))(&local_d0,plVar1);
        QVariant::QVariant(&local_c8,&local_d0);
        uVar2 = QComboBox::count();
        QIcon::QIcon(local_40);
        QComboBox::insertItem(iVar7,(QIcon *)(ulong)uVar2,(QString *)local_40,(QVariant *)&local_b8)
        ;
        QIcon::~QIcon(local_40);
        QVariant::~QVariant(&local_c8);
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_31 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10012d2e5;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
LAB_10012d2e5:
        if (*(int *)local_b8.field15 != -1) {
          if (*(int *)local_b8.field15 != 0) {
            LOCK();
            *(int *)local_b8.field15 = *(int *)local_b8.field15 + -1;
            local_31 = *(int *)local_b8.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10012d540;
          }
          QArrayData::deallocate((QArrayData *)local_b8.field15,2,8);
        }
LAB_10012d540:
        iVar3 = QComboBox::count();
        (**(code **)(*plVar1 + 0xb8))(&local_e8,plVar1);
        QVariant::QVariant(&local_e0,&local_e8);
        uVar2 = iVar3 - 1;
        QComboBox::setItemData(iVar7,(QVariant *)(ulong)uVar2,(int)&local_e0);
        QVariant::~QVariant(&local_e0);
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10012d5cb;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_10012d5cb:
        iVar3 = (**(code **)(*plVar1 + 0xd8))(plVar1);
        QVariant::QVariant(&local_f8,iVar3);
        QComboBox::setItemData(iVar7,(QVariant *)(ulong)uVar2,(int)&local_f8);
        QVariant::~QVariant(&local_f8);
        iVar3 = CHwGenericPciDevice::getType();
        QVariant::QVariant(&local_108,iVar3);
        QComboBox::setItemData(iVar7,(QVariant *)(ulong)uVar2,(int)&local_108);
        QVariant::~QVariant(&local_108);
      }
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012d685;
    }
    QListData::dispose(local_68);
  }
LAB_10012d685:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0xffffffff;
      }
      local_31 = 0;
    }
    QListData::dispose(local_48);
  }
  return 0xffffffff;
}

