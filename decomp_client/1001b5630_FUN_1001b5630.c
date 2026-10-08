
void FUN_1001b5630(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  QVariant local_100;
  Data_conflict local_f0;
  QVariant local_e8;
  Data_conflict local_d8;
  QVariant local_d0;
  Data_conflict local_c0;
  QVariant local_b8;
  Data_conflict local_a8;
  QString local_a0;
  QVariant local_98;
  Data_conflict local_88;
  QVariant local_80;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58 [2];
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)local_58,(QObject *)0x0);
  local_60 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  QSettings::remove(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b56af;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001b56af:
  local_68 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  QSettings::beginWriteArray(local_58,(int)&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b5706;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001b5706:
  iVar1 = QTreeWidget::topLevelItemCount();
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      plVar3 = (long *)QTreeWidget::topLevelItem(param_2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(&local_80,plVar3,1,0x100);
        QVariant::toString();
        QVariant::~QVariant(&local_80);
        iVar2 = QString::compare_helper
                          ((QArrayData *)
                           (local_70.field0_0x0 + *(long *)(local_70.field0_0x0 + 0x10)),
                           *(undefined4 *)(local_70.field0_0x0 + 4),PTR_s_COMPUTER_FAKE_ID_1022710d8
                           ,0xffffffff,1);
        if ((iVar2 == 0) || (lVar4 = FUN_10015cb20(param_1,&local_70), lVar4 != 0)) {
          QSettings::setArrayIndex((int)local_58);
          local_88.field7 = QString::fromAscii_helper("Device Name",0xb);
          (**(code **)(*plVar3 + 0x18))(&local_48,plVar3,0,0);
          QVariant::toString();
          QVariant::~QVariant(&local_48);
          QVariant::QVariant(&local_98,&local_a0);
          QSettings::setValue(local_58,(QVariant *)&local_88);
          QVariant::~QVariant(&local_98);
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001b5878;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_1001b5878:
          if (*(int *)local_88.field15 != -1) {
            if (*(int *)local_88.field15 != 0) {
              LOCK();
              *(int *)local_88.field15 = *(int *)local_88.field15 + -1;
              local_31 = *(int *)local_88.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001b58b6;
            }
            QArrayData::deallocate((QArrayData *)local_88.field15,2,8);
          }
LAB_1001b58b6:
          local_a8.field7 = QString::fromAscii_helper("Device Id",9);
          (**(code **)(*plVar3 + 0x18))(&local_b8,plVar3,0,0x100);
          QSettings::setValue(local_58,(QVariant *)&local_a8);
          QVariant::~QVariant(&local_b8);
          if (*(int *)local_a8.field15 != -1) {
            if (*(int *)local_a8.field15 != 0) {
              LOCK();
              *(int *)local_a8.field15 = *(int *)local_a8.field15 + -1;
              local_31 = *(int *)local_a8.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001b5935;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field15,2,8);
          }
LAB_1001b5935:
          iVar2 = QString::compare_helper
                            ((QArrayData *)
                             (local_70.field0_0x0 + *(long *)(local_70.field0_0x0 + 0x10)),
                             *(undefined4 *)(local_70.field0_0x0 + 4),
                             PTR_s_COMPUTER_FAKE_ID_1022710d8,0xffffffff,1);
          if (iVar2 == 0) {
            local_c0.field7 = QString::fromAscii_helper("Action",6);
            QVariant::QVariant(&local_d0,1);
            QSettings::setValue(local_58,(QVariant *)&local_c0);
            QVariant::~QVariant(&local_d0);
            if (*(int *)local_c0.field15 != -1) {
              if (*(int *)local_c0.field15 != 0) {
                LOCK();
                *(int *)local_c0.field15 = *(int *)local_c0.field15 + -1;
                local_31 = *(int *)local_c0.field15 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001b5af0;
              }
              QArrayData::deallocate((QArrayData *)local_c0.field15,2,8);
            }
          }
          else {
            local_d8.field7 = QString::fromAscii_helper("Action",6);
            QVariant::QVariant(&local_e8,2);
            QSettings::setValue(local_58,(QVariant *)&local_d8);
            QVariant::~QVariant(&local_e8);
            if (*(int *)local_d8.field15 != -1) {
              if (*(int *)local_d8.field15 != 0) {
                LOCK();
                *(int *)local_d8.field15 = *(int *)local_d8.field15 + -1;
                local_31 = *(int *)local_d8.field15 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001b59df;
              }
              QArrayData::deallocate((QArrayData *)local_d8.field15,2,8);
            }
LAB_1001b59df:
            local_f0.field7 = QString::fromAscii_helper("AssocVmId",9);
            QVariant::QVariant(&local_100,&local_70);
            QSettings::setValue(local_58,(QVariant *)&local_f0);
            QVariant::~QVariant(&local_100);
            if (*(int *)local_f0.field15 != -1) {
              if (*(int *)local_f0.field15 != 0) {
                LOCK();
                *(int *)local_f0.field15 = *(int *)local_f0.field15 + -1;
                local_31 = *(int *)local_f0.field15 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001b5af0;
              }
              QArrayData::deallocate((QArrayData *)local_f0.field15,2,8);
            }
          }
        }
LAB_1001b5af0:
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001b5b20;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
      }
LAB_1001b5b20:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  QSettings::endArray();
  QSettings::~QSettings((QSettings *)local_58);
  return;
}

