
undefined8 FUN_1009963e0(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  size_t sVar11;
  QVariant *pQVar12;
  Data *pDVar13;
  QString local_190;
  QVariant local_188;
  QArrayData *local_178;
  QVariant local_170;
  QArrayData *local_160;
  QArrayData *local_158;
  QString local_150;
  QVariant local_148;
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QString local_118;
  QVariant local_110;
  QArrayData *local_100;
  Data *local_f8;
  QArrayData *local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  Data *local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar7 = CAbstractWizardActionStateProvider::wizardModel();
  lVar8 = CAbstractWizardModel::page(iVar7);
  plVar9 = (long *)0x0;
  if (lVar8 != 0) {
    plVar9 = (long *)___dynamic_cast(lVar8,PTR_typeinfo_1021e16e8,&PTR_vtable_102234380,0);
  }
  CAbstractWizardActionStateProvider::getActionStateForPage(param_1,param_2,param_3,param_4);
  puVar3 = PTR_ActionVisible_1021e14e8;
  switch(param_3) {
  case 0:
    break;
  case 1:
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar7 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar11 = _strlen(pcVar1);
      iVar7 = (int)sVar11;
    }
    local_d0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
    FUN_1002edf40(param_1,&local_d0);
    cVar6 = QVariant::toBool();
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100996590;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100996590:
    puVar3 = PTR_ActionEnabled_1021e14e0;
    if (cVar6 != '\0') {
      pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar7 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar11 = _strlen(pcVar1);
        iVar7 = (int)sVar11;
      }
      local_d8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
      pQVar12 = (QVariant *)FUN_1002edf40(param_1,&local_d8);
      pcVar1 = *(char **)puVar3;
      iVar7 = -1;
      if (pcVar1 != (char *)0x0) {
        sVar11 = _strlen(pcVar1);
        iVar7 = (int)sVar11;
      }
      local_f0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
      FUN_1002edf40(param_1,&local_f0);
      cVar6 = QVariant::toBool();
      if ((cVar6 == '\0') || (*(char *)(param_2 + 0x18) != '\0')) {
        bVar5 = false;
LAB_100996631:
        bVar2 = bVar5;
        bVar5 = false;
      }
      else {
        FUN_100997830(&local_f8);
        iVar7 = *(int *)(local_f8 + 8);
        bVar2 = true;
        if (iVar7 == *(int *)(local_f8 + 0xc)) {
          bVar5 = true;
        }
        else {
          pDVar13 = local_f8 + (long)iVar7 * 8 + 0x10;
          lVar8 = (long)*(int *)(local_f8 + 0xc) * 8 + (long)iVar7 * -8;
          do {
            bVar5 = true;
            if (*(int *)pDVar13 == param_4) goto LAB_100996631;
            pDVar13 = pDVar13 + 8;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
          bVar5 = true;
        }
      }
      QVariant::QVariant(&local_e8,bVar5);
      QVariant::operator=(pQVar12,&local_e8);
      QVariant::~QVariant(&local_e8);
      if ((bVar2) && (*(int *)local_f8 != -1)) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10099668d;
        }
        QListData::dispose(local_f8);
      }
LAB_10099668d:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009966c3;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_1009966c3:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009966f9;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
    }
LAB_1009966f9:
    pcVar1 = *(char **)PTR_ActionText_1021e14c8;
    iVar7 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar11 = _strlen(pcVar1);
      iVar7 = (int)sVar11;
    }
    local_100 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
    pQVar12 = (QVariant *)FUN_1002edf40(param_1,&local_100);
    QMetaObject::tr((char *)&local_118,PTR_staticMetaObject_1021e1520,(int)PTR_s_Continue_10227de40)
    ;
    QVariant::QVariant(&local_110,&local_118);
    QVariant::operator=(pQVar12,&local_110);
    QVariant::~QVariant(&local_110);
    if (*(int *)local_118.field0_0x0 != -1) {
      if (*(int *)local_118.field0_0x0 != 0) {
        LOCK();
        *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
        local_31 = *(int *)local_118.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009967c6;
      }
      QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
    }
