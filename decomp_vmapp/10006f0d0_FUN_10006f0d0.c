
undefined8 FUN_10006f0d0(long param_1,long *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  CHostHardwareInfo *this;
  long *plVar13;
  CHwPrinter *this_00;
  QArrayData *pQVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 in_stack_fffffffffffffcc8;
  QArrayData *local_300;
  long *local_2f8;
  long *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  CVmUsbDevice local_2b8 [240];
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  long *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [224];
  QEvent local_58 [39];
  undefined1 local_31;
  
  uVar16 = (undefined4)((ulong)in_stack_fffffffffffffcc8 >> 0x20);
  lVar6 = *(long *)(*(long *)(*param_2 + 0x10) + 0x80);
  iVar5 = 0;
  if (lVar6 != 0) {
    pcVar1 = *(char **)(lVar6 + 0x10);
    iVar5 = 0;
    if (pcVar1 != (char *)0x0) {
      _strlen(pcVar1);
      iVar5 = (int)pcVar1;
    }
  }
  QString::fromUtf8_helper((char *)&local_148,iVar5);
  QString::normalized(&local_140,&local_148,1);
  CVmEvent::CVmEvent(local_138,(QTypedArrayData<unsigned_short> *)&local_140);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f18c;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10006f18c:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f1c2;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10006f1c2:
  local_150 = (QArrayData *)QString::fromAscii_helper("device_type",0xb);
  lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_138);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f226;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10006f226:
  local_158 = (QArrayData *)QString::fromAscii_helper("vm_config_dev_state",0x13);
  lVar7 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_138);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f28e;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10006f28e:
  local_160 = (QArrayData *)QString::fromAscii_helper("vm_config_dev_image",0x13);
  lVar8 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_138);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f2f6;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10006f2f6:
  local_168 = (QArrayData *)QString::fromAscii_helper("vm_config_dev_name",0x12);
  lVar9 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_138);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f35a;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10006f35a:
  local_170 = (QArrayData *)QString::fromAscii_helper("hw_dev_changed_flags",0x14);
  lVar10 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_138);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f3be;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10006f3be:
  local_178 = (QArrayData *)QString::fromAscii_helper("hw_dev_config",0xd);
  lVar11 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_138);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f426;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10006f426:
  local_180 = (QArrayData *)QString::fromAscii_helper("host_hardware_info",0x12);
  lVar12 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_138);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f48a;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10006f48a:
  if ((((lVar6 == 0) || (lVar7 == 0)) || (lVar8 == 0)) ||
     (((lVar9 == 0 || (lVar10 == 0)) || ((lVar11 == 0 || (lVar12 == 0)))))) {
    FUN_1008e3970("","vm",0);
  }
  CVmEventParameter::getParamValue();
  uVar2 = QString::toInt((bool *)&local_188,0);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f559;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10006f559:
  CVmEventParameter::getParamValue();
  uVar3 = QString::toUInt((bool *)&local_190,0);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f5b8;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10006f5b8:
  CVmEventParameter::getParamValue();
  CVmEventParameter::getParamValue();
  CVmEventParameter::getParamValue();
  uVar4 = QString::toUInt((bool *)&local_1a8,0);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f638;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_10006f638:
  this = operator_new(0x1c8);
  CHostHardwareInfo::CHostHardwareInfo(this);
  local_1b0 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (local_1b0 == (long *)0x0) {
    (**(code **)(*(long *)this + 0x88))(this);
    local_1b0 = (long *)0x0;
    this = (CHostHardwareInfo *)0x0;
  }
  else {
    *(undefined4 *)(local_1b0 + 1) = 1;
    local_1b0[2] = (long)this;
    *local_1b0 = (long)&PTR_FUN_100bfbb80;
  }
  CVmEventParameter::getParamValue();
  iVar5 = CBaseNode::fromString
                    ((CBaseNode *)this,(QTypedArrayData<unsigned_short> *)&local_1b8,false,
                     (QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f703;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_10006f703:
  if (iVar5 != 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","!res","CVmCommandsHandler.cpp",
                  CONCAT44(uVar16,0x237),"vmEvtHwChanged");
  }
  QString::toUtf8();
  pQVar14 = local_1c0;
  lVar6 = *(long *)(local_1c0 + 0x10);
  QString::toUtf8();
  pQVar14 = pQVar14 + lVar6;
  FUN_1008e3970("","vm",0,
                "vmEvtHwChanged() dev_type = %d, dev_state = %d, dev_path = %s, dev_frName = %s",
                uVar2,uVar3,pQVar14,local_1c8 + *(long *)(local_1c8 + 0x10));
  uVar16 = (undefined4)((ulong)pQVar14 >> 0x20);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f7ee;
    }
    QArrayData::deallocate(local_1c8,1,8);
  }
LAB_10006f7ee:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f824;
    }
    QArrayData::deallocate(local_1c0,1,8);
  }
LAB_10006f824:
  uVar15 = 0;
  if (*(long *)(DAT_1011c3698 + 0x1108) != 0) {
    uVar15 = *(undefined8 *)(*(long *)(DAT_1011c3698 + 0x1108) + 0x10);
  }
  FUN_1000d7320(uVar15,&local_1b0);
  switch(uVar2) {
  case 0xc:
  case 0xd:
    plVar13 = *(long **)(DAT_1011c3698 + 0x1a18);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))(plVar13,uVar2,0);
    }
    break;
  case 0xf:
    lVar6 = FUN_1000915f0(*(undefined8 *)(param_1 + 0x20));
    if (lVar6 != 0) {
      CVmUsbDevice::CVmUsbDevice(local_2b8);
      CVmDevice::setEnabled((uint)local_2b8);
      local_2c0 = local_198;
      if (1 < *(int *)local_198 + 1U) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + 1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
      }
      CVmDevice::setSystemName((QTypedArrayData<unsigned_short> *)local_2b8);
      if (*(int *)local_2c0 != -1) {
        if (*(int *)local_2c0 != 0) {
          LOCK();
          *(int *)local_2c0 = *(int *)local_2c0 + -1;
          local_31 = *(int *)local_2c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006f92f;
        }
        QArrayData::deallocate(local_2c0,2,8);
      }
