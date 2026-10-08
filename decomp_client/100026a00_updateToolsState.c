
/* Function Stack Size: 0x10 bytes */

void PDToolsBarButtonItem::updateToolsState(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + PDBarButtonItem::_vm) != 0) &&
      (*(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) != 0)) &&
     (*(long *)(PDBarButtonItem::_vm + 8 + param_1) != 0)) {
    uVar2 = FUN_10018f5b0();
    *(undefined4 *)(param_1 + _toolsState) = uVar2;
    puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
    FUN_1001a0d80(&local_30,uVar2);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar1,PTR_s_stringWithQString__102268d00,&local_30);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setItemToolTip__1022695b0,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
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

