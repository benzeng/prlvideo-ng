
undefined8 * FUN_1007ded80(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  code *pcVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  size_t sVar5;
  QVariant *pQVar6;
  int iVar7;
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
  
  uVar4 = CAbstractWizardActionStateProvider::wizardModel();
  *param_1 = PTR_shared_null_1021e15d0;
  pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
  iVar7 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar5 = _strlen(pcVar2);
    iVar7 = (int)sVar5;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
  pQVar6 = (QVariant *)FUN_1002edf40(param_1);
  QVariant::QVariant(&local_50,false);
  QVariant::operator=(pQVar6,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007dee49;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007dee49:
  if (param_3 == 0xb) {
    CAbstractWizardActionStateProvider::getActionStateForPage(&local_58,param_2,0xb,param_4);
    FUN_100076af0(param_1,&local_58);
    if (*(int *)(local_58 + 0x10) != -1) {
      if (*(int *)(local_58 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_58 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007dee9e;
      }
      QHashData::free_helper(local_58);
    }
  }
LAB_1007dee9e:
  if (param_4 != 1) {
    if (param_4 != 0) {
      if (param_3 != 3) {
        return param_1;
      }
      if (param_4 != 2) {
        return param_1;
      }
      pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
      iVar7 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar5 = _strlen(pcVar2);
        iVar7 = (int)sVar5;
      }
      local_100 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
      pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_100);
      QVariant::QVariant(&local_110,true);
      QVariant::operator=(pQVar6,&local_110);
      QVariant::~QVariant(&local_110);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007df3f8;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_1007df3f8:
      pcVar2 = *(char **)PTR_ActionText_1021e14c8;
      iVar7 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar5 = _strlen(pcVar2);
        iVar7 = (int)sVar5;
      }
      local_118 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
      pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_118);
      QMetaObject::tr((char *)&local_130,PTR_staticMetaObject_1021e1520,(int)PTR_s_Done_102270108);
      QVariant::QVariant(&local_128,&local_130);
      QVariant::operator=(pQVar6,&local_128);
      QVariant::~QVariant(&local_128);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007df4c1;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
LAB_1007df4c1:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007df4f7;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1007df4f7:
      pcVar2 = *(char **)PTR_ActionEnabled_1021e14e0;
      iVar7 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar5 = _strlen(pcVar2);
        iVar7 = (int)sVar5;
      }
      local_138 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
      pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_138);
      QVariant::QVariant(&local_148,true);
      QVariant::operator=(pQVar6,&local_148);
      QVariant::~QVariant(&local_148);
      if (*(int *)local_138 == -1) {
        return param_1;
      }
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
      return param_1;
    }
    if (param_3 != 1) {
      return param_1;
    }
    pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar7 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar5 = _strlen(pcVar2);
      iVar7 = (int)sVar5;
    }
    local_60 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
    pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_60);
    QVariant::QVariant(&local_70,true);
    QVariant::operator=(pQVar6,&local_70);
    QVariant::~QVariant(&local_70);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007df1ac;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1007df1ac:
    pcVar2 = *(char **)PTR_ActionText_1021e14c8;
    iVar7 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar5 = _strlen(pcVar2);
      iVar7 = (int)sVar5;
    }
    local_78 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
    pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_78);
    QMetaObject::tr((char *)&local_90,(char *)&PTR_staticMetaObject_10222e9a0,0x1e1928e);
    QVariant::QVariant(&local_88,&local_90);
    QVariant::operator=(pQVar6,&local_88);
    QVariant::~QVariant(&local_88);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007df263;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_1007df263:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007df293;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1007df293:
    pcVar2 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar7 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar5 = _strlen(pcVar2);
      iVar7 = (int)sVar5;
    }
    local_98 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
    pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_98);
    QVariant::QVariant(&local_a8,true);
    QVariant::operator=(pQVar6,&local_a8);
    QVariant::~QVariant(&local_a8);
    if (*(int *)local_98 == -1) {
      return param_1;
    }
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_98,2,8);
    return param_1;
  }
  if (param_3 != 4) {
    return param_1;
  }
  pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
  iVar7 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar5 = _strlen(pcVar2);
    iVar7 = (int)sVar5;
  }
  local_b0 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
  pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_b0);
  QVariant::QVariant(&local_c0,true);
  QVariant::operator=(pQVar6,&local_c0);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007def54;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1007def54:
  pcVar2 = *(char **)PTR_ActionText_1021e14c8;
  iVar7 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar5 = _strlen(pcVar2);
    iVar7 = (int)sVar5;
  }
  local_c8 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
  pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_c8);
  QMetaObject::tr((char *)&local_e0,PTR_staticMetaObject_1021e1520,(int)PTR_s_Cancel_102270020);
  QVariant::QVariant(&local_d8,&local_e0);
  QVariant::operator=(pQVar6,&local_d8);
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007df01d;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1007df01d:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007df053;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1007df053:
  pcVar2 = *(char **)PTR_ActionEnabled_1021e14e0;
  iVar7 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar5 = _strlen(pcVar2);
    iVar7 = (int)sVar5;
  }
  local_e8 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
  pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_e8);
  bVar3 = (bool)FUN_1007de9a0(uVar4);
  QVariant::QVariant(&local_f8,bVar3);
  QVariant::operator=(pQVar6,&local_f8);
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