LAB_10006f92f:
      local_2c8 = local_1a0;
      if (1 < *(int *)local_1a0 + 1U) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + 1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
      }
      CVmDevice::setUserFriendlyName((QTypedArrayData<unsigned_short> *)local_2b8);
      if (*(int *)local_2c8 != -1) {
        if (*(int *)local_2c8 != 0) {
          LOCK();
          *(int *)local_2c8 = *(int *)local_2c8 + -1;
          local_31 = *(int *)local_2c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006f997;
        }
        QArrayData::deallocate(local_2c8,2,8);
      }
LAB_10006f997:
      CVmUsbDevice::setConnectReason(local_2b8,1);
      local_2d0 = (QArrayData *)QString::fromAscii_helper("usb_device_type",0xf);
      lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_138);
      if (*(int *)local_2d0 != -1) {
        if (*(int *)local_2d0 != 0) {
          LOCK();
          *(int *)local_2d0 = *(int *)local_2d0 + -1;
          local_31 = *(int *)local_2d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006fa0c;
        }
        QArrayData::deallocate(local_2d0,2,8);
      }
LAB_10006fa0c:
      uVar16 = 0;
      if (lVar6 != 0) {
        CVmEventParameter::getParamValue();
        uVar16 = QString::toInt((bool *)&local_2d8,0);
        if (*(int *)local_2d8 != -1) {
          if (*(int *)local_2d8 != 0) {
            LOCK();
            *(int *)local_2d8 = *(int *)local_2d8 + -1;
            local_31 = *(int *)local_2d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006fa6f;
          }
          QArrayData::deallocate(local_2d8,2,8);
        }
      }
LAB_10006fa6f:
      CVmUsbDevice::setUsbType(local_2b8,uVar16);
      local_2e8 = (QArrayData *)QString::fromAscii_helper("USB",3);
      FUN_10007f980(&local_2e0,local_2b8,&local_2e8);
      if (*(int *)local_2e8 != -1) {
        if (*(int *)local_2e8 != 0) {
          LOCK();
          *(int *)local_2e8 = *(int *)local_2e8 + -1;
          local_31 = *(int *)local_2e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006fae6;
        }
        QArrayData::deallocate(local_2e8,2,8);
      }
LAB_10006fae6:
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      plVar13 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_2f0 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 1) = 1;
        plVar13[2] = 0;
        *plVar13 = (long)&PTR_FUN_100bef0d0;
        local_2f0 = plVar13;
      }
      FUN_100090a80(uVar15,uVar3,0xf,0,&local_2e0,&local_2f0);
      if (local_2f0 != (long *)0x0) {
        LOCK();
        plVar13 = local_2f0 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*local_2f0 + 0x10))();
        }
      }
      if (*(int *)local_2e0 != -1) {
        if (*(int *)local_2e0 != 0) {
          LOCK();
          *(int *)local_2e0 = *(int *)local_2e0 + -1;
          local_31 = *(int *)local_2e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006fba6;
        }
        QArrayData::deallocate(local_2e0,2,8);
      }
LAB_10006fba6:
      CVmUsbDevice::~CVmUsbDevice(local_2b8);
    }
    break;
  case 0x10:
    this_00 = operator_new(0xc0);
    CHwPrinter::CHwPrinter(this_00);
    local_2f8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (local_2f8 == (long *)0x0) {
      (**(code **)(*(long *)this_00 + 0x88))(this_00);
      local_2f8 = (long *)0x0;
      this_00 = (CHwPrinter *)0x0;
    }
    else {
      *(undefined4 *)(local_2f8 + 1) = 1;
      local_2f8[2] = (long)this_00;
      *local_2f8 = (long)&PTR_FUN_100bef8f0;
    }
    CVmEventParameter::getParamValue();
    iVar5 = CBaseNode::fromString
                      ((CBaseNode *)this_00,(QTypedArrayData<unsigned_short> *)&local_300,false,
                       (QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_300 != -1) {
      if (*(int *)local_300 != 0) {
        LOCK();
        *(int *)local_300 = *(int *)local_300 + -1;
        local_31 = *(int *)local_300 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006fcb4;
      }
      QArrayData::deallocate(local_300,2,8);
    }
LAB_10006fcb4:
    if (iVar5 != 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","!res","CVmCommandsHandler.cpp",
                    CONCAT44(uVar16,0x267),"vmEvtHwChanged");
    }
    FUN_10009b7b0(*(long *)(param_1 + 0x20) + 0x1a70,&local_2f8,uVar3,uVar4,&local_1b0);
    if (local_2f8 != (long *)0x0) {
      LOCK();
      plVar13 = local_2f8 + 1;
      lVar6 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_2f8 + 0x10))();
      }
    }
    break;
  case 0x16:
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x1ab8) != '\0') {
      FUN_10010dd40(DAT_101116b5c,FUN_1002e4390,0);
    }
  }
  if (local_1b0 != (long *)0x0) {
    LOCK();
    plVar13 = local_1b0 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_1b0 + 0x10))();
    }
  }
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006fda6;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10006fda6:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006fddc;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10006fddc:
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return 1;
}

