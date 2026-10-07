
undefined8 FUN_1004e63f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_68 [32];
  undefined **local_48;
  QArrayData *local_40;
  undefined1 local_34 [4];
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = *param_1;
  FUN_1004c6f30(uVar1);
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_1004e94c0(&local_30,local_34);
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  local_40 = local_30 + *(long *)(local_30 + 0x10);
  local_48 = &PTR_FUN_10111ce80;
  FUN_1004e8cf0(local_68);
  FUN_1004ead10(param_1,local_68);
  FUN_1004ebb10(local_68);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e64b3;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1004e64b3:
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","SharedFoldersHost",2,"SharedFolders state restored");
  }
  FUN_1004c6ee0(uVar1);
  return 1;
}