LAB_1009967c6:
    if (*(int *)local_100 == -1) {
      return param_1;
    }
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      UNLOCK();
      if (*(int *)local_100 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_100,2,8);
    return param_1;
  default:
    goto switchD_100996466_caseD_2;
  case 3:
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar7 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar11 = _strlen(pcVar1);
      iVar7 = (int)sVar11;
    }
    local_158 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
    FUN_1002edf40(param_1,&local_158);
    cVar6 = QVariant::toBool();
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10099688a;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_10099688a:
    if (cVar6 != '\0') {
      uVar10 = CAbstractWizardActionStateProvider::wizardModel();
      lVar8 = FUN_100990b00(uVar10);
      if ((*(byte *)(lVar8 + 0x20) & 8) != 0) {
        pcVar1 = *(char **)puVar3;
        iVar7 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar11 = _strlen(pcVar1);
          iVar7 = (int)sVar11;
        }
        local_160 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
        pQVar12 = (QVariant *)FUN_1002edf40(param_1);
        QVariant::QVariant(&local_170,false);
        QVariant::operator=(pQVar12,&local_170);
        QVariant::~QVariant(&local_170);
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100996948;
          }
          QArrayData::deallocate(local_160,2,8);
        }
      }
    }
LAB_100996948:
    pcVar1 = *(char **)PTR_ActionText_1021e14c8;
    iVar7 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar11 = _strlen(pcVar1);
      iVar7 = (int)sVar11;
    }
    local_178 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
    pQVar12 = (QVariant *)FUN_1002edf40(param_1,&local_178);
    QMetaObject::tr((char *)&local_190,PTR_staticMetaObject_1021e1520,(int)PTR_s_Done_10227de48);
    QVariant::QVariant(&local_188,&local_190);
    QVariant::operator=(pQVar12,&local_188);
    QVariant::~QVariant(&local_188);
    if (*(int *)local_190.field0_0x0 != -1) {
      if (*(int *)local_190.field0_0x0 != 0) {
        LOCK();
        *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
        local_31 = *(int *)local_190.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100996a15;
      }
      QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
    }
LAB_100996a15:
    if (*(int *)local_178 == -1) {
      return param_1;
    }
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      UNLOCK();
      if (*(int *)local_178 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_178,2,8);
    return param_1;
  case 4:
    pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar7 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar11 = _strlen(pcVar1);
      iVar7 = (int)sVar11;
    }
    local_120 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
    pQVar12 = (QVariant *)FUN_1002edf40(param_1,&local_120);
    QVariant::QVariant(&local_130,param_4 == 0xc);
    QVariant::operator=(pQVar12,&local_130);
    QVariant::~QVariant(&local_130);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100996b03;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_100996b03:
    pcVar1 = *(char **)PTR_ActionText_1021e14c8;
    iVar7 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar11 = _strlen(pcVar1);
      iVar7 = (int)sVar11;
    }
    local_138 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
    pQVar12 = (QVariant *)FUN_1002edf40(param_1,&local_138);
    QMetaObject::tr((char *)&local_150,PTR_staticMetaObject_1021e1520,0x1e32e58);
    QVariant::QVariant(&local_148,&local_150);
    QVariant::operator=(pQVar12,&local_148);
    QVariant::~QVariant(&local_148);
    if (*(int *)local_150.field0_0x0 != -1) {
      if (*(int *)local_150.field0_0x0 != 0) {
        LOCK();
        *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
        local_31 = *(int *)local_150.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100996bcd;
      }
      QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
    }
