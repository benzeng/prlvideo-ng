
/* Function Stack Size: 0x18 bytes */

void PDSharedFoldersBarButtonItem::setVm_(ID param_1,SEL param_2,CVmWrap *param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  CSignalSelectorBinding *pCVar6;
  QObject *pQVar7;
  int *piVar8;
  int *piVar9;
  QArrayData *local_70;
  QPixmap local_68 [32];
  objc_super local_48;
  undefined1 local_31;
  
  local_48.super_class = (class_t *)PTR_PDSharedFoldersBarButtonItem_10226ab88;
  local_48.receiver = param_1;
  _objc_msgSendSuper2(&local_48,PTR_s_setVm__102268e58);
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_70 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/DeviceIcons/shared_folders_template.png",0x31);
  QPixmap::QPixmap(local_68,&local_70,0,0);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_imageTemplateWithQPixmap__102268cc8,local_68);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setImage__102268cd0,uVar5);
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  QPixmap::~QPixmap(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100025a48;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100025a48:
  puVar2 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDropType__1022695a8,3);
  (*(code *)puVar2)(param_1,PTR_s_updateConnectedState_1022696f8);
  lVar3 = _vmDeviceUsedChangeBinding;
  if (((*(long *)(param_1 + _vmDeviceUsedChangeBinding) != 0) &&
      (*(int *)(*(long *)(param_1 + _vmDeviceUsedChangeBinding) + 4) != 0)) &&
     (plVar1 = *(long **)(_vmDeviceUsedChangeBinding + 8 + param_1), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))();
  }
  lVar4 = _vmConfigurationChangeBinding;
  if (((*(long *)(param_1 + _vmConfigurationChangeBinding) != 0) &&
      (*(int *)(*(long *)(param_1 + _vmConfigurationChangeBinding) + 4) != 0)) &&
     (plVar1 = *(long **)(_vmConfigurationChangeBinding + 8 + param_1), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))();
  }
  pCVar6 = operator_new(0x18);
  uVar5 = FUN_10018c280(param_3);
  pQVar7 = (QObject *)FUN_100319be0(uVar5);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar6,pQVar7,"2vmDeviceUsed(const QString&, PRL_IO_DEVICE_USED)",
             (objc_object *)param_1,(objc_selector *)PTR_s_updateIOState_102269700);
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pCVar6);
  piVar9 = *(int **)(param_1 + lVar3);
  if (piVar9 != piVar8) {
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      piVar9 = *(int **)(param_1 + lVar3);
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + lVar3) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + lVar3));
      }
    }
    *(int **)(param_1 + lVar3) = piVar8;
    *(CSignalSelectorBinding **)(param_1 + 8 + lVar3) = pCVar6;
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
  pCVar6 = operator_new(0x18);
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar6,(QObject *)param_3,"2vmConfigurationChanged(const CVmConfiguration&)",
             (objc_object *)param_1,(objc_selector *)PTR_s_updateConnectedState_1022696f8);
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pCVar6);
  piVar9 = *(int **)(param_1 + lVar4);
  if (piVar9 != piVar8) {
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
      piVar9 = *(int **)(param_1 + lVar4);
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + lVar4) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + lVar4));
      }
    }
    *(int **)(param_1 + lVar4) = piVar8;
    *(CSignalSelectorBinding **)(param_1 + 8 + lVar4) = pCVar6;
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
  return;
}

