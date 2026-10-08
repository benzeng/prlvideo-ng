
void FUN_1007301c0(long param_1,undefined8 param_2)

{
  QMapNodeBase *pQVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  QString *pQVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  QArrayData *local_1b8;
  QColor local_1b0 [16];
  QMapNodeBase *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QString local_160;
  QVariant local_158;
  QArrayData *local_148;
  QVariant local_140;
  QArrayData *local_130;
  QVariant local_128;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmName();
  FUN_10072dff0(uVar10,&local_168);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730254;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100730254:
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar13 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100188480(&local_170,uVar13);
  FUN_10072d6f0(uVar10,&local_170);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007302d4;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1007302d4:
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar13 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1001884b0(&local_178,uVar13);
  FUN_10072df80(uVar10,&local_178);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730354;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100730354:
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar3 = FUN_10018f860(uVar10);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar4 = FUN_10018f890(uVar10);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
  }
  local_190 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  QString::arg(&local_188,&local_190,(long)iVar3,0,10,0x20);
  QString::arg(&local_180,&local_188,(long)iVar4,0,10,0x20);
  FUN_10072e040(uVar10,&local_180);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073044e;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10073044e:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730484;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100730484:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007304ba;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_1007304ba:
  EnumUtils::OsVerToString((uint)&local_198);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10072e0e0(uVar10,&local_198);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
  }
  local_1a0 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getCpu();
  iVar3 = CVmCpu::getNumber();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getMemory();
  uVar5 = CVmMemory::getRamSize();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  uVar6 = CVmVideo::getMemorySize();
  lVar7 = CVmConfiguration::getVmHardwareList();
  local_40 = *(Data **)(lVar7 + 0x1b0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar11 = (long)*(int *)(local_40 + 8);
      lVar7 = *(long *)(lVar7 + 0x1b0);
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_40 + lVar11 * 8) &&
         (lVar12 = *(int *)(local_40 + 0xc) - lVar11,
         lVar12 != 0 && lVar11 <= *(int *)(local_40 + 0xc))) {
        _memcpy(local_40 + lVar11 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar12 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar7 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar7 * 8) &&
         (lVar11 = *(int *)(local_60 + 0xc) - lVar7,
         lVar11 != 0 && lVar7 <= *(int *)(local_60 + 0xc))) {
        _memcpy(local_60 + lVar7 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  lVar7 = 0;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    lVar7 = 0;
    do {
      local_48 = 1;
      lVar11 = CVmHardDisk::getSize();
      lVar7 = lVar7 + lVar11;
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007306ca;
    }
    QListData::dispose(local_60);
  }
LAB_1007306ca:
  FUN_100109d60(&local_68,param_2,1);
  local_70 = (QArrayData *)QString::fromAscii_helper("cpuCount",8);
  QVariant::QVariant(&local_80,iVar3);
  FUN_10008d1b0(&local_1a0,&local_70,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073074d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10073074d:
  local_88 = (QArrayData *)QString::fromAscii_helper("memorySize",10);
  FUN_100def650(&local_a0,(ulong)uVar5 << 0x14,1);
  local_a8 = (QArrayData *)QString::fromAscii_helper(".0 ",3);
  local_b0 = (QArrayData *)QString::fromAscii_helper(" ",1);
  pQVar8 = (QString *)QString::replace(&local_a0,&local_a8,&local_b0,1);
  QVariant::QVariant(&local_98,pQVar8);
  FUN_10008d1b0(&local_1a0,&local_88,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730831;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100730831:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730867;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100730867:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073089d;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10073089d:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007308cd;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007308cd:
  local_b8 = (QArrayData *)QString::fromAscii_helper("diskSpace",9);
  FUN_100def650(&local_d0,lVar7 << 0x14,1);
  local_d8 = (QArrayData *)QString::fromAscii_helper(".0 ",3);
  local_e0 = (QArrayData *)QString::fromAscii_helper(" ",1);
  pQVar8 = (QString *)QString::replace(&local_d0,&local_d8,&local_e0,1);
  QVariant::QVariant(&local_c8,pQVar8);
  FUN_10008d1b0(&local_1a0,&local_b8,&local_c8);
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007309b7;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1007309b7:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007309ed;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1007309ed:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730a23;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100730a23:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730a59;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100730a59:
  local_e8 = (QArrayData *)QString::fromAscii_helper("videoSize",9);
  FUN_100def650(&local_100,(ulong)uVar6 << 0x14,1);
  local_108 = (QArrayData *)QString::fromAscii_helper(".0 ",3);
  local_110 = (QArrayData *)QString::fromAscii_helper(" ",1);
  pQVar8 = (QString *)QString::replace(&local_100,&local_108,&local_110,1);
  QVariant::QVariant(&local_f8,pQVar8);
  FUN_10008d1b0(&local_1a0,&local_e8,&local_f8);
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730b43;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100730b43:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730b79;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100730b79:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730baf;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100730baf:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730be5;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100730be5:
  local_118 = (QArrayData *)QString::fromAscii_helper("vmDir",5);
  QVariant::QVariant(&local_128,&local_68);
  FUN_10008d1b0(&local_1a0,&local_118,&local_128);
  QVariant::~QVariant(&local_128);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730c69;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100730c69:
  local_130 = (QArrayData *)QString::fromAscii_helper("uptime",6);
  CVmConfiguration::getVmIdentification();
  uVar9 = CVmIdentification::getVmUptimeInSeconds();
  QVariant::QVariant(&local_140,uVar9);
  FUN_10008d1b0(&local_1a0,&local_130,&local_140);
  QVariant::~QVariant(&local_140);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730d00;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100730d00:
  local_148 = (QArrayData *)QString::fromAscii_helper("networks",8);
  FUN_10011e740(&local_160,param_2);
  QVariant::QVariant(&local_158,&local_160);
  FUN_10008d1b0(&local_1a0,&local_148,&local_158);
  QVariant::~QVariant(&local_158);
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_31 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730d9a;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_100730d9a:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730dd0;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100730dd0:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730e00;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100730e00:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730e26;
    }
    QListData::dispose(local_40);
  }
LAB_100730e26:
  FUN_10072e260(uVar10,&local_1a0);
  pQVar1 = local_1a0;
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730e87;
    }
    if (*(long *)(local_1a0 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100730e87:
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = FUN_1001902a0(uVar10);
  QColor::QColor(local_1b0,uVar5);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
  }
  QColor::name();
  FUN_10072e130(uVar10,&local_1b8);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100730f20;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100730f20:
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar2 = FUN_100112cc0(param_2);
  FUN_10072e390(uVar10,uVar2);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      UNLOCK();
      if (*(int *)local_198 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_198,2,8);
  }
  return;
}

