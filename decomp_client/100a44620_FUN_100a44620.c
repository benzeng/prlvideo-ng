
void FUN_100a44620(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char cVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  QArrayData *local_140;
  QString local_138;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QVariant local_e8;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QVariant local_78;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QVariant local_40;
  undefined1 local_29;
  
  if (10 < param_2) {
    return;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("parallels",9);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Parallels",9);
  QSettings::QSettings((QSettings *)&local_40,&local_48,&local_50,(QObject *)0x0);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a446ad;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100a446ad:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a446dd;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100a446dd:
  local_58 = (QArrayData *)QString::fromAscii_helper("parallels",9);
  QSettings::setPath(1,0,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a44732;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a44732:
  puVar2 = PTR_shared_null_1021e1288;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_98 = (QArrayData *)QString::fromAscii_helper("%1/%2/Default \'%3\' App",0x16);
  local_a0 = (QArrayData *)QString::fromAscii_helper("Parallels",9);
  QString::arg(&local_90,&local_98,&local_a0,0,0x20);
  local_a8 = (QArrayData *)QString::fromAscii_helper("/MainApp",8);
  QString::arg(&local_88,&local_90,&local_a8,0,0x20);
  pcVar1 = (&PTR_s_mailto_102238010)[(int)param_2];
  sVar4 = _strlen(pcVar1);
  local_b0 = (QArrayData *)QString::fromAscii_helper(pcVar1,(int)sVar4);
  QString::arg(&local_80,&local_88,&local_b0,0,0x20);
  local_c8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("com.apple.safari",0x10);
  QVariant::QVariant(&local_c0,&local_c8);
  QSettings::value((QString *)&local_78,&local_40);
  QVariant::toString();
  QString::operator=(&local_60,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a44896;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100a44896:
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_29 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a448e1;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100a448e1:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a44911;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100a44911:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a44947;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100a44947:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a44977;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100a44977:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a449ad;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100a449ad:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a449e3;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100a449e3:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a44a19;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100a44a19:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a44a4f;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100a44a4f:
  cVar3 = FUN_100a433b0(param_1,pcVar1);
  if (cVar3 != '\0') {
    local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
    local_108 = (QArrayData *)QString::fromAscii_helper("%1/%2/Default \'%3\' App",0x16);
    local_110 = (QArrayData *)QString::fromAscii_helper("Parallels",9);
    QString::arg(&local_100,&local_108,&local_110,0,0x20);
    local_118 = (QArrayData *)QString::fromAscii_helper("/MainApp",8);
    QString::arg(&local_f8,&local_100,&local_118,0,0x20);
    sVar4 = _strlen(pcVar1);
    local_120 = (QArrayData *)QString::fromAscii_helper(pcVar1,(int)sVar4);
    QString::arg(&local_f0,&local_f8,&local_120,0,0x20);
    local_138.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("com.apple.safari",0x10);
    QVariant::QVariant(&local_130,&local_138);
    QSettings::value((QString *)&local_e8,&local_40);
    QVariant::toString();
    QString::operator=(&local_d0,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_29 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44bd5;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_100a44bd5:
    QVariant::~QVariant(&local_e8);
    QVariant::~QVariant(&local_130);
    if (*(int *)local_138.field0_0x0 != -1) {
      if (*(int *)local_138.field0_0x0 != 0) {
        LOCK();
        *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
        local_29 = *(int *)local_138.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44c23;
      }
      QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
    }
LAB_100a44c23:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_29 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44c59;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_100a44c59:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_29 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44c8f;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_100a44c8f:
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_29 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44cc5;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100a44cc5:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44cfb;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_100a44cfb:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_29 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44d31;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_100a44d31:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_29 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44d67;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_100a44d67:
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_29 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44d9d;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_100a44d9d:
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
    uVar5 = _CFStringCreateWithCString(uVar6,pcVar1,0x8000100);
    QString::toUtf8();
    if ((1 < *(uint *)local_140) || (*(long *)(local_140 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_140,*(uint *)(local_140 + 4) + 1,*(uint *)(local_140 + 8) >> 0x1f);
    }
    uVar6 = _CFStringCreateWithCString(uVar6,local_140 + *(long *)(local_140 + 0x10),0x8000100);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_29 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44e4a;
      }
      QArrayData::deallocate(local_140,1,8);
    }
LAB_100a44e4a:
    _LSSetDefaultHandlerForURLScheme(uVar5,uVar6);
    _CFRelease(uVar5);
    _CFRelease(uVar6);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_29 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a44e9b;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
  }
LAB_100a44e9b:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a44ecb;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a44ecb:
  QSettings::~QSettings((QSettings *)&local_40);
  return;
}

