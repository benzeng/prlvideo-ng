
void FUN_100a43850(long param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  QVariant local_508;
  QArrayData *local_4f8;
  QArrayData *local_4f0;
  QArrayData *local_4e8;
  QArrayData *local_4e0;
  QArrayData *local_4d8;
  QArrayData *local_4d0;
  Data_conflict local_4c8;
  QVariant local_4c0;
  QArrayData *local_4b0;
  QArrayData *local_4a8;
  QArrayData *local_4a0;
  QArrayData *local_498;
  QArrayData *local_490;
  QArrayData *local_488;
  Data_conflict local_480;
  QArrayData *local_478;
  QString local_470;
  QArrayData *local_468;
  QString local_460;
  QString local_458;
  QString local_450 [2];
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (10 < param_2) goto LAB_100a44086;
  pcVar2 = (&PTR_s_mailto_102238010)[(int)param_2];
  cVar3 = FUN_100a433b0(param_1,pcVar2);
  if (cVar3 != '\0') goto LAB_100a44086;
  uVar4 = _CFStringCreateWithCString
                    (*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,pcVar2,0x8000100);
  lVar5 = FUN_100a432b0();
  local_458.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("parallels",9)
  ;
  local_460.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Parallels",9)
  ;
  QSettings::QSettings((QSettings *)local_450,&local_458,&local_460,(QObject *)0x0);
  if (*(int *)local_460.field0_0x0 != -1) {
    if (*(int *)local_460.field0_0x0 != 0) {
      LOCK();
      *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + -1;
      local_439 = *(int *)local_460.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a4394c;
    }
    QArrayData::deallocate((QArrayData *)local_460.field0_0x0,2,8);
  }
LAB_100a4394c:
  if (*(int *)local_458.field0_0x0 != -1) {
    if (*(int *)local_458.field0_0x0 != 0) {
      LOCK();
      *(int *)local_458.field0_0x0 = *(int *)local_458.field0_0x0 + -1;
      local_439 = *(int *)local_458.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a43988;
    }
    QArrayData::deallocate((QArrayData *)local_458.field0_0x0,2,8);
  }
LAB_100a43988:
  local_468 = (QArrayData *)QString::fromAscii_helper("parallels",9);
  QSettings::setPath(1,0,&local_468);
  if (*(int *)local_468 != -1) {
    if (*(int *)local_468 != 0) {
      LOCK();
      *(int *)local_468 = *(int *)local_468 + -1;
      local_439 = *(int *)local_468 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a439ef;
    }
    QArrayData::deallocate(local_468,2,8);
  }
LAB_100a439ef:
  if (((lVar5 == 0) || (lVar6 = _CFStringCompare(lVar5,*(undefined8 *)(param_1 + 8),0), lVar6 == 0))
     || (lVar6 = _CFStringCompare(lVar5,&cf_com_parallels_desktop_console,0), lVar6 == 0)) {
    local_4e0 = (QArrayData *)QString::fromAscii_helper("%1/%2/Default \'%3\' App",0x16);
    local_4e8 = (QArrayData *)QString::fromAscii_helper("Parallels",9);
    QString::arg(&local_4d8,&local_4e0,&local_4e8,0,0x20);
    local_4f0 = (QArrayData *)QString::fromAscii_helper("/MainApp",8);
    QString::arg(&local_4d0,&local_4d8,&local_4f0,0,0x20);
    sVar7 = _strlen(pcVar2);
    local_4f8 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar7);
    QString::arg(&local_4c8,&local_4d0,&local_4f8,0,0x20);
    QVariant::QVariant(&local_508,"com.apple.safari");
    QSettings::setValue(local_450,(QVariant *)&local_4c8);
    QVariant::~QVariant(&local_508);
    if (*(int *)local_4c8.field15 != -1) {
      if (*(int *)local_4c8.field15 != 0) {
        LOCK();
        *(int *)local_4c8.field15 = *(int *)local_4c8.field15 + -1;
        local_439 = *(int *)local_4c8.field15 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43ef0;
      }
      QArrayData::deallocate((QArrayData *)local_4c8.field15,2,8);
    }
LAB_100a43ef0:
    if (*(int *)local_4f8 != -1) {
      if (*(int *)local_4f8 != 0) {
        LOCK();
        *(int *)local_4f8 = *(int *)local_4f8 + -1;
        local_439 = *(int *)local_4f8 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43f2c;
      }
      QArrayData::deallocate(local_4f8,2,8);
    }
LAB_100a43f2c:
    if (*(int *)local_4d0 != -1) {
      if (*(int *)local_4d0 != 0) {
        LOCK();
        *(int *)local_4d0 = *(int *)local_4d0 + -1;
        local_439 = *(int *)local_4d0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43f68;
      }
      QArrayData::deallocate(local_4d0,2,8);
    }
LAB_100a43f68:
    if (*(int *)local_4f0 != -1) {
      if (*(int *)local_4f0 != 0) {
        LOCK();
        *(int *)local_4f0 = *(int *)local_4f0 + -1;
        local_439 = *(int *)local_4f0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43fa4;
      }
      QArrayData::deallocate(local_4f0,2,8);
    }
LAB_100a43fa4:
    if (*(int *)local_4d8 != -1) {
      if (*(int *)local_4d8 != 0) {
        LOCK();
        *(int *)local_4d8 = *(int *)local_4d8 + -1;
        local_439 = *(int *)local_4d8 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43fe0;
      }
      QArrayData::deallocate(local_4d8,2,8);
    }
LAB_100a43fe0:
    if (*(int *)local_4e8 != -1) {
      if (*(int *)local_4e8 != 0) {
        LOCK();
        *(int *)local_4e8 = *(int *)local_4e8 + -1;
        local_439 = *(int *)local_4e8 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a4401c;
      }
      QArrayData::deallocate(local_4e8,2,8);
    }
LAB_100a4401c:
    if (*(int *)local_4e0 != -1) {
      if (*(int *)local_4e0 != 0) {
        LOCK();
        *(int *)local_4e0 = *(int *)local_4e0 + -1;
        local_439 = *(int *)local_4e0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a44058;
      }
      QArrayData::deallocate(local_4e0,2,8);
    }
  }
  else {
    _CFStringGetCString(lVar5,local_438,0x400,0x8000100);
    _strlen(local_438);
    QString::fromUtf8_helper((char *)&local_478,(int)local_438);
    QString::normalized(&local_470,&local_478,1,0);
    if (*(int *)local_478 != -1) {
      if (*(int *)local_478 != 0) {
        LOCK();
        *(int *)local_478 = *(int *)local_478 + -1;
        local_439 = *(int *)local_478 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43ac7;
      }
      QArrayData::deallocate(local_478,2,8);
    }
LAB_100a43ac7:
    local_498 = (QArrayData *)QString::fromAscii_helper("%1/%2/Default \'%3\' App",0x16);
    local_4a0 = (QArrayData *)QString::fromAscii_helper("Parallels",9);
    QString::arg(&local_490,&local_498,&local_4a0,0,0x20);
    local_4a8 = (QArrayData *)QString::fromAscii_helper("/MainApp",8);
    QString::arg(&local_488,&local_490,&local_4a8,0,0x20);
    sVar7 = _strlen(pcVar2);
    local_4b0 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar7);
    QString::arg(&local_480,&local_488,&local_4b0,0,0x20);
    QVariant::QVariant(&local_4c0,&local_470);
    QSettings::setValue(local_450,(QVariant *)&local_480);
    QVariant::~QVariant(&local_4c0);
    if (*(int *)local_480.field15 != -1) {
      if (*(int *)local_480.field15 != 0) {
        LOCK();
        *(int *)local_480.field15 = *(int *)local_480.field15 + -1;
        local_439 = *(int *)local_480.field15 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43c03;
      }
      QArrayData::deallocate((QArrayData *)local_480.field15,2,8);
    }
