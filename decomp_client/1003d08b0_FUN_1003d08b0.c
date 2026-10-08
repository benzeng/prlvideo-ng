
undefined8 * FUN_1003d08b0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  undefined8 uVar9;
  QVariant *pQVar10;
  long *plVar11;
  uint uVar12;
  QVariant local_188;
  QArrayData *local_178;
  QVariant local_170;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QString local_148;
  QVariant local_140;
  QArrayData *local_130;
  QVariant local_128;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  iVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fa810);
  *param_1 = PTR_shared_null_1021e15d0;
  puVar4 = PTR_s_VmConfig_1021f1e00;
  iVar7 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar7 = (int)sVar8;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar7);
  uVar9 = FUN_1003ae480(param_1,&local_50);
  puVar5 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
  iVar7 = -1;
  if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
    iVar7 = (int)sVar8;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar7);
  pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_58);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QVariant::operator=(pQVar10,(QVariant *)&local_68);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d09b7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003d09b7:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d09e7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003d09e7:
  uVar3 = DAT_100e1b184;
  uVar2 = DAT_100e1b180;
  uVar1 = DAT_100e1b17c;
  uVar12 = 0;
  do {
    iVar7 = QListWidget::count();
    if (iVar7 <= (int)uVar12) {
      return param_1;
    }
    plVar11 = (long *)QListWidget::item(iVar6);
    if (plVar11 != (long *)0x0) {
      local_80 = (QArrayData *)QString::fromAscii_helper("%1[%2].Index",0xc);
      puVar5 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
      iVar7 = -1;
      if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
        sVar8 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
        iVar7 = (int)sVar8;
      }
      local_88 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar7);
      QString::arg(&local_78,&local_80,&local_88,0,0x20);
      (**(code **)(*plVar11 + 0x20))(&local_98,plVar11,uVar3);
      iVar7 = QVariant::toInt((bool *)&local_98);
      QString::arg(&local_70,&local_78,(long)iVar7,0,10,0x20);
      QVariant::~QVariant(&local_98);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0b2d;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003d0b2d:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0b5d;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1003d0b5d:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0b8d;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1003d0b8d:
      iVar7 = -1;
      if (puVar4 != (undefined *)0x0) {
        sVar8 = _strlen(puVar4);
        iVar7 = (int)sVar8;
      }
      local_a0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar7);
      uVar9 = FUN_1003ae480(param_1,&local_a0);
      pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_70);
      (**(code **)(*plVar11 + 0x20))(&local_b0,plVar11,uVar2);
      QVariant::operator=(pQVar10,&local_b0);
      QVariant::~QVariant(&local_b0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0c46;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1003d0c46:
      local_c8 = (QArrayData *)QString::fromAscii_helper("%1[%2].Type",0xb);
      puVar5 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
      iVar7 = -1;
      if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
        sVar8 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
        iVar7 = (int)sVar8;
      }
      local_d0 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar7);
      QString::arg(&local_c0,&local_c8,&local_d0,0,0x20);
      (**(code **)(*plVar11 + 0x20))(&local_e0,plVar11,uVar3);
      iVar7 = QVariant::toInt((bool *)&local_e0);
      QString::arg(&local_b8,&local_c0,(long)iVar7,0,10,0x20);
      QString::operator=(&local_70,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0d36;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_1003d0d36:
      QVariant::~QVariant(&local_e0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0d74;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1003d0d74:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0daa;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1003d0daa:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0de0;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1003d0de0:
      iVar7 = -1;
      if (puVar4 != (undefined *)0x0) {
        sVar8 = _strlen(puVar4);
        iVar7 = (int)sVar8;
      }
      local_e8 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar7);
      uVar9 = FUN_1003ae480(param_1,&local_e8);
      pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_70);
      (**(code **)(*plVar11 + 0x20))(&local_f8,plVar11,uVar1);
      QVariant::operator=(pQVar10,&local_f8);
      QVariant::~QVariant(&local_f8);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0e8f;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_1003d0e8f:
      local_110 = (QArrayData *)QString::fromAscii_helper("%1[%2].BootingNumber",0x14);
      puVar5 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
      iVar7 = -1;
      if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
        sVar8 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
        iVar7 = (int)sVar8;
      }
      local_118 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar7);
      QString::arg(&local_108,&local_110,&local_118,0,0x20);
      (**(code **)(*plVar11 + 0x20))(&local_128,plVar11,uVar3);
      iVar7 = QVariant::toInt((bool *)&local_128);
      QString::arg(&local_100,&local_108,(long)iVar7,0,10,0x20);
      QString::operator=(&local_70,&local_100);
      if (*(int *)local_100.field0_0x0 != -1) {
        if (*(int *)local_100.field0_0x0 != 0) {
          LOCK();
          *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
          local_31 = *(int *)local_100.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0f89;
        }
        QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
      }
LAB_1003d0f89:
      QVariant::~QVariant(&local_128);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0fc7;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1003d0fc7:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0ffd;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1003d0ffd:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d1033;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1003d1033:
      iVar7 = -1;
      if (puVar4 != (undefined *)0x0) {
        sVar8 = _strlen(puVar4);
        iVar7 = (int)sVar8;
      }
      local_130 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar7);
      uVar9 = FUN_1003ae480(param_1,&local_130);
      pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_70);
      QVariant::QVariant(&local_140,uVar12);
      QVariant::operator=(pQVar10,&local_140);
      QVariant::~QVariant(&local_140);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d10d8;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_1003d10d8:
      local_158 = (QArrayData *)QString::fromAscii_helper("%1[%2].InUse",0xc);
      puVar5 = PTR_s_Settings_Startup_BootingOrder_Bo_102273e38;
      iVar7 = -1;
      if (PTR_s_Settings_Startup_BootingOrder_Bo_102273e38 != (undefined *)0x0) {
        sVar8 = _strlen(PTR_s_Settings_Startup_BootingOrder_Bo_102273e38);
        iVar7 = (int)sVar8;
      }
      local_160 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar7);
      QString::arg(&local_150,&local_158,&local_160,0,0x20);
      (**(code **)(*plVar11 + 0x20))(&local_170,plVar11,uVar3);
      iVar7 = QVariant::toInt((bool *)&local_170);
      QString::arg(&local_148,&local_150,(long)iVar7,0,10,0x20);
      QString::operator=(&local_70,&local_148);
      if (*(int *)local_148.field0_0x0 != -1) {
        if (*(int *)local_148.field0_0x0 != 0) {
          LOCK();
          *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
          local_31 = *(int *)local_148.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d11d2;
        }
        QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
      }
LAB_1003d11d2:
      QVariant::~QVariant(&local_170);
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d1210;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_1003d1210:
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d1246;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_1003d1246:
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d127c;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_1003d127c:
      iVar7 = -1;
      if (puVar4 != (undefined *)0x0) {
        sVar8 = _strlen(puVar4);
        iVar7 = (int)sVar8;
      }
      local_178 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar7);
      uVar9 = FUN_1003ae480(param_1,&local_178);
      pQVar10 = (QVariant *)FUN_1002edf40(uVar9,&local_70);
      (**(code **)(*plVar11 + 0x20))(&local_48,plVar11,10);
      iVar7 = QVariant::toInt((bool *)&local_48);
      QVariant::~QVariant(&local_48);
      QVariant::QVariant(&local_188,iVar7 == 2);
      QVariant::operator=(pQVar10,&local_188);
      QVariant::~QVariant(&local_188);
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d1353;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1003d1353:
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0a30;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
    }
LAB_1003d0a30:
    uVar12 = uVar12 + 1;
  } while( true );
}

