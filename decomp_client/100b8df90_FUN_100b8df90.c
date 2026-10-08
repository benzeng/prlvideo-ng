
bool FUN_100b8df90(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
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
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x72b,"ToShortBinary");
  }
  local_28 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  *param_2 = 0;
  param_1 = param_1 + 0x10;
  local_38 = (QArrayData *)QString::fromAscii_helper("key_number_value",0x10);
  FUN_100b7c5b0(&local_30,param_1,&local_38);
  uVar1 = QString::toUInt((bool *)&local_30,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_28,0x13,uVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e082;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100b8e082:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e0b2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b8e0b2:
  if (iVar2 != 0) {
    return false;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("product_id",10);
  FUN_100b7c5b0(&local_40,param_1,&local_48);
  uVar1 = QString::toInt((bool *)&local_40,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_28,4,uVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e136;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b8e136:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e166;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b8e166:
  if (iVar2 != 0) {
    return false;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper("prl_version",0xb);
  FUN_100b7c5b0(&local_50,param_1,&local_58);
  uVar1 = QString::toInt((bool *)&local_50,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_28,4,uVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e1ea;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b8e1ea:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e21a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b8e21a:
  if (iVar2 != 0) {
    return false;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("edition_id",10);
  FUN_100b7c5b0(&local_60,param_1,&local_68);
  uVar1 = QString::toUInt((bool *)&local_60,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_28,3,uVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e29e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100b8e29e:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e2ce;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100b8e2ce:
  if (iVar2 != 0) {
    return false;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("platform_id",0xb);
  FUN_100b7c5b0(&local_70,param_1,&local_78);
  uVar1 = QString::toInt((bool *)&local_70,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_28,4,uVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e352;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100b8e352:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e382;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100b8e382:
  if (iVar2 != 0) {
    return false;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper("keynum_high",0xb);
  FUN_100b7c5b0(&local_80,param_1,&local_88);
  uVar1 = QString::toUInt((bool *)&local_80,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_28,8,uVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e406;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100b8e406:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e436;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100b8e436:
  if (iVar2 != 0) {
    return false;
  }
  local_98 = (QArrayData *)QString::fromAscii_helper("product_flags",0xd);
  FUN_100b7c5b0(&local_90,param_1,&local_98);
  uVar3 = QString::toUInt((bool *)&local_90,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_28,1,uVar3 & 1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e4cf;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100b8e4cf:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e505;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100b8e505:
  if (iVar2 != 0) {
    return false;
  }
  local_a8 = (QArrayData *)QString::fromAscii_helper("product_flags",0xd);
  FUN_100b7c5b0(&local_a0,param_1,&local_a8);
  uVar3 = QString::toUInt((bool *)&local_a0,0);
  iVar2 = FUN_100bbf0c0(param_2,&local_28,1,uVar3 >> 4 & 1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b8e5a1;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100b8e5a1:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      UNLOCK();
      if (*(int *)local_a8 != 0) goto LAB_100b8e5d7;
      local_21 = 0;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b8e5d7:
  return iVar2 == 0;
}

