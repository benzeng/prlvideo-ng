
void FUN_1003d6750(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  QArrayData *pQVar3;
  byte bVar4;
  int iVar5;
  QListWidget *pQVar6;
  QArrayData *pQVar7;
  QListWidgetItem *this;
  undefined8 uVar8;
  long lVar9;
  QVariant local_168;
  QVariant local_158;
  QString local_148;
  QVariant local_140;
  QString local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  pQVar6 = (QListWidget *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12b8);
  QListWidget::clear();
  if ((DAT_1023122b8 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_1023122b8), iVar5 != 0)) {
    DAT_1023122b0 = (uint *)PTR_shared_null_1021e15e8;
    ___cxa_atexit(FUN_1001e3400,&DAT_1023122b0,0x100000000);
    ___cxa_guard_release(&DAT_1023122b8);
  }
  if (DAT_1023122b0[3] != DAT_1023122b0[2]) goto LAB_1003d72d8;
  pQVar7 = (QArrayData *)QString::fromAscii_helper("Disks",5);
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1df28b4);
  pQVar3 = local_60;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_50 = local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_31 = *(int *)local_60 != 0;
    UNLOCK();
  }
  local_58 = pQVar7;
  FUN_1001c44c0(&DAT_1023122b0,&local_58);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6885;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003d6885:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d68b2;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d68b2:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d68e2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003d68e2:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d690f;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d690f:
  pQVar7 = (QArrayData *)QString::fromAscii_helper("SmartPhones",0xb);
  QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,0x1df28e3);
  pQVar3 = local_78;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_68 = local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  local_70 = pQVar7;
  FUN_1001c44c0(&DAT_1023122b0,&local_70);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d69ad;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003d69ad:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d69da;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d69da:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6a0a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003d6a0a:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6a37;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6a37:
  pQVar7 = (QArrayData *)QString::fromAscii_helper("HumanInterfaces",0xf);
  QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,0x1df2914);
  pQVar3 = local_90;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_80 = local_90;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
  }
  local_88 = pQVar7;
  FUN_1001c44c0(&DAT_1023122b0,&local_88);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6adb;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003d6adb:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6b08;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6b08:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6b3e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003d6b3e:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6b6b;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6b6b:
  pQVar7 = (QArrayData *)QString::fromAscii_helper("Audio",5);
  QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,0x1df2943);
  pQVar3 = local_a8;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_98 = local_a8;
  if (1 < *(int *)local_a8 + 1U) {
    LOCK();
    *(int *)local_a8 = *(int *)local_a8 + 1;
    local_31 = *(int *)local_a8 != 0;
    UNLOCK();
  }
  local_a0 = pQVar7;
  FUN_1001c44c0(&DAT_1023122b0,&local_a0);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6c18;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003d6c18:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6c45;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6c45:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6c7b;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003d6c7b:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6ca8;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6ca8:
  pQVar7 = (QArrayData *)QString::fromAscii_helper("SmartCards",10);
  QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,0x1df296b);
  pQVar3 = local_c0;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_b0 = local_c0;
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_31 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  local_b8 = pQVar7;
  FUN_1001c44c0(&DAT_1023122b0,&local_b8);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6d55;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003d6d55:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6d82;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6d82:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6db8;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1003d6db8:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6de5;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6de5:
  pQVar7 = (QArrayData *)QString::fromAscii_helper("Video",5);
  QMetaObject::tr((char *)&local_d8,PTR_staticMetaObject_1021e1520,0x1df298b);
  pQVar3 = local_d8;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_c8 = local_d8;
  if (1 < *(int *)local_d8 + 1U) {
    LOCK();
    *(int *)local_d8 = *(int *)local_d8 + 1;
    local_31 = *(int *)local_d8 != 0;
    UNLOCK();
  }
  local_d0 = pQVar7;
  FUN_1001c44c0(&DAT_1023122b0,&local_d0);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6e92;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003d6e92:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6ebf;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6ebf:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6ef5;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1003d6ef5:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6f22;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6f22:
  pQVar7 = (QArrayData *)QString::fromAscii_helper("Printers",8);
  QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_1021e1520,0x1df29ab);
  pQVar3 = local_f0;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_e0 = local_f0;
  if (1 < *(int *)local_f0 + 1U) {
    LOCK();
    *(int *)local_f0 = *(int *)local_f0 + 1;
    local_31 = *(int *)local_f0 != 0;
    UNLOCK();
  }
  local_e8 = pQVar7;
  FUN_1001c44c0(&DAT_1023122b0,&local_e8);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6fcf;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003d6fcf:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d6ffc;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d6ffc:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d7032;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1003d7032:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d705f;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d705f:
  pQVar7 = (QArrayData *)QString::fromAscii_helper("Communication",0xd);
  QMetaObject::tr((char *)&local_108,PTR_staticMetaObject_1021e1520,0x1df29cf);
  pQVar3 = local_108;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_f8 = local_108;
  if (1 < *(int *)local_108 + 1U) {
    LOCK();
    *(int *)local_108 = *(int *)local_108 + 1;
    local_31 = *(int *)local_108 != 0;
    UNLOCK();
  }
  local_100 = pQVar7;
  FUN_1001c44c0(&DAT_1023122b0,&local_100);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d710c;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003d710c:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d7139;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d7139:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d716f;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1003d716f:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d719c;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d719c:
  pQVar7 = (QArrayData *)QString::fromAscii_helper("Other",5);
  QMetaObject::tr((char *)&local_120,PTR_staticMetaObject_1021e1520,0x1dc3f0f);
  pQVar3 = local_120;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_110 = local_120;
  if (1 < *(int *)local_120 + 1U) {
    LOCK();
    *(int *)local_120 = *(int *)local_120 + 1;
    local_31 = *(int *)local_120 != 0;
    UNLOCK();
  }
  local_118 = pQVar7;
  FUN_1001c44c0(&DAT_1023122b0,&local_118);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d7248;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003d7248:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d7275;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d7275:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d72ab;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1003d72ab:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d72d8;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1003d72d8:
  if ((int)DAT_1023122b0[2] < (int)DAT_1023122b0[3]) {
    lVar9 = 0;
    do {
      if (1 < *DAT_1023122b0) {
        FUN_1001c4bd0(&DAT_1023122b0,DAT_1023122b0[1]);
      }
      puVar1 = *(undefined8 **)(DAT_1023122b0 + ((int)DAT_1023122b0[2] + lVar9) * 2 + 4);
      local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar1;
      if (1 < *(int *)local_130.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
        local_31 = *(int *)local_130.field0_0x0 != 0;
        UNLOCK();
      }
      local_128.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1[1];
      if (1 < *(int *)local_128.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + 1;
        local_31 = *(int *)local_128.field0_0x0 != 0;
        UNLOCK();
      }
      this = operator_new(0x30);
      QListWidgetItem::QListWidgetItem(this,pQVar6,0);
      QListWidgetItem::setFlags(this,*(uint *)(this + 0x28) | 0x10);
      uVar8 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
      QString::fromUtf8_helper((char *)&local_148,0x1df271e);
      QString::append(&local_148);
      FUN_1003e1800(&local_140,uVar8,&local_148,0);
      if (*(int *)local_148.field0_0x0 != -1) {
        if (*(int *)local_148.field0_0x0 != 0) {
          LOCK();
          *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
          local_31 = *(int *)local_148.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d740b;
        }
        QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
      }
LAB_1003d740b:
      bVar4 = QVariant::toBool();
      pcVar2 = *(code **)(*(long *)this + 0x28);
      QVariant::QVariant(&local_48,(uint)bVar4 * 2);
      (*pcVar2)(this,10,&local_48);
      QVariant::~QVariant(&local_48);
      pcVar2 = *(code **)(*(long *)this + 0x28);
      QVariant::QVariant(&local_158,&local_128);
      (*pcVar2)(this,0,&local_158);
      QVariant::~QVariant(&local_158);
      pcVar2 = *(code **)(*(long *)this + 0x28);
      QVariant::QVariant(&local_168,&local_130);
      (*pcVar2)(this,0x100,&local_168);
      QVariant::~QVariant(&local_168);
      QVariant::~QVariant(&local_140);
      if (*(int *)local_128.field0_0x0 != -1) {
        if (*(int *)local_128.field0_0x0 != 0) {
          LOCK();
          *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
          local_31 = *(int *)local_128.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d74f9;
        }
        QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
      }
LAB_1003d74f9:
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d752f;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
LAB_1003d752f:
      lVar9 = lVar9 + 1;
    } while (lVar9 < (long)(int)DAT_1023122b0[3] - (long)(int)DAT_1023122b0[2]);
  }
  return;
}

