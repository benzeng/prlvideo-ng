
/* CXmlModelHelper::VmConfig::HybridShutdown::getAffectFieldsAndSections(QList<QRegExp>&,
   QList<QRegExp>&) */

void CXmlModelHelper::VmConfig::HybridShutdown::getAffectFieldsAndSections
               (QList *param_1,QList *param_2)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  QRegExp *pQVar4;
  long lVar5;
  QArrayData *local_138;
  QRegExp local_130 [8];
  QArrayData *local_128;
  QRegExp local_120 [8];
  Data *local_118;
  QArrayData *local_110;
  QRegExp local_108 [8];
  QArrayData *local_100;
  QRegExp local_f8 [8];
  QArrayData *local_f0;
  QRegExp local_e8 [8];
  QArrayData *local_e0;
  QRegExp local_d8 [8];
  QArrayData *local_d0;
  QRegExp local_c8 [8];
  QArrayData *local_c0;
  QRegExp local_b8 [8];
  QArrayData *local_b0;
  QRegExp local_a8 [8];
  QArrayData *local_a0;
  QRegExp local_98 [8];
  QArrayData *local_90;
  QRegExp local_88 [8];
  QArrayData *local_80;
  QRegExp local_78 [8];
  QArrayData *local_70;
  QRegExp local_68 [8];
  QArrayData *local_60;
  QRegExp local_58 [8];
  QArrayData *local_50;
  QRegExp local_48 [8];
  Data *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_100ba2188;
  local_40 = (Data *)PTR_shared_null_100ba2188;
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.BootingOrder.*",0x1f);
  QRegExp::QRegExp(local_48,&local_50,1,4);
  FUN_100016470(&local_40,local_48);
  local_60 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.*",0x10);
  QRegExp::QRegExp(local_58,&local_60,1,4);
  FUN_100016470(&local_40,local_58);
  local_70 = (QArrayData *)QString::fromAscii_helper("Hardware.Hdd\\[*\\].*",0x13);
  QRegExp::QRegExp(local_68,&local_70,1,4);
  FUN_100016470(&local_40,local_68);
  local_80 = (QArrayData *)QString::fromAscii_helper("Hardware.Hdd\\[*\\]",0x11);
  QRegExp::QRegExp(local_78,&local_80,1,4);
  FUN_100016470(&local_40,local_78);
  local_90 = (QArrayData *)QString::fromAscii_helper("Settings.Runtime.SystemFlags",0x1c);
  QRegExp::QRegExp(local_88,&local_90,1,4);
  FUN_100016470(&local_40,local_88);
  local_a0 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  QRegExp::QRegExp(local_98,&local_a0,1,4);
  FUN_100016470(&local_40,local_98);
  local_b0 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
  QRegExp::QRegExp(local_a8,&local_b0,1,4);
  FUN_100016470(&local_40,local_a8);
  local_c0 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.AllowSelectBootDevice",0x26);
  QRegExp::QRegExp(local_b8,&local_c0,1,4);
  FUN_100016470(&local_40,local_b8);
  local_d0 = (QArrayData *)QString::fromAscii_helper("Hardware.Cpu.Number",0x13);
  QRegExp::QRegExp(local_c8,&local_d0,1,4);
  FUN_100016470(&local_40,local_c8);
  local_e0 = (QArrayData *)QString::fromAscii_helper("Hardware.Cpu.EnableHotplug",0x1a);
  QRegExp::QRegExp(local_d8,&local_e0,1,4);
  FUN_100016470(&local_40,local_d8);
  local_f0 = (QArrayData *)QString::fromAscii_helper("Hardware.Cpu.VirtualizedHV",0x1a);
  QRegExp::QRegExp(local_e8,&local_f0,1,4);
  FUN_100016470(&local_40,local_e8);
  local_100 = (QArrayData *)QString::fromAscii_helper("Hardware.Cpu.VirtualizePMU",0x1a);
  QRegExp::QRegExp(local_f8,&local_100,1,4);
  FUN_100016470(&local_40,local_f8);
  local_110 = (QArrayData *)QString::fromAscii_helper("Hardware.Memory.EnableHotplug",0x1d);
  QRegExp::QRegExp(local_108,&local_110,1,4);
  FUN_100016470(&local_40,local_108);
  FUN_1000162b0(param_1,&local_40);
  QRegExp::~QRegExp(local_108);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001547e;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10001547e:
  QRegExp::~QRegExp(local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000154c0;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1000154c0:
  QRegExp::~QRegExp(local_e8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100015502;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100015502:
  QRegExp::~QRegExp(local_d8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100015544;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100015544:
  QRegExp::~QRegExp(local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100015586;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100015586:
  QRegExp::~QRegExp(local_b8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000155c8;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1000155c8:
  QRegExp::~QRegExp(local_a8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001560a;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10001560a:
  QRegExp::~QRegExp(local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001564c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10001564c:
  QRegExp::~QRegExp(local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001568b;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10001568b:
  QRegExp::~QRegExp(local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000156c4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1000156c4:
  QRegExp::~QRegExp(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000156fd;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000156fd:
  QRegExp::~QRegExp(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100015736;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100015736:
  QRegExp::~QRegExp(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001576f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10001576f:
  pDVar3 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000157da;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pQVar4 = (QRegExp *)(local_40 + (long)iVar1 * 8 + 8);
      do {
        QRegExp::~QRegExp(pQVar4);
        pQVar4 = pQVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1000157da:
  local_118 = (Data *)puVar2;
  local_128 = (QArrayData *)QString::fromAscii_helper("Hardware.Hdd\\[*\\].SizeOnDisk",0x1c);
  QRegExp::QRegExp(local_120,&local_128,1,4);
  FUN_100016470(&local_118,local_120);
  local_138 = (QArrayData *)QString::fromAscii_helper("Hardware.Hdd\\[*\\].BlockSize",0x1b);
  QRegExp::QRegExp(local_130,&local_138,1,4);
  FUN_100016470(&local_118,local_130);
  FUN_1000162b0(param_2,&local_118);
  QRegExp::~QRegExp(local_130);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000158c2;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1000158c2:
  QRegExp::~QRegExp(local_120);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100015904;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100015904:
  pDVar3 = local_118;
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      UNLOCK();
      if (*(int *)local_118 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_118 + 0xc);
    if (iVar1 != *(int *)(local_118 + 8)) {
      lVar5 = (long)*(int *)(local_118 + 8) * 8 + (long)iVar1 * -8;
      pQVar4 = (QRegExp *)(local_118 + (long)iVar1 * 8 + 8);
      do {
        QRegExp::~QRegExp(pQVar4);
        pQVar4 = pQVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

