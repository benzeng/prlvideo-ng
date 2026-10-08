
void FUN_10098dcf0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  QString::toUtf8();
  QString::toUtf8();
  QString::toUtf8();
  local_60 = 0x64657363;
  local_58 = local_50 + *(long *)(local_50 + 0x10);
  local_5c = *(undefined4 *)(local_50 + 4);
  local_70[0] = 1;
  local_68 = &local_60;
  local_30 = 0;
  local_38 = 0;
  lVar1 = *param_1;
  iVar2 = _SecKeychainFindGenericPassword
                    (0,*(undefined4 *)(local_40 + 4),local_40 + *(long *)(local_40 + 0x10),
                     *(undefined4 *)(lVar1 + 4),lVar1 + *(long *)(lVar1 + 0x10),&local_30,&local_38,
                     &local_78);
  _SecKeychainItemFreeContent(0,local_38);
  if (iVar2 == -0x62d4) {
    lVar1 = *param_1;
    iVar2 = _SecKeychainAddGenericPassword
                      (0,*(undefined4 *)(local_40 + 4),local_40 + *(long *)(local_40 + 0x10),
                       *(undefined4 *)(lVar1 + 4),lVar1 + *(long *)(lVar1 + 0x10),
                       *(undefined4 *)(local_48 + 4),local_48 + *(long *)(local_48 + 0x10),&local_78
                      );
  }
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
    if (*(int *)(*param_4 + 4) != 0) {
      puVar3 = local_70;
    }
    iVar2 = _SecKeychainItemModifyAttributesAndData
                      (local_78,puVar3,*(undefined4 *)(local_48 + 4),
                       local_48 + *(long *)(local_48 + 0x10));
    if (iVar2 != 0) goto LAB_10098de0b;
  }
  else {
LAB_10098de0b:
    FUN_10098dbc0(iVar2);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10098de42;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10098de42:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10098de72;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10098de72:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return;
}

