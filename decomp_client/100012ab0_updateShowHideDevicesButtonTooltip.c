
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::updateShowHideDevicesButtonTooltip(ID param_1,SEL param_2)

{
  undefined *self;
  char cVar1;
  undefined **ppuVar2;
  ID IVar3;
  undefined8 uVar4;
  QArrayData *local_30;
  undefined1 local_22;
  
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isStackContainerOpen_102268dd8);
  if (cVar1 == '\0') {
    ppuVar2 = &PTR_s_Show_devices_10226ffb0;
  }
  else {
    ppuVar2 = &PTR_s_Hide_devices_10226ffb8;
  }
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,(int)*ppuVar2);
  IVar3 = NSString::stringWithQString_((ID)self,PTR_s_stringWithQString__102268d00,&local_30);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setOpenButtonToolTip__102268de8,uVar4);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

