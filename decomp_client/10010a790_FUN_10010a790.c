
QString * FUN_10010a790(QString *param_1,int param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int local_94;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_3 == '\0') {
    FileUtils::tempPath();
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1dc003c);
    QString::append(&local_58);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010a893;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10010a893:
    QString::operator=(&local_50,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010a8d0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10010a8d0:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010a900;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_48,0x1dc002e);
    QString::operator=(&local_50,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010a900;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10010a900:
  QString::number((uint)&local_70,param_2);
  local_68.field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  QString::operator=(param_1,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010a977;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10010a977:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010a9a7;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10010a9a7:
  bVar1 = false;
  local_94 = param_2;
  do {
    if (bVar1) {
      local_94 = local_94 + 1;
      QString::number((uint)&local_80,local_94);
      local_78.field0_0x0 = local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_78);
      QString::operator=(param_1,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10010aa49;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_10010aa49:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10010aa79;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10010aa79:
      bVar1 = false;
    }
    for (iVar6 = 0; lVar5 = CVmConfiguration::getVmHardwareList(),
        iVar6 < *(int *)(*(long *)(lVar5 + 0x1b8) + 0xc) - *(int *)(*(long *)(lVar5 + 0x1b8) + 8);
        iVar6 = iVar6 + 1) {
      lVar5 = CVmConfiguration::getVmHardwareList();
      FUN_100124fe0(lVar5 + 0x1b8,iVar6);
      iVar4 = CVmDevice::getEmulatedType();
      bVar2 = bVar1;
      if (iVar4 == 3) {
        lVar5 = CVmConfiguration::getVmHardwareList();
        FUN_100124fe0(lVar5 + 0x1b8,iVar6);
        CVmDevice::getUserFriendlyName();
        cVar3 = operator==(param_1,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10010ab3d;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_10010ab3d:
        bVar2 = true;
        if (cVar3 == '\0') {
          bVar2 = bVar1;
        }
      }
      bVar1 = bVar2;
    }
    if (!bVar1) {
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_50.field0_0x0 != 0) {
            return param_1;
          }
          local_31 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
      return param_1;
    }
  } while( true );
}

