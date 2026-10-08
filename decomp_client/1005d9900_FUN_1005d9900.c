
void FUN_1005d9900(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  size_t sVar9;
  long lVar10;
  QString *pQVar11;
  undefined8 uVar12;
  char *pcVar13;
  int iVar14;
  bool bVar15;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QTypedArrayData<unsigned_short> *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pvVar7 = operator_new(0xb8);
  *(void **)(param_1 + 0x18) = pvVar7;
  CDeclarativeWizardProxyPage::sourcePage();
  FUN_1005df030(pvVar7);
  uVar8 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_1001a51c0(uVar8);
  FontUtils::setMacContextMenuFont(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x10),false);
  CPrlFileDevSelectorWidget::setCustomWidgetType
            (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),1);
  puVar3 = PTR_s_QMenu___background_color___33343_102271050;
  pQVar11 = *(QString **)(*(long *)(param_1 + 0x18) + 0x10);
  iVar14 = -1;
  if (PTR_s_QMenu___background_color___33343_102271050 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_QMenu___background_color___33343_102271050);
    iVar14 = (int)sVar9;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar14);
  QWidget::setStyleSheet(pQVar11);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d99de;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005d99de:
  pQVar11 = *(QString **)(*(long *)(param_1 + 0x18) + 0x10);
  QMetaObject::tr((char *)&local_48,"",(int)PTR_s_Select_a_default_folder_for_virt_1022706a0);
  CPrlFileDevSelectorWidget::setFileDialogAccessoryViewText(pQVar11);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d9a47;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005d9a47:
  cVar4 = FUN_100d80630(1);
  if (cVar4 == '\0') {
    lVar10 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    bVar15 = *(int *)(lVar10 + 0x50) != 0;
  }
  else {
    bVar15 = false;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
  (**(code **)(*plVar1 + 0x68))(plVar1,bVar15);
  uVar8 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
  lVar10 = FUN_10015a320(uVar8);
  if (lVar10 == 0) {
    pcVar13 = "(!)Error: can\'t get user instance";
LAB_1005d9d55:
    FUN_100df99c0("","prl_client_app",0,pcVar13);
    return;
  }
  lVar10 = CDispUser::getUserWorkspace();
  if (lVar10 == 0) {
    pcVar13 = "(!)Error: can\'t get user workspace";
    goto LAB_1005d9d55;
  }
  WidgetUtils::Adjuster::adjustWidgetText(*(QObject **)(*(long *)(param_1 + 0x18) + 0x18),-1,-1);
  uVar8 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
  FUN_10015a320(uVar8);
  CDispUser::getUserWorkspace();
  CDispUserWorkspace::getUserHomeFolder();
  pQVar11 = (QString *)CPrlFileDevSelectorWidget::getFileDevSelector();
  CPrlFileDevSelector::setServerUserHomeFolder(pQVar11);
  CDispUserWorkspace::getDefaultVmFolder();
  pQVar11 = (QString *)(param_1 + 0x20);
  QString::operator=(pQVar11,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d9b5c;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1005d9b5c:
  if (*(int *)(pQVar11->field0_0x0 + 4) == 0) {
    uVar8 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
    FUN_100109c10(&local_60,uVar8);
    QString::operator=(pQVar11,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d9bbb;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1005d9bbb:
  cVar4 = FUN_100d80630(1);
  if (cVar4 != '\0') {
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMD]",5);
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    cVar4 = SandboxFileAccessHelpers::checkAvailability(pQVar11,&local_68,false,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d9c32;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1005d9c32:
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_29 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d9c62;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1005d9c62:
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x30) = 1;
      cVar4 = FUN_100d80630(1);
      if (cVar4 != '\0') {
        FUN_100d898d0(&local_90);
        local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90;
        if (1 < *(int *)local_90 + 1U) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_29 = *(int *)local_90 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_38,0x1e02c5e);
        QString::append(&local_88);
        if (*(int *)local_38 != -1) {
          if (*(int *)local_38 != 0) {
            LOCK();
            *(int *)local_38 = *(int *)local_38 + -1;
            local_29 = *(int *)local_38 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005d9df5;
          }
          QArrayData::deallocate(local_38,2,8);
        }
LAB_1005d9df5:
        QString::operator=(pQVar11,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_29 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005d9e31;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_1005d9e31:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_29 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005d9e67;
          }
          QArrayData::deallocate(local_90,2,8);
        }
      }
LAB_1005d9e67:
      pQVar11 = (QString *)CPrlFileDevSelectorWidget::getFileDevSelector();
      CPrlFileDevSelector::setDefaultPath(pQVar11);
      goto LAB_1005d9e80;
    }
  }
  local_78 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  iVar14 = *(int *)local_78;
  local_80 = (QArrayData *)local_78;
  if (1 < iVar14 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_29 = *(int *)local_78 != 0;
    UNLOCK();
    local_80 = (QArrayData *)pQVar11->field0_0x0;
    iVar14 = *(int *)local_80;
  }
  if (1 < iVar14 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_29 = *(int *)local_80 != 0;
    UNLOCK();
  }
  CPrlFileDevSelectorWidget::setCurrentItem(uVar8,2,&local_78,&local_80,0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d9cec;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005d9cec:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d9e80;
    }
    QArrayData::deallocate((QArrayData *)local_78,2,8);
  }
LAB_1005d9e80:
  bVar5 = FUN_100d80630(1);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
  if (bVar5 == 0) {
    uVar12 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
    uVar12 = FUN_10016f500(uVar12);
    FUN_10061c2b0(uVar12,0x10000);
  }
  QAbstractButton::setChecked(SUB81(uVar8,0));
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x20);
  (**(code **)(*plVar1 + 0x68))(plVar1,bVar5 ^ 1);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x40);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  lVar10 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  uVar6 = 0;
  if ((*(int *)(lVar10 + 0x50) != 5) && (*(int *)(lVar10 + 0x50) != 10)) {
    uVar6 = 1;
  }
  (*pcVar2)(plVar1,uVar6);
  FUN_1005da6f0(param_1);
  if (*(int *)local_50 == -1) {
    return;
  }
  if (*(int *)local_50 != 0) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
    if (*(int *)local_50 != 0) {
      return;
    }
    local_29 = 0;
  }
  QArrayData::deallocate(local_50,2,8);
  return;
}

