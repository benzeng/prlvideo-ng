
void FUN_1005916d0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  size_t sVar6;
  QString *pQVar7;
  int iVar8;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QVariant local_60;
  QVariant local_50;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1470);
  if (lVar5 == 0) {
    return;
  }
  MappingHelpers::getFirstValue((QHash *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  puVar3 = PTR_s_UserPreferences_102274480;
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    plVar1 = *(long **)(param_1 + 0x18);
    pcVar2 = *(code **)(*plVar1 + 0x60);
    iVar8 = -1;
    if (PTR_s_UserPreferences_102274480 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_UserPreferences_102274480);
      iVar8 = (int)sVar6;
    }
    local_68 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar8);
    local_70 = (QArrayData *)QString::fromAscii_helper("UserWorkspace.UserVmDirectory",0x1d);
    (*pcVar2)(&local_60,plVar1,&local_68,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005917bf;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005917bf:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005917ef;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1005917ef:
    QVariant::toString();
    QString::operator=(&local_40,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_29 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100591839;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100591839:
    QVariant::~QVariant(&local_60);
    if (*(int *)(local_40.field0_0x0 + 4) == 0) goto LAB_100591af1;
  }
  cVar4 = FUN_100d80630(1);
  if (cVar4 != '\0') {
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMD]",5);
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    cVar4 = SandboxFileAccessHelpers::checkAvailability(&local_40,&local_80,false,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_29 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005918c7;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1005918c7:
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005918f7;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_1005918f7:
    if (cVar4 == '\0') {
      cVar4 = FUN_100d80630(1);
      if (cVar4 != '\0') {
        FUN_100d898d0(&local_a8);
        local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
        if (1 < *(int *)local_a8 + 1U) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + 1;
          local_29 = *(int *)local_a8 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_38,0x1e02c5e);
        QString::append(&local_a0);
        if (*(int *)local_38 != -1) {
          if (*(int *)local_38 != 0) {
            LOCK();
            *(int *)local_38 = *(int *)local_38 + -1;
            local_29 = *(int *)local_38 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100591a61;
          }
          QArrayData::deallocate(local_38,2,8);
        }
LAB_100591a61:
        QString::operator=(&local_40,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_29 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100591aa7;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_100591aa7:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_29 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100591add;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
LAB_100591add:
      pQVar7 = (QString *)CPrlFileDevSelectorWidget::getFileDevSelector();
      CPrlFileDevSelector::setDefaultPath(pQVar7);
      goto LAB_100591af1;
    }
  }
  local_90 = (QArrayData *)local_40.field0_0x0;
  iVar8 = *(int *)local_40.field0_0x0;
  if (1 < iVar8 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_29 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
    iVar8 = *(int *)local_40.field0_0x0;
  }
  local_98 = (QArrayData *)local_40.field0_0x0;
  if (1 < iVar8 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_29 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  CPrlFileDevSelectorWidget::setCurrentItem(lVar5,2,&local_90,&local_98,0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10059198c;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10059198c:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100591af1;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100591af1:
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

