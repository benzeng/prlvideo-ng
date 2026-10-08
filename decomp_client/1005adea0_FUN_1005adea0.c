
undefined8 * FUN_1005adea0(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  code *pcVar1;
  char *pcVar2;
  bool bVar3;
  long lVar4;
  size_t sVar5;
  QVariant *pQVar6;
  int iVar7;
  QString local_150;
  QVariant local_148;
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QVariant local_118;
  QArrayData *local_108;
  QString local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QString local_b0;
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
  
  lVar4 = CAbstractWizardActionStateProvider::wizardModel();
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
      if ((bool)local_31) goto LAB_1005adf69;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005adf69:
  if (param_3 == 4) {
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
        if ((bool)local_31) goto LAB_1005ae000;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1005ae000:
    pcVar2 = *(char **)PTR_ActionText_1021e14c8;
    if (*(int *)(lVar4 + 0x30) == 0) {
      iVar7 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar5 = _strlen(pcVar2);
        iVar7 = (int)sVar5;
      }
      local_78 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
      pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_78);
      QMetaObject::tr((char *)&local_90,(char *)&PTR_staticMetaObject_10221dfe0,0x1dcdd79);
      QVariant::QVariant(&local_88,&local_90);
      QVariant::operator=(pQVar6,&local_88);
      QVariant::~QVariant(&local_88);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ae22d;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1005ae22d:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ae25d;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
    else {
      iVar7 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar5 = _strlen(pcVar2);
        iVar7 = (int)sVar5;
      }
      local_98 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
      pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_98);
      QMetaObject::tr((char *)&local_b0,(char *)&PTR_staticMetaObject_10221dfe0,0x1dc154b);
      QVariant::QVariant(&local_a8,&local_b0);
      QVariant::operator=(pQVar6,&local_a8);
      QVariant::~QVariant(&local_a8);
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_31 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ae0d7;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_1005ae0d7:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ae25d;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
LAB_1005ae25d:
    pcVar2 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar7 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar5 = _strlen(pcVar2);
      iVar7 = (int)sVar5;
    }
    local_b8 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
    pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_b8);
    bVar3 = (bool)FUN_1005acae0(lVar4);
    QVariant::QVariant(&local_c8,bVar3);
    QVariant::operator=(pQVar6,&local_c8);
    QVariant::~QVariant(&local_c8);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ae309;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
  }
  else if (param_3 == 0xb) {
    CAbstractWizardActionStateProvider::getActionStateForPage(&local_58,param_2,0xb,param_4);
    FUN_100076af0(param_1,&local_58);
    if (*(int *)(local_58 + 0x10) != -1) {
      if (*(int *)(local_58 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_58 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ae309;
      }
      QHashData::free_helper(local_58);
    }
  }
LAB_1005ae309:
  if (param_4 != 0) {
    return param_1;
  }
  if (param_3 != 6) {
    if (param_3 != 1) {
      return param_1;
    }
    pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
    iVar7 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar5 = _strlen(pcVar2);
      iVar7 = (int)sVar5;
    }
    local_d0 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
    pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_d0);
    QVariant::QVariant(&local_e0,true);
    QVariant::operator=(pQVar6,&local_e0);
    QVariant::~QVariant(&local_e0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ae584;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1005ae584:
    pcVar2 = *(char **)PTR_ActionText_1021e14c8;
    iVar7 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar5 = _strlen(pcVar2);
      iVar7 = (int)sVar5;
    }
    local_e8 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
    pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_e8);
    QMetaObject::tr((char *)&local_100,(char *)&PTR_staticMetaObject_10221dfe0,0x1de7b3a);
    QVariant::QVariant(&local_f8,&local_100);
    QVariant::operator=(pQVar6,&local_f8);
    QVariant::~QVariant(&local_f8);
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        local_31 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ae64a;
      }
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
LAB_1005ae64a:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ae680;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1005ae680:
    pcVar2 = *(char **)PTR_ActionEnabled_1021e14e0;
    iVar7 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar5 = _strlen(pcVar2);
      iVar7 = (int)sVar5;
    }
    local_108 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
    pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_108);
    QVariant::QVariant(&local_118,*(long *)(lVar4 + 0x40) != 0);
    QVariant::operator=(pQVar6,&local_118);
    QVariant::~QVariant(&local_118);
    if (*(int *)local_108 == -1) {
      return param_1;
    }
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      UNLOCK();
      if (*(int *)local_108 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_108,2,8);
    return param_1;
  }
  if (*(int *)(lVar4 + 0x30) != 0) {
    return param_1;
  }
  pcVar2 = *(char **)PTR_ActionVisible_1021e14e8;
  iVar7 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar5 = _strlen(pcVar2);
    iVar7 = (int)sVar5;
  }
  local_120 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
  pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_120);
  QVariant::QVariant(&local_130,true);
  QVariant::operator=(pQVar6,&local_130);
  QVariant::~QVariant(&local_130);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ae3cf;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1005ae3cf:
  pcVar2 = *(char **)PTR_ActionText_1021e14c8;
  iVar7 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar5 = _strlen(pcVar2);
    iVar7 = (int)sVar5;
  }
  local_138 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
  pQVar6 = (QVariant *)FUN_1002edf40(param_1,&local_138);
  QMetaObject::tr((char *)&local_150,(char *)&PTR_staticMetaObject_10221dfe0,0x1e03941);
  QVariant::QVariant(&local_148,&local_150);
  QVariant::operator=(pQVar6,&local_148);
  QVariant::~QVariant(&local_148);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_31 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ae495;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_1005ae495:
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
  return param_1;
}

