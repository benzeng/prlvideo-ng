
undefined8 * FUN_100770f10(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  code *pcVar1;
  char *pcVar2;
  long lVar3;
  size_t sVar4;
  QVariant *pQVar5;
  int iVar6;
  bool bVar7;
  QVariant local_198;
  QArrayData *local_188;
  QString local_180;
  QVariant local_178;
  QArrayData *local_168;
  QVariant local_160;
  QArrayData *local_150;
  QVariant local_148;
  QArrayData *local_138;
  QString local_130;
  QVariant local_128;
  QArrayData *local_118;
  QVariant local_110;
  QArrayData *local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QString local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QString local_90;
  QVariant local_88;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  _func_void_Node_ptr *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar3 = CAbstractWizardActionStateProvider::wizardModel();
  *param_1 = PTR_shared_null_1021e15d0;
  pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
  iVar6 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar4 = _strlen(pcVar2);
    iVar6 = (int)sVar4;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
  pQVar5 = (QVariant *)FUN_1002edf40(param_1);
  QVariant::QVariant(&local_50,false);
  QVariant::operator=(pQVar5,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100770fde;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100770fde:
  if (param_3 == 0xb) {
    CAbstractWizardActionStateProvider::getActionStateForPage(&local_58,param_2,0xb,param_4);
    FUN_100076af0(param_1,&local_58);
    if (*(int *)(local_58 + 0x10) == -1) {
      bVar7 = false;
    }
    else {
      if (*(int *)(local_58 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_58 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) {
          bVar7 = false;
          goto LAB_100771294;
        }
      }
      QHashData::free_helper(local_58);
      bVar7 = false;
    }
  }
  else {
    bVar7 = param_3 == 4;
    if ((bVar7) && (param_4 == 1)) {
      pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar6 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar4 = _strlen(pcVar2);
        iVar6 = (int)sVar4;
      }
      local_60 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
      pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_60);
      QVariant::QVariant(&local_70,true);
      QVariant::operator=(pQVar5,&local_70);
      QVariant::~QVariant(&local_70);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007710c9;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1007710c9:
      pcVar2 = *(char **)PTR_ActionText_1021e14c8;
      iVar6 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar4 = _strlen(pcVar2);
        iVar6 = (int)sVar4;
      }
      local_78 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
      pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_78);
      QMetaObject::tr((char *)&local_90,(char *)&PTR_staticMetaObject_10222a0f0,0x1dc154b);
      QVariant::QVariant(&local_88,&local_90);
      QVariant::operator=(pQVar5,&local_88);
      QVariant::~QVariant(&local_88);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100771184;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100771184:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007711b4;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1007711b4:
      pcVar2 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar6 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar4 = _strlen(pcVar2);
        iVar6 = (int)sVar4;
      }
      local_98 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
      pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_98);
      bVar7 = (bool)FUN_100770af0(lVar3);
      QVariant::QVariant(&local_a8,bVar7);
      QVariant::operator=(pQVar5,&local_a8);
      QVariant::~QVariant(&local_a8);
      bVar7 = true;
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100771294;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
  }
LAB_100771294:
  if (param_4 != 0) {
    return param_1;
  }
  if (*(int *)(lVar3 + 0x24) != 1) {
    if (param_3 == 3) {
      pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar6 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar4 = _strlen(pcVar2);
        iVar6 = (int)sVar4;
      }
      local_100 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
      pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_100);
      QVariant::QVariant(&local_110,true);
      QVariant::operator=(pQVar5,&local_110);
      QVariant::~QVariant(&local_110);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007715c1;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_1007715c1:
      pcVar2 = *(char **)PTR_ActionText_1021e14c8;
      iVar6 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar4 = _strlen(pcVar2);
        iVar6 = (int)sVar4;
      }
      local_118 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
      pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_118);
      QMetaObject::tr((char *)&local_130,(char *)&PTR_staticMetaObject_10222a0f0,0x1e15f74);
      QVariant::QVariant(&local_128,&local_130);
      QVariant::operator=(pQVar5,&local_128);
      QVariant::~QVariant(&local_128);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10077168b;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
LAB_10077168b:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007716c1;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1007716c1:
      pcVar2 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar6 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar4 = _strlen(pcVar2);
        iVar6 = (int)sVar4;
      }
      local_138 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
      pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_138);
      QVariant::QVariant(&local_148,true);
      QVariant::operator=(pQVar5,&local_148);
      QVariant::~QVariant(&local_148);
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100771767;
        }
        QArrayData::deallocate(local_138,2,8);
      }
    }
LAB_100771767:
    if (!bVar7) {
      return param_1;
    }
    pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar6 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar4 = _strlen(pcVar2);
      iVar6 = (int)sVar4;
    }
    local_150 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
    pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_150);
    QVariant::QVariant(&local_160,true);
    QVariant::operator=(pQVar5,&local_160);
    QVariant::~QVariant(&local_160);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100771816;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_100771816:
    pcVar2 = *(char **)PTR_ActionText_1021e14c8;
    iVar6 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar4 = _strlen(pcVar2);
      iVar6 = (int)sVar4;
    }
    local_168 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
    pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_168);
    QMetaObject::tr((char *)&local_180,(char *)&PTR_staticMetaObject_10222a0f0,0x1e15f81);
    QVariant::QVariant(&local_178,&local_180);
    QVariant::operator=(pQVar5,&local_178);
    QVariant::~QVariant(&local_178);
    if (*(int *)local_180.field0_0x0 != -1) {
      if (*(int *)local_180.field0_0x0 != 0) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
        local_31 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007718e0;
      }
      QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
    }
LAB_1007718e0:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100771916;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_100771916:
    pcVar2 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar6 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar4 = _strlen(pcVar2);
      iVar6 = (int)sVar4;
    }
    local_188 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
    pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_188);
    QVariant::QVariant(&local_198,true);
    QVariant::operator=(pQVar5,&local_198);
    QVariant::~QVariant(&local_198);
    if (*(int *)local_188 == -1) {
      return param_1;
    }
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      UNLOCK();
      if (*(int *)local_188 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_188,2,8);
    return param_1;
  }
  if (param_3 != 1) {
    return param_1;
  }
  pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
  iVar6 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar4 = _strlen(pcVar2);
    iVar6 = (int)sVar4;
  }
  local_b0 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
  pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_b0);
  QVariant::QVariant(&local_c0,true);
  QVariant::operator=(pQVar5,&local_c0);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077135e;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10077135e:
  pcVar2 = *(char **)PTR_ActionText_1021e14c8;
  iVar6 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar4 = _strlen(pcVar2);
    iVar6 = (int)sVar4;
  }
  local_c8 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
  pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_c8);
  QMetaObject::tr((char *)&local_e0,(char *)&PTR_staticMetaObject_10222a0f0,0x1de7b3a);
  QVariant::QVariant(&local_d8,&local_e0);
  QVariant::operator=(pQVar5,&local_d8);
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100771428;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_100771428:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077145e;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10077145e:
  pcVar2 = *(char **)PTR_ActionEnabled_1021e14e0;
  iVar6 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar4 = _strlen(pcVar2);
    iVar6 = (int)sVar4;
  }
  local_e8 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
  pQVar5 = (QVariant *)FUN_1002edf40(param_1,&local_e8);
  QVariant::QVariant(&local_f8,true);
  QVariant::operator=(pQVar5,&local_f8);
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
  return param_1;
}

