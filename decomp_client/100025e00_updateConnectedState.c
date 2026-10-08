
/* Function Stack Size: 0x10 bytes */

void PDSharedFoldersBarButtonItem::updateConnectedState(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  QArrayData *local_38;
  undefined1 local_2a;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + PDBarButtonItem::_vm) != 0) &&
     (uVar4 = 0, *(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) != 0)) {
    uVar4 = *(undefined8 *)(PDBarButtonItem::_vm + 8 + param_1);
  }
  bVar3 = FUN_10018fb40(uVar4);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setConnected__1022695a0,bVar3 ^ 1);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  FUN_1001a0d40(&local_38);
  uVar4 = (*(code *)puVar1)(puVar2,PTR_s_stringWithQString__102268d00,&local_38);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setItemToolTip__1022695b0,uVar4);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

