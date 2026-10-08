
void FUN_1002bc130(long *param_1,undefined8 param_2,int param_3)

{
  QString *this;
  QString *this_00;
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  QTypedArrayData<unsigned_short> *local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QTypedArrayData<unsigned_short> *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QFileInfo local_50 [8];
  QDir local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_3 != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001002bc631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
    return;
  }
  QDir::QDir(local_48,(QString *)(param_1 + 3));
  this = (QString *)(param_1 + 5);
  if ((*(int *)(param_1[5] + 4) == 0) && (cVar1 = QDir::cdUp(), cVar1 != '\0')) {
    QDir::absolutePath();
    QFileInfo::QFileInfo(local_50,&local_58);
    cVar1 = QFileInfo::isWritable();
    QFileInfo::~QFileInfo(local_50);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bc1de;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1002bc1de:
    if (cVar1 != '\0') {
      QDir::absolutePath();
      QString::operator=(this,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bc22b;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
    }
  }
LAB_1002bc22b:
  QMetaObject::tr((char *)&local_68,(char *)&PTR_staticMetaObject_102208250,0x1de3dd1);
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    this_00 = (QString *)(param_1 + 4);
    QString::operator=(this_00,&local_68);
    if (*(int *)(this->field0_0x0 + 4) != 0) {
      uVar2 = QDir::separator();
      local_78 = this->field0_0x0;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      iVar5 = *(int *)(local_78 + 4);
      if ((1 < *(uint *)local_78) || ((*(uint *)(local_78 + 8) & 0x7fffffff) < iVar5 + 2U)) {
        QString::reallocData((uint)&local_78,SUB41(iVar5 + 2U,0));
        iVar5 = *(int *)(local_78 + 4);
      }
      *(int *)(local_78 + 4) = iVar5 + 1;
      *(undefined2 *)(local_78 + (long)iVar5 * 2 + *(long *)(local_78 + 0x10)) = uVar2;
      *(undefined2 *)(local_78 + (long)*(int *)(local_78 + 4) * 2 + *(long *)(local_78 + 0x10)) = 0;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      local_70.field0_0x0 = local_78;
      QString::append(&local_70);
      QString::operator=(this_00,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bc725;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1002bc725:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bc755;
        }
        QArrayData::deallocate((QArrayData *)local_78,2,8);
      }
    }
LAB_1002bc755:
    lVar4 = 0;
    if ((param_1[8] != 0) && (lVar4 = 0, *(int *)(param_1[8] + 4) != 0)) {
      lVar4 = param_1[9];
    }
    QMetaObject::tr((char *)&local_88,(char *)&PTR_staticMetaObject_102208250,0x1de3de1);
    QMetaObject::tr((char *)&local_90,(char *)&PTR_staticMetaObject_102208250,0x1de3de9);
    QFileDialog::getSaveFileName(&local_80,lVar4,&local_88,this_00,&local_90,0,0x80000004);
    QString::operator=(this_00,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bc80d;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_1002bc80d:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bc843;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1002bc843:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bc879;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
  else {
    if (*(int *)(this->field0_0x0 + 4) == 0) {
      uVar3 = FUN_100152280();
      lVar4 = FUN_1001554a0(uVar3);
      if (lVar4 != 0) {
        FUN_100109c10(&local_a0,lVar4);
        QString::normalized(&local_98,&local_a0,1,0);
        QString::operator=(this,&local_98);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002bc2ed;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_1002bc2ed:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002bc323;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
      }
    }
LAB_1002bc323:
    local_b0 = (QArrayData *)PTR_shared_null_1021e1288;
    SandboxFileAccessHelpers::selectDirectory(&local_a8,this);
    QString::operator=(this,&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bc38c;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
LAB_1002bc38c:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bc3c2;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1002bc3c2:
    if (*(int *)(this->field0_0x0 + 4) != 0) {
      local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMSD]",6)
      ;
      SandboxFileAccessHelpers::saveBookmark(this,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bc42c;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_1002bc42c:
      uVar2 = QDir::separator();
      local_d0 = this->field0_0x0;
      if (1 < *(int *)local_d0 + 1U) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + 1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
      }
      iVar5 = *(int *)(local_d0 + 4);
      if ((1 < *(uint *)local_d0) || ((*(uint *)(local_d0 + 8) & 0x7fffffff) < iVar5 + 2U)) {
        QString::reallocData((uint)&local_d0,SUB41(iVar5 + 2U,0));
        iVar5 = *(int *)(local_d0 + 4);
      }
      *(int *)(local_d0 + 4) = iVar5 + 1;
      *(undefined2 *)(local_d0 + (long)iVar5 * 2 + *(long *)(local_d0 + 0x10)) = uVar2;
      *(undefined2 *)(local_d0 + (long)*(int *)(local_d0 + 4) * 2 + *(long *)(local_d0 + 0x10)) = 0;
      if (1 < *(int *)local_d0 + 1U) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + 1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
      }
      local_c8.field0_0x0 = local_d0;
      QString::append(&local_c8);
      local_c0.field0_0x0 = local_c8.field0_0x0;
      if (1 < *(int *)local_c8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1db8953);
      QString::append(&local_c0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bc54b;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1002bc54b:
      QString::operator=((QString *)(param_1 + 4),&local_c0);
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bc594;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_1002bc594:
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bc5ca;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_1002bc5ca:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bc879;
        }
        QArrayData::deallocate((QArrayData *)local_d0,2,8);
      }
    }
  }
LAB_1002bc879:
  uVar3 = 0x80000275;
  if (*(int *)(param_1[4] + 4) != 0) {
    uVar3 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar3);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bc8c9;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002bc8c9:
  QDir::~QDir(local_48);
  return;
}

