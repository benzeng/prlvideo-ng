
bool FUN_100b8c5c0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  QArrayData *local_130;
  QArrayData *local_128;
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
  undefined8 local_80;
  QDate local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x687,"ToBinary");
  }
  local_30 = 0;
  *(undefined1 *)((long)param_2 + 10) = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  *param_2 = 0;
  param_1 = param_1 + 0x10;
  local_40 = (QArrayData *)QString::fromAscii_helper("key_number_value",0x10);
  FUN_100b7c5b0(&local_38,param_1,&local_40);
  uVar1 = QString::toUInt((bool *)&local_38,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,0x13,uVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c6b9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b8c6b9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c6e9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b8c6e9:
  if (iVar2 != 0) {
    return false;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("product_id",10);
  FUN_100b7c5b0(&local_48,param_1,&local_50);
  uVar1 = QString::toInt((bool *)&local_48,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,4,uVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c76e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b8c76e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c79e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b8c79e:
  if (iVar2 != 0) {
    return false;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper("prl_version",0xb);
  FUN_100b7c5b0(&local_58,param_1,&local_60);
  uVar1 = QString::toInt((bool *)&local_58,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,4,uVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c823;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b8c823:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c853;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100b8c853:
  if (iVar2 != 0) {
    return false;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("edition_id",10);
  FUN_100b7c5b0(&local_68,param_1,&local_70);
  uVar1 = QString::toUInt((bool *)&local_68,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,3,uVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c8d8;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100b8c8d8:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c908;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100b8c908:
  if (iVar2 != 0) {
    return false;
  }
  QDate::QDate(local_78,0x7d7,1,1);
  local_90 = (QArrayData *)QString::fromAscii_helper("start_date",10);
  FUN_100b7c5b0(&local_88,param_1,&local_90);
  local_80 = QDate::fromString(&local_88,1);
  uVar1 = QDate::daysTo(local_78);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,0xc,uVar1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c9ba;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100b8c9ba:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8c9f0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100b8c9f0:
  if (iVar2 != 0) {
    return false;
  }
  local_a0 = (QArrayData *)QString::fromAscii_helper("valid_unit",10);
  FUN_100b7c5b0(&local_98,param_1,&local_a0);
  uVar1 = QString::toUInt((bool *)&local_98,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,2,uVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8ca84;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100b8ca84:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8caba;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100b8caba:
  if (iVar2 != 0) {
    return false;
  }
  local_b0 = (QArrayData *)QString::fromAscii_helper("valid_period",0xc);
  FUN_100b7c5b0(&local_a8,param_1,&local_b0);
  uVar1 = QString::toUInt((bool *)&local_a8,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,5,uVar1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cb51;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b8cb51:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cb87;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100b8cb87:
  if (iVar2 != 0) {
    return false;
  }
  local_c0 = (QArrayData *)QString::fromAscii_helper("platform_id",0xb);
  FUN_100b7c5b0(&local_b8,param_1,&local_c0);
  uVar1 = QString::toInt((bool *)&local_b8,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,4,uVar1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cc1e;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100b8cc1e:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cc54;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100b8cc54:
  if (iVar2 != 0) {
    return false;
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper("language_id",0xb);
  FUN_100b7c5b0(&local_c8,param_1,&local_d0);
  uVar1 = QString::toInt((bool *)&local_c8,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,5,uVar1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cceb;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100b8cceb:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cd21;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100b8cd21:
  if (iVar2 != 0) {
    return false;
  }
  local_e0 = (QArrayData *)QString::fromAscii_helper("distributor_id",0xe);
  FUN_100b7c5b0(&local_d8,param_1,&local_e0);
  uVar1 = QString::toInt((bool *)&local_d8,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,7,uVar1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cdb8;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100b8cdb8:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cdee;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100b8cdee:
  if (iVar2 != 0) {
    return false;
  }
  local_f0 = (QArrayData *)QString::fromAscii_helper("type_id",7);
  FUN_100b7c5b0(&local_e8,param_1,&local_f0);
  uVar1 = QString::toUInt((bool *)&local_e8,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,1,uVar1);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8ce85;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100b8ce85:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cebb;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100b8cebb:
  if (iVar2 != 0) {
    return false;
  }
  local_100 = (QArrayData *)QString::fromAscii_helper("product_flags",0xd);
  FUN_100b7c5b0(&local_f8,param_1,&local_100);
  uVar1 = QString::toUInt((bool *)&local_f8,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,6,uVar1);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cf52;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100b8cf52:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_29 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8cf88;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100b8cf88:
  if (iVar2 != 0) {
    return false;
  }
  local_110 = (QArrayData *)QString::fromAscii_helper("keynum_high",0xb);
  FUN_100b7c5b0(&local_108,param_1,&local_110);
  uVar1 = QString::toUInt((bool *)&local_108,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,8,uVar1);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8d01f;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100b8d01f:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8d055;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100b8d055:
  if (iVar2 != 0) {
    return false;
  }
  local_120 = (QArrayData *)QString::fromAscii_helper("max_cpus",8);
  FUN_100b7c5b0(&local_118,param_1,&local_120);
  uVar1 = QString::toUInt((bool *)&local_118,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,2,uVar1);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8d0ec;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100b8d0ec:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_29 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8d122;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100b8d122:
  if (iVar2 != 0) {
    return false;
  }
  local_130 = (QArrayData *)QString::fromAscii_helper("product_flags2",0xe);
  FUN_100b7c5b0(&local_128,param_1,&local_130);
  uVar1 = QString::toUInt((bool *)&local_128,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_30,1,uVar1);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b8d1b9;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100b8d1b9:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      UNLOCK();
      if (*(int *)local_130 != 0) goto LAB_100b8d1ef;
      local_29 = 0;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100b8d1ef:
  return iVar2 == 0;
}

