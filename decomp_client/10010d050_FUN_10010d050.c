
QString * FUN_10010d050(QString *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("_%1.png",7);
  EnumUtils::enumToString(&local_50,param_2);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010d0d3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10010d0d3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010d103;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10010d103:
  if (param_4 == '\0') {
    QString::fromUtf8_helper((char *)&local_38,0x1dc00df);
    QString::insert((int)&local_40,(QChar *)0x0,
                    (int)*(undefined8 *)(local_38 + 0x10) + (int)local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10010d166;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10010d166:
  switch(param_3) {
  case 3:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_floppy",0x25);
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  default:
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    break;
  case 5:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_cdrom",0x24);
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 6:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_harddisk",0x27)
    ;
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 8:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_network",0x26);
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 10:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_serial",0x25);
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 0xb:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_parallel",0x27)
    ;
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 0xc:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_sound",0x24);
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 0xf:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_usb",0x22);
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 0x11:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_pci",0x22);
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 0x12:
    pQVar1 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_scsi",0x23);
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 0x14:
    pQVar1 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/ConfigIcons/edcfg_hw_video_adapter",0x2c);
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

