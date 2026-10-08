
void FUN_100a42470(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  QVariant local_500;
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
  Data_conflict local_488;
  QArrayData *local_480;
  QString local_478;
  QArrayData *local_470;
  QString local_468;
  QString local_460;
  QString local_458 [2];
  QArrayData *local_448;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  QString::toUtf8();
  if ((1 < *(uint *)local_448) || (*(long *)(local_448 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_448,*(uint *)(local_448 + 4) + 1,*(uint *)(local_448 + 8) >> 0x1f);
  }
  uVar2 = _CFStringCreateWithCString
                    (*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,
                     local_448 + *(long *)(local_448 + 0x10),0x8000100);
  if (*(int *)local_448 != -1) {
    if (*(int *)local_448 != 0) {
      LOCK();
      *(int *)local_448 = *(int *)local_448 + -1;
      local_439 = *(int *)local_448 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a4252f;
    }
    QArrayData::deallocate(local_448,1,8);
  }
LAB_100a4252f:
  lVar3 = FUN_100a432b0();
  local_460.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("parallels",9)
  ;
  local_468.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Parallels",9)
  ;
  QSettings::QSettings((QSettings *)local_458,&local_460,&local_468,(QObject *)0x0);
  if (*(int *)local_468.field0_0x0 != -1) {
    if (*(int *)local_468.field0_0x0 != 0) {
      LOCK();
      *(int *)local_468.field0_0x0 = *(int *)local_468.field0_0x0 + -1;
      local_439 = *(int *)local_468.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a425c2;
    }
    QArrayData::deallocate((QArrayData *)local_468.field0_0x0,2,8);
  }
LAB_100a425c2:
  if (*(int *)local_460.field0_0x0 != -1) {
    if (*(int *)local_460.field0_0x0 != 0) {
      LOCK();
      *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + -1;
      local_439 = *(int *)local_460.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a425fe;
    }
    QArrayData::deallocate((QArrayData *)local_460.field0_0x0,2,8);
  }
LAB_100a425fe:
  local_470 = (QArrayData *)QString::fromAscii_helper("parallels",9);
  QSettings::setPath(1,0,&local_470);
  if (*(int *)local_470 != -1) {
    if (*(int *)local_470 != 0) {
      LOCK();
      *(int *)local_470 = *(int *)local_470 + -1;
      local_439 = *(int *)local_470 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a42665;
    }
    QArrayData::deallocate(local_470,2,8);
  }
LAB_100a42665:
  if (((lVar3 != 0) && (lVar4 = _CFStringCompare(lVar3,*(undefined8 *)(param_1 + 8),0), lVar4 != 0))
     && (lVar4 = _CFStringCompare(lVar3,&cf_com_parallels_desktop_console,0), lVar4 != 0)) {
    _CFStringGetCString(lVar3,local_438,0x400,0x8000100);
    _strlen(local_438);
    QString::fromUtf8_helper((char *)&local_480,(int)local_438);
    QString::normalized(&local_478,&local_480,1,0);
    if (*(int *)local_480 != -1) {
      if (*(int *)local_480 != 0) {
        LOCK();
        *(int *)local_480 = *(int *)local_480 + -1;
        local_439 = *(int *)local_480 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a4272e;
      }
      QArrayData::deallocate(local_480,2,8);
    }
LAB_100a4272e:
    local_4a0 = (QArrayData *)QString::fromAscii_helper("%1/%2/Default \'%3\' App",0x16);
    local_4a8 = (QArrayData *)QString::fromAscii_helper("Parallels",9);
    QString::arg(&local_498,&local_4a0,&local_4a8,0,0x20);
    local_4b0 = (QArrayData *)QString::fromAscii_helper("/MainApp",8);
    QString::arg(&local_490,&local_498,&local_4b0,0,0x20);
    QString::arg(&local_488,&local_490,param_2,0,0x20);
    QVariant::QVariant(&local_4c0,&local_478);
    QSettings::setValue(local_458,(QVariant *)&local_488);
    QVariant::~QVariant(&local_4c0);
    if (*(int *)local_488.field15 != -1) {
      if (*(int *)local_488.field15 != 0) {
        LOCK();
        *(int *)local_488.field15 = *(int *)local_488.field15 + -1;
        local_439 = *(int *)local_488.field15 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a4284d;
      }
      QArrayData::deallocate((QArrayData *)local_488.field15,2,8);
    }
LAB_100a4284d:
    if (*(int *)local_490 != -1) {
      if (*(int *)local_490 != 0) {
        LOCK();
        *(int *)local_490 = *(int *)local_490 + -1;
        local_439 = *(int *)local_490 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a42889;
      }
      QArrayData::deallocate(local_490,2,8);
    }
LAB_100a42889:
    if (*(int *)local_4b0 != -1) {
      if (*(int *)local_4b0 != 0) {
        LOCK();
        *(int *)local_4b0 = *(int *)local_4b0 + -1;
        local_439 = *(int *)local_4b0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a428c5;
      }
      QArrayData::deallocate(local_4b0,2,8);
    }
LAB_100a428c5:
    if (*(int *)local_498 != -1) {
      if (*(int *)local_498 != 0) {
        LOCK();
        *(int *)local_498 = *(int *)local_498 + -1;
        local_439 = *(int *)local_498 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a42901;
      }
      QArrayData::deallocate(local_498,2,8);
    }
LAB_100a42901:
    if (*(int *)local_4a8 != -1) {
      if (*(int *)local_4a8 != 0) {
        LOCK();
        *(int *)local_4a8 = *(int *)local_4a8 + -1;
        local_439 = *(int *)local_4a8 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a4293d;
      }
      QArrayData::deallocate(local_4a8,2,8);
    }
LAB_100a4293d:
    if (*(int *)local_4a0 != -1) {
      if (*(int *)local_4a0 != 0) {
        LOCK();
        *(int *)local_4a0 = *(int *)local_4a0 + -1;
        local_439 = *(int *)local_4a0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a42979;
      }
      QArrayData::deallocate(local_4a0,2,8);
    }
LAB_100a42979:
    if (*(int *)local_478.field0_0x0 != -1) {
      if (*(int *)local_478.field0_0x0 != 0) {
        LOCK();
        *(int *)local_478.field0_0x0 = *(int *)local_478.field0_0x0 + -1;
        local_439 = *(int *)local_478.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100a42c0d;
      }
      QArrayData::deallocate((QArrayData *)local_478.field0_0x0,2,8);
    }
    goto LAB_100a42c0d;
  }
  local_4e0 = (QArrayData *)QString::fromAscii_helper("%1/%2/Default \'%3\' App",0x16);
  local_4e8 = (QArrayData *)QString::fromAscii_helper("Parallels",9);
  QString::arg(&local_4d8,&local_4e0,&local_4e8,0,0x20);
  local_4f0 = (QArrayData *)QString::fromAscii_helper("/MainApp",8);
  QString::arg(&local_4d0,&local_4d8,&local_4f0,0,0x20);
  QString::arg(&local_4c8,&local_4d0,param_2,0,0x20);
  QVariant::QVariant(&local_500,"com.apple.safari");
  QSettings::setValue(local_458,(QVariant *)&local_4c8);
  QVariant::~QVariant(&local_500);
  if (*(int *)local_4c8.field15 != -1) {
    if (*(int *)local_4c8.field15 != 0) {
      LOCK();
      *(int *)local_4c8.field15 = *(int *)local_4c8.field15 + -1;
      local_439 = *(int *)local_4c8.field15 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a42ae1;
    }
    QArrayData::deallocate((QArrayData *)local_4c8.field15,2,8);
  }
LAB_100a42ae1:
  if (*(int *)local_4d0 != -1) {
    if (*(int *)local_4d0 != 0) {
      LOCK();
      *(int *)local_4d0 = *(int *)local_4d0 + -1;
      local_439 = *(int *)local_4d0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a42b1d;
    }
    QArrayData::deallocate(local_4d0,2,8);
  }
LAB_100a42b1d:
  if (*(int *)local_4f0 != -1) {
    if (*(int *)local_4f0 != 0) {
      LOCK();
      *(int *)local_4f0 = *(int *)local_4f0 + -1;
      local_439 = *(int *)local_4f0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a42b59;
    }
    QArrayData::deallocate(local_4f0,2,8);
  }
LAB_100a42b59:
  if (*(int *)local_4d8 != -1) {
    if (*(int *)local_4d8 != 0) {
      LOCK();
      *(int *)local_4d8 = *(int *)local_4d8 + -1;
      local_439 = *(int *)local_4d8 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a42b95;
    }
    QArrayData::deallocate(local_4d8,2,8);
  }
LAB_100a42b95:
  if (*(int *)local_4e8 != -1) {
    if (*(int *)local_4e8 != 0) {
      LOCK();
      *(int *)local_4e8 = *(int *)local_4e8 + -1;
      local_439 = *(int *)local_4e8 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a42bd1;
    }
    QArrayData::deallocate(local_4e8,2,8);
  }
LAB_100a42bd1:
  if (*(int *)local_4e0 != -1) {
    if (*(int *)local_4e0 != 0) {
      LOCK();
      *(int *)local_4e0 = *(int *)local_4e0 + -1;
      local_439 = *(int *)local_4e0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100a42c0d;
    }
    QArrayData::deallocate(local_4e0,2,8);
  }
LAB_100a42c0d:
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  _CFRelease(uVar2);
  QSettings::~QSettings((QSettings *)local_458);
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