LAB_100996bcd:
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        UNLOCK();
        if (*(int *)local_138 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_138,2,8);
    }
    goto switchD_100996466_caseD_2;
  }
  pcVar1 = *(char **)PTR_ActionVisible_1021e14e8;
  iVar7 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar11 = _strlen(pcVar1);
    iVar7 = (int)sVar11;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
  pQVar12 = (QVariant *)FUN_1002edf40(param_1,&local_40);
  pcVar1 = *(char **)puVar3;
  iVar7 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar11 = _strlen(pcVar1);
    iVar7 = (int)sVar11;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
  FUN_1002edf40(param_1,&local_58);
  cVar6 = QVariant::toBool();
  if (cVar6 == '\0') {
    bVar4 = false;
  }
  else {
    CAbstractWizardActionStateProvider::wizardModel();
    CAbstractWizardModel::pageFlow();
    bVar4 = CAbstractWizardPageFlow::isOnFinalPage();
    bVar4 = bVar4 ^ 1;
  }
  QVariant::QVariant(&local_50,(bool)bVar4);
  QVariant::operator=(pQVar12,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100996c67;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100996c67:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100996c97;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100996c97:
  pcVar1 = *(char **)puVar3;
  iVar7 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar11 = _strlen(pcVar1);
    iVar7 = (int)sVar11;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
  pQVar12 = (QVariant *)FUN_1002edf40(param_1,&local_60);
  pcVar1 = *(char **)puVar3;
  iVar7 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar11 = _strlen(pcVar1);
    iVar7 = (int)sVar11;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
  FUN_1002edf40(param_1,&local_78);
  bVar4 = QVariant::toBool();
  QVariant::QVariant(&local_70,(bool)(param_4 != 0xc & bVar4));
  QVariant::operator=(pQVar12,&local_70);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100996d66;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100996d66:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100996d96;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100996d96:
  pcVar1 = *(char **)puVar3;
  iVar7 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar11 = _strlen(pcVar1);
    iVar7 = (int)sVar11;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
  FUN_1002edf40(param_1,&local_80);
  cVar6 = QVariant::toBool();
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100996e05;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100996e05:
  puVar3 = PTR_ActionEnabled_1021e14e0;
  if (cVar6 != '\0') {
    pcVar1 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar7 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar11 = _strlen(pcVar1);
      iVar7 = (int)sVar11;
    }
    local_88 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
    pQVar12 = (QVariant *)FUN_1002edf40(param_1,&local_88);
    pcVar1 = *(char **)puVar3;
    iVar7 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar11 = _strlen(pcVar1);
      iVar7 = (int)sVar11;
    }
    local_a0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
    FUN_1002edf40(param_1,&local_a0);
    cVar6 = QVariant::toBool();
    if ((cVar6 == '\0') || (cVar6 = (**(code **)(*plVar9 + 0xe0))(plVar9), cVar6 == '\0')) {
      bVar5 = false;
LAB_100996ed1:
      bVar2 = bVar5;
      bVar5 = false;
    }
    else {
      FUN_100997830(&local_a8);
      iVar7 = *(int *)(local_a8 + 8);
      bVar2 = true;
      if (iVar7 == *(int *)(local_a8 + 0xc)) {
        bVar5 = true;
      }
      else {
        pDVar13 = local_a8 + (long)iVar7 * 8 + 0x10;
        lVar8 = (long)*(int *)(local_a8 + 0xc) * 8 + (long)iVar7 * -8;
        do {
          bVar5 = true;
          if (*(int *)pDVar13 == param_4) goto LAB_100996ed1;
          pDVar13 = pDVar13 + 8;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        bVar5 = true;
      }
    }
    QVariant::QVariant(&local_98,bVar5);
    QVariant::operator=(pQVar12,&local_98);
    QVariant::~QVariant(&local_98);
    if ((bVar2) && (*(int *)local_a8 != -1)) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100996f2d;
      }
      QListData::dispose(local_a8);
    }
LAB_100996f2d:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100996f63;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100996f63:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100996f93;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_100996f93:
  pcVar1 = *(char **)PTR_ActionText_1021e14c8;
  iVar7 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar11 = _strlen(pcVar1);
    iVar7 = (int)sVar11;
  }
  local_b0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar7);
  pQVar12 = (QVariant *)FUN_1002edf40(param_1,&local_b0);
  QMetaObject::tr((char *)&local_c8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Go_Back_10227de38);
  QVariant::QVariant(&local_c0,&local_c8);
  QVariant::operator=(pQVar12,&local_c0);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100997060;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100997060:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
switchD_100996466_caseD_2:
  return param_1;
}

