
undefined8 FUN_1002c7e20(long param_1)

{
  QString *pQVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *local_128;
  QLocale local_120 [8];
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
  QString local_90;
  QLocale local_88 [8];
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  WebUtils::maskedEMail(&local_60);
  QString::toUtf8();
  pQVar4 = local_58 + *(long *)(local_58 + 0x10);
  WebUtils::maskedEMail(&local_70);
  QString::toUtf8();
  pQVar3 = local_68 + *(long *)(local_68 + 0x10);
  QLocale::QLocale(local_88);
  QLocale::name();
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Create account for [%s] with e-mail [%s], locale [%s]",pQVar4
                ,pQVar3,local_78 + *(long *)(local_78 + 0x10));
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c7f09;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_1002c7f09:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c7f39;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002c7f39:
  QLocale::~QLocale(local_88);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c7f72;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1002c7f72:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c7fa2;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1002c7fa2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c7fd2;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1002c7fd2:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8002;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002c8002:
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_a8 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
  local_b0 = (QArrayData *)QString::fromAscii_helper("name",4);
  QString::arg(&local_a0,&local_a8,&local_b0,0,0x20);
  QString::arg(&local_98,&local_a0,param_1 + 0x48,0,0x20);
  pQVar1 = (QString *)QString::append(&local_90);
  QString::fromUtf8_helper((char *)&local_50,0x1dd7195);
  QString::append(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c80e7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002c80e7:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c811d;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1002c811d:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8153;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002c8153:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8189;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1002c8189:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c81bf;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1002c81bf:
  local_c8 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
  local_d0 = (QArrayData *)QString::fromAscii_helper("email",5);
  QString::arg(&local_c0,&local_c8,&local_d0,0,0x20);
  QString::arg(&local_b8,&local_c0,param_1 + 0x50,0,0x20);
  pQVar1 = (QString *)QString::append(&local_90);
  QString::fromUtf8_helper((char *)&local_48,0x1dd7195);
  QString::append(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8296;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002c8296:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c82cc;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002c82cc:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8302;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1002c8302:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8338;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1002c8338:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c836e;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1002c836e:
  local_e8 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
  local_f0 = (QArrayData *)QString::fromAscii_helper("password",8);
  QString::arg(&local_e0,&local_e8,&local_f0,0,0x20);
  QString::arg(&local_d8,&local_e0,param_1 + 0x58,0,0x20);
  pQVar1 = (QString *)QString::append(&local_90);
  QString::fromUtf8_helper((char *)&local_40,0x1dd7195);
  QString::append(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8446;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002c8446:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c847c;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1002c847c:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c84b2;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1002c84b2:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c84e8;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1002c84e8:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c851e;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1002c851e:
  local_108 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
  local_110 = (QArrayData *)QString::fromAscii_helper("locale",6);
  QString::arg(&local_100,&local_108,&local_110,0,0x20);
  QLocale::QLocale(local_120);
  QLocale::name();
  QString::arg(&local_f8,&local_100,&local_118,0,0x20);
  QString::append(&local_90);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c85fa;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1002c85fa:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8630;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1002c8630:
  QLocale::~QLocale(local_120);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8672;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1002c8672:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c86a8;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1002c86a8:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c86de;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1002c86de:
  uVar2 = FUN_1002c6aa0(param_1);
  local_128 = (QArrayData *)QString::fromAscii_helper("{57CADA66-9A59-47D7-93D5-9174FF5D0543}",0x26)
  ;
  uVar2 = FUN_100175d50(uVar2,&local_128,&local_90,0);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c8752;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1002c8752:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_90.field0_0x0 != 0) {
        return uVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
  return uVar2;
}

