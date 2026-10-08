
void FUN_10098df60(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 local_30;
  QArrayData *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_11;
  
  QString::toUtf8();
  local_18 = 0;
  local_20 = 0;
  lVar1 = *param_1;
  iVar2 = _SecKeychainFindGenericPassword
                    (0,*(undefined4 *)(local_28 + 4),local_28 + *(long *)(local_28 + 0x10),
                     *(undefined4 *)(lVar1 + 4),lVar1 + *(long *)(lVar1 + 0x10),&local_18,&local_20,
                     &local_30);
  _SecKeychainItemFreeContent(0,local_20);
  if ((iVar2 == 0) && (iVar2 = _SecKeychainItemDelete(local_30), iVar2 != 0)) {
    FUN_10098dbc0(iVar2);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

