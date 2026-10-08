
void FUN_10006c790(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  local_40 = *(Data **)(param_1 + 0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar4 = (long)*(int *)(local_40 + 8);
      lVar2 = *(long *)(param_1 + 0x20);
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_40 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_40 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar4 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
  if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
    do {
      local_28 = 1;
      lVar2 = QMetaObject::cast((QObject *)&PTR_PTR_1022184b0);
      if (lVar2 != 0) {
        FUN_1004dd2d0(lVar2,0);
      }
      local_38 = local_38 + 8;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10006c889;
    }
    QListData::dispose(local_40);
  }
LAB_10006c889:
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x30),PTR_s_parentWindow_102269368);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (lVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(undefined8 *)(param_1 + 0x30),PTR_s_parentWindow_102269368);
    (*(code *)puVar1)(uVar3,PTR_s_removeChildWindow__102268bf0,*(undefined8 *)(param_1 + 0x30));
    (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30),PTR_s_orderOut__102269d30,
                      *(undefined8 *)(param_1 + 0x30));
  }
  return;
}