LAB_100a43c03:
    if (*(int *)local_4b0 != -1) {
      if (*(int *)local_4b0 != 0) {
        LOCK();
        *(int *)local_4b0 = *(int *)local_4b0 + -1;
        local_439 = *(int *)local_4b0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43c3f;
      }
      QArrayData::deallocate(local_4b0,2,8);
    }
LAB_100a43c3f:
    if (*(int *)local_488 != -1) {
      if (*(int *)local_488 != 0) {
        LOCK();
        *(int *)local_488 = *(int *)local_488 + -1;
        local_439 = *(int *)local_488 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43c7b;
      }
      QArrayData::deallocate(local_488,2,8);
    }
LAB_100a43c7b:
    if (*(int *)local_4a8 != -1) {
      if (*(int *)local_4a8 != 0) {
        LOCK();
        *(int *)local_4a8 = *(int *)local_4a8 + -1;
        local_439 = *(int *)local_4a8 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43cb7;
      }
      QArrayData::deallocate(local_4a8,2,8);
    }
LAB_100a43cb7:
    if (*(int *)local_490 != -1) {
      if (*(int *)local_490 != 0) {
        LOCK();
        *(int *)local_490 = *(int *)local_490 + -1;
        local_439 = *(int *)local_490 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43cf3;
      }
      QArrayData::deallocate(local_490,2,8);
    }
LAB_100a43cf3:
    if (*(int *)local_4a0 != -1) {
      if (*(int *)local_4a0 != 0) {
        LOCK();
        *(int *)local_4a0 = *(int *)local_4a0 + -1;
        local_439 = *(int *)local_4a0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43d2f;
      }
      QArrayData::deallocate(local_4a0,2,8);
    }
LAB_100a43d2f:
    if (*(int *)local_498 != -1) {
      if (*(int *)local_498 != 0) {
        LOCK();
        *(int *)local_498 = *(int *)local_498 + -1;
        local_439 = *(int *)local_498 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a43d6b;
      }
      QArrayData::deallocate(local_498,2,8);
    }
LAB_100a43d6b:
    if (*(int *)local_470.field0_0x0 != -1) {
      if (*(int *)local_470.field0_0x0 != 0) {
        LOCK();
        *(int *)local_470.field0_0x0 = *(int *)local_470.field0_0x0 + -1;
        local_439 = *(int *)local_470.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a44058;
      }
      QArrayData::deallocate((QArrayData *)local_470.field0_0x0,2,8);
    }
  }
LAB_100a44058:
  _LSSetDefaultHandlerForURLScheme(uVar4,*(undefined8 *)(param_1 + 8));
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  _CFRelease(uVar4);
  QSettings::~QSettings((QSettings *)local_450);
LAB_100a44086:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

