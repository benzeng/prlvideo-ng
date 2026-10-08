
/* Function Stack Size: 0x18 bytes */

void PDDeviceBarButtonItem::setActionSet_(ID param_1,SEL param_2,CDeviceActionSet *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  CSignalSelectorBinding *pCVar10;
  int *piVar11;
  QObject *pQVar12;
  QArrayData *local_218;
  QArrayData *local_210;
  QPixmap local_208 [32];
  QArrayData *local_1e8;
  QPixmap local_1e0 [32];
  QArrayData *local_1c0;
  QPixmap local_1b8 [32];
  QArrayData *local_198;
  QPixmap local_190 [32];
  QArrayData *local_170;
  QPixmap local_168 [32];
  QArrayData *local_148;
  QPixmap local_140 [32];
  QArrayData *local_120;
  QPixmap local_118 [32];
  QArrayData *local_f8;
  QPixmap local_f0 [32];
  QArrayData *local_d0;
  QPixmap local_c8 [32];
  QArrayData *local_a8;
  QPixmap local_a0 [32];
  QArrayData *local_80;
  QPixmap local_78 [32];
  QPixmap local_58 [39];
  undefined1 local_31;
  
  uVar7 = FUN_100152280();
  local_218 = *(QArrayData **)((long)&(param_3->field6_0x2a).field0_0x0 + 6);
  if (1 < *(int *)local_218 + 1U) {
    LOCK();
    *(int *)local_218 = *(int *)local_218 + 1;
    local_31 = *(int *)local_218 != 0;
    UNLOCK();
  }
  uVar7 = FUN_1001548f0(uVar7,&local_218);
  if (*(int *)local_218 != -1) {
    if (*(int *)local_218 != 0) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + -1;
      local_31 = *(int *)local_218 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100024083;
    }
    QArrayData::deallocate(local_218,2,8);
  }
LAB_100024083:
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setVm__102268e58,uVar7);
  lVar2 = _deviceActionSet;
  piVar8 = (int *)0x0;
  if (param_3 != (CDeviceActionSet *)0x0) {
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)param_3);
  }
  piVar11 = *(int **)(param_1 + lVar2);
  if (piVar11 != piVar8) {
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      piVar11 = *(int **)(param_1 + lVar2);
    }
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + lVar2) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + lVar2));
      }
    }
    *(int **)(param_1 + lVar2) = piVar8;
    *(CDeviceActionSet **)(param_1 + 8 + lVar2) = param_3;
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_31 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar8);
    }
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateConnectedState_1022696f8);
  uVar5 = FUN_1007bd980(param_3);
  QPixmap::QPixmap(local_58);
  switch(uVar5) {
  case 3:
    local_80 = (QArrayData *)
               QString::fromAscii_helper(":/pixmaps/DeviceIcons/floppy_template.png",0x29);
    QPixmap::QPixmap(local_78,&local_80,0,0);
    QPixmap::operator=(local_58,local_78);
    QPixmap::~QPixmap(local_78);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_80,2,8);
    }
    break;
  case 5:
    local_a8 = (QArrayData *)
               QString::fromAscii_helper(":/pixmaps/DeviceIcons/cd-dvd_rom_template.png",0x2d);
    QPixmap::QPixmap(local_a0,&local_a8,0,0);
    QPixmap::operator=(local_58,local_a0);
    QPixmap::~QPixmap(local_a0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
    break;
  case 6:
    local_d0 = (QArrayData *)
               QString::fromAscii_helper(":pixmaps/DeviceIcons/hard_disk_template.png",0x2b);
    QPixmap::QPixmap(local_c8,&local_d0,0,0);
    QPixmap::operator=(local_58,local_c8);
    QPixmap::~QPixmap(local_c8);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
    break;
  case 8:
    local_148 = (QArrayData *)
                QString::fromAscii_helper(":/pixmaps/DeviceIcons/network_adapter_template.png",0x32)
    ;
    QPixmap::QPixmap(local_140,&local_148,0,0);
    QPixmap::operator=(local_58,local_140);
    QPixmap::~QPixmap(local_140);
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_148,2,8);
    }
    break;
  case 10:
    local_f8 = (QArrayData *)
               QString::fromAscii_helper(":/pixmaps/DeviceIcons/serial_port_template.png",0x2e);
    QPixmap::QPixmap(local_f0,&local_f8,0,0);
    QPixmap::operator=(local_58,local_f0);
    QPixmap::~QPixmap(local_f0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
    break;
  case 0xb:
    local_120 = (QArrayData *)
                QString::fromAscii_helper(":/pixmaps/DeviceIcons/parallel_port_template.png",0x30);
    QPixmap::QPixmap(local_118,&local_120,0,0);
    QPixmap::operator=(local_58,local_118);
    QPixmap::~QPixmap(local_118);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_120,2,8);
    }
    break;
  case 0xc:
    local_170 = (QArrayData *)
                QString::fromAscii_helper(":/pixmaps/DeviceIcons/sound_template.png",0x28);
    QPixmap::QPixmap(local_168,&local_170,0,0);
    QPixmap::operator=(local_58,local_168);
    QPixmap::~QPixmap(local_168);
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_170,2,8);
    }
    break;
  case 0xf:
    local_198 = (QArrayData *)
                QString::fromAscii_helper(":/pixmaps/DeviceIcons/usb_device_template.png",0x2d);
    QPixmap::QPixmap(local_190,&local_198,0,0);
    QPixmap::operator=(local_58,local_190);
    QPixmap::~QPixmap(local_190);
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_198,2,8);
    }
    break;
  case 0x11:
    local_1c0 = (QArrayData *)
                QString::fromAscii_helper(":/pixmaps/DeviceIcons/generic_pci_template.png",0x2e);
    QPixmap::QPixmap(local_1b8,&local_1c0,0,0);
    QPixmap::operator=(local_58,local_1b8);
    QPixmap::~QPixmap(local_1b8);
    if (*(int *)local_1c0 != -1) {
      if (*(int *)local_1c0 != 0) {
        LOCK();
        *(int *)local_1c0 = *(int *)local_1c0 + -1;
        local_31 = *(int *)local_1c0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_1c0,2,8);
    }
    break;
  case 0x12:
    local_210 = (QArrayData *)
                QString::fromAscii_helper(":/pixmaps/DeviceIcons/generic_scsi_template.png",0x2f);
    QPixmap::QPixmap(local_208,&local_210,0,0);
    QPixmap::operator=(local_58,local_208);
    QPixmap::~QPixmap(local_208);
    if (*(int *)local_210 != -1) {
      if (*(int *)local_210 != 0) {
        LOCK();
        *(int *)local_210 = *(int *)local_210 + -1;
        local_31 = *(int *)local_210 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_210,2,8);
    }
    break;
  case 0x14:
    local_1e8 = (QArrayData *)
                QString::fromAscii_helper(":/pixmaps/DeviceIcons/video_adapter_template.png",0x30);
    QPixmap::QPixmap(local_1e0,&local_1e8,0,0);
    QPixmap::operator=(local_58,local_1e0);
    QPixmap::~QPixmap(local_1e0);
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_1e8,2,8);
    }
  }
  cVar4 = QPixmap::isNull();
  uVar9 = 0;
  if (cVar4 == '\0') {
    uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_imageTemplateWithQPixmap__102268cc8
                       ,local_58);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  }
  QPixmap::~QPixmap(local_58);
  uVar9 = _objc_autoreleaseReturnValue(uVar9);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setImage__102268cd0,uVar9);
  iVar6 = FUN_1007bd980(param_3);
  if (iVar6 == 3) {
    uVar9 = 1;
  }
  else {
    iVar6 = FUN_1007bd980(param_3);
    if (iVar6 != 5) goto LAB_1000247e6;
    uVar9 = 2;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDropType__1022695a8,uVar9);
