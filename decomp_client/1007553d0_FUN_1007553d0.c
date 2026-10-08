
void FUN_1007553d0(AnonymousUnion0 *param_1)

{
  AnonymousUnion0 *this;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_a8 [24];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QDir local_60 [8];
  QString local_58;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_1[0x1c].field1 == (Data *)0x0) {
    return;
  }
  uVar3 = FUN_100152280();
  FUN_100188480(&local_38,param_1[0x1c].field1);
  lVar4 = FUN_1001547d0(uVar3,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10075544c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10075544c:
  if (lVar4 == 0) {
    return;
  }
  FUN_10018d980(&local_58,param_1[0x1c].field1);
  QFileInfo::QFileInfo(local_50,&local_58);
  QFileInfo::absolutePath();
  QString::normalized(&local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007554c5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007554c5:
  QFileInfo::~QFileInfo(local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007554fe;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007554fe:
  QDir::QDir(local_60,&local_40);
  QDir::cdUp();
  uVar3 = QApplication::activeModalWidget();
  local_78 = (QArrayData *)PTR_shared_null_1021e1288;
  QDir::path();
  QFileDialog::getExistingDirectory(&local_70,uVar3,&local_78,&local_80,1);
  QString::normalized(&local_68,&local_70,1,0);
  this = param_1 + 0x1d;
  QString::operator=((QString *)&this->field0,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007555a5;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007555a5:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007555d5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007555d5:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100755605;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100755605:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100755635;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100755635:
  QString::trimmed();
  iVar2 = *(int *)(local_88 + 4);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100755674;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100755674:
  if (iVar2 == 0) goto LAB_1007559e7;
  QString::toUtf8();
  if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"[VM conversion] VM path = <%s>",
                local_90 + *(long *)(local_90 + 0x10));
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100755718;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100755718:
  QString::toUtf8();
  if ((1 < *(uint *)local_a8._16_8_) || (*(long *)(local_a8._16_8_ + 0x10) != 0x18)) {
    QByteArray::reallocData
              (local_a8 + 0x10,*(uint *)(local_a8._16_8_ + 4) + 1,
               *(uint *)(local_a8._16_8_ + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"[VM conversion] backup path = <%s>",
                (QArrayData *)(local_a8._16_8_ + *(long *)(local_a8._16_8_ + 0x10)));
  if (*(int *)local_a8._16_8_ != -1) {
    if (*(int *)local_a8._16_8_ != 0) {
      LOCK();
      *(int *)local_a8._16_8_ = *(int *)local_a8._16_8_ + -1;
      local_29 = *(int *)local_a8._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007557b3;
    }
    QArrayData::deallocate((QArrayData *)local_a8._16_8_,1,8);
  }
LAB_1007557b3:
  cVar1 = operator==((QString *)&this->field0,&local_40);
  if ((cVar1 == '\0') && (cVar1 = QString::startsWith(this,&local_40,1), cVar1 == '\0')) {
    (**(code **)((long)param_1->field1 + 0x1b0))(param_1,1);
    goto LAB_1007559e7;
  }
  iVar2 = CMessageManager::instance();
  local_a8._8_8_ = PTR_shared_null_1021e15e8;
  local_a8._0_8_ = PTR_shared_null_1021e15e8;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015214,(QStringList *)&param_1->field0,
             (QStringList *)(local_a8 + 8),(CSlotInfo *)local_a8,SUB81(&local_e8,0));
  QVariant::~QVariant((QVariant *)&local_c8);
  if (local_e8 != (int *)0x0) {
    LOCK();
    *local_e8 = *local_e8 + -1;
    local_29 = *local_e8 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_e8 != (int *)0x0)) {
      operator_delete(local_e8);
    }
  }
  uVar3 = local_a8._0_8_;
  if (*(int *)local_a8._0_8_ != -1) {
    if (*(int *)local_a8._0_8_ != 0) {
      LOCK();
      *(int *)local_a8._0_8_ = *(int *)local_a8._0_8_ + -1;
      local_29 = *(int *)local_a8._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100755931;
    }
    iVar2 = *(int *)(local_a8._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_a8._0_8_ + 8)) {
      lVar4 = (long)*(int *)(local_a8._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_a8._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_100755910:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_100755910;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_100755931:
  uVar3 = local_a8._8_8_;
  if (*(int *)local_a8._8_8_ != -1) {
    if (*(int *)local_a8._8_8_ != 0) {
      LOCK();
      *(int *)local_a8._8_8_ = *(int *)local_a8._8_8_ + -1;
      local_29 = *(int *)local_a8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007559e7;
    }
    iVar2 = *(int *)(local_a8._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_a8._8_8_ + 8)) {
      lVar4 = (long)*(int *)(local_a8._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_a8._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1007559b0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1007559b0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_1007559e7:
  QDir::~QDir(local_60);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

