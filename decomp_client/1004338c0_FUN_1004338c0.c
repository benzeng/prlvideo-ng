
undefined8 FUN_1004338c0(QModelIndex *param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  CVmSharedFolder *in_RAX;
  CVmSharedFolder *this;
  int iVar2;
  CVmSharedFolder *local_38;
  
  local_38 = in_RAX;
  QAbstractItemModel::beginInsertRows(param_1,param_4,param_2);
  if (0 < param_3) {
    iVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      this = operator_new(200);
      CVmSharedFolder::CVmSharedFolder(this);
      local_38 = this;
      FUN_10025a9f0(uVar1,&local_38);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  QAbstractItemModel::endInsertRows();
  return 1;
}

