
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarButtonItem::updateConnectedState(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar2 = _deviceActionSet;
  if (((*(long *)(param_1 + _deviceActionSet) != 0) &&
      (*(int *)(*(long *)(param_1 + _deviceActionSet) + 4) != 0)) &&
     (*(long *)(_deviceActionSet + 8 + param_1) != 0)) {
    iVar3 = FUN_1007bd9c0();
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setConnected__1022695a0,iVar3 != 0);
    uVar4 = 0;
    if ((*(long *)(param_1 + lVar2) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + lVar2) + 4) != 0)) {
      uVar4 = *(undefined8 *)(lVar2 + 8 + param_1);
    }
    iVar3 = FUN_1007bd980(uVar4);
    if ((iVar3 == 0xf) &&
       ((*(byte *)(*(long *)(*(long *)(lVar2 + 8 + param_1) + 0x28) + 8) & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setConnected__1022695a0,0);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
    uVar4 = 0;
    if ((*(long *)(param_1 + lVar2) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + lVar2) + 4) != 0)) {
      uVar4 = *(undefined8 *)(lVar2 + 8 + param_1);
    }
    FUN_1007c5460(&local_30,uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar1,PTR_s_stringWithQString__102268d00,&local_30);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setItemToolTip__1022695b0,uVar4);
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return;
}