LAB_1000247e6:
  lVar2 = _deviceActionsChangeBinding;
  if (((*(long *)(param_1 + _deviceActionsChangeBinding) != 0) &&
      (*(int *)(*(long *)(param_1 + _deviceActionsChangeBinding) + 4) != 0)) &&
     (plVar1 = *(long **)(_deviceActionsChangeBinding + 8 + param_1), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))();
  }
  lVar3 = _vmDeviceUsedChangeBinding;
  if (((*(long *)(param_1 + _vmDeviceUsedChangeBinding) != 0) &&
      (*(int *)(*(long *)(param_1 + _vmDeviceUsedChangeBinding) + 4) != 0)) &&
     (plVar1 = *(long **)(_vmDeviceUsedChangeBinding + 8 + param_1), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))();
  }
  pCVar10 = operator_new(0x18);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar10,(QObject *)param_3,"2deviceActionsChanged()",(objc_object *)param_1,
             (objc_selector *)PTR_s_updateConnectedState_1022696f8);
  piVar11 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pCVar10);
  piVar8 = *(int **)(param_1 + lVar2);
  if (piVar8 != piVar11) {
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      piVar8 = *(int **)(param_1 + lVar2);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + lVar2) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + lVar2));
      }
    }
    *(int **)(param_1 + lVar2) = piVar11;
    *(CSignalSelectorBinding **)(param_1 + 8 + lVar2) = pCVar10;
  }
  if (piVar11 != (int *)0x0) {
    LOCK();
    *piVar11 = *piVar11 + -1;
    local_31 = *piVar11 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar11);
    }
  }
  pCVar10 = operator_new(0x18);
  uVar7 = FUN_10018c280(uVar7);
  pQVar12 = (QObject *)FUN_100319be0(uVar7);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar10,pQVar12,"2vmDeviceUsed(const QString&, PRL_IO_DEVICE_USED)",
             (objc_object *)param_1,(objc_selector *)PTR_s_updateIOState_102269700);
  piVar11 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pCVar10);
  piVar8 = *(int **)(param_1 + lVar3);
  if (piVar8 != piVar11) {
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
      piVar8 = *(int **)(param_1 + lVar3);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + lVar3) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + lVar3));
      }
    }
    *(int **)(param_1 + lVar3) = piVar11;
    *(CSignalSelectorBinding **)(param_1 + 8 + lVar3) = pCVar10;
  }
  if (piVar11 != (int *)0x0) {
    LOCK();
    *piVar11 = *piVar11 + -1;
    local_31 = *piVar11 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar11);
    }
  }
  return;
}

