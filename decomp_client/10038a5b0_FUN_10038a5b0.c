
void FUN_10038a5b0(QModelIndex *param_1,QString *param_2,QString *param_3,QIcon *param_4,
                  undefined4 param_5,char param_6)

{
  int iVar1;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  QString QStack_50;
  undefined4 local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  register0x00001208 = (int)PTR_shared_null_1021e1288;
  local_58 = (undefined1  [8])PTR_shared_null_1021e1288;
  register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  QIcon::QIcon(local_40);
  QString::operator=((QString *)local_58,param_2);
  QString::operator=((QString *)(local_58 + 8),param_3);
  QIcon::operator=(local_40,param_4);
  iVar1 = *(int *)(**(long **)(param_1 + 0x10) + 0xc) - *(int *)(**(long **)(param_1 + 0x10) + 8);
  local_70 = 0xffffffff;
  local_6c = 0xffffffff;
  local_60 = 0;
  local_68 = 0;
  local_48 = param_5;
  QAbstractItemModel::beginInsertRows(param_1,(int)&local_70,iVar1);
  FUN_10038aef0(*(undefined8 *)(param_1 + 0x10),local_58);
  if (param_6 != '\0') {
    *(int *)(*(long *)(param_1 + 0x10) + 8) = iVar1;
  }
  QAbstractItemModel::endInsertRows();
  QIcon::~QIcon(local_40);
  if (*(int *)QStack_50.field0_0x0 != -1) {
    if (*(int *)QStack_50.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_50.field0_0x0 = *(int *)QStack_50.field0_0x0 + -1;
      local_31 = *(int *)QStack_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10038a6b2;
    }
    QArrayData::deallocate((QArrayData *)QStack_50.field0_0x0,2,8);
  }
LAB_10038a6b2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58,2,8);
  }
  return;
}

