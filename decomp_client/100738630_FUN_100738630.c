
void FUN_100738630(QModelIndex *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0xffffffff;
  local_34 = 0xffffffff;
  local_28 = 0;
  local_30 = 0;
  local_50 = 0xffffffff;
  local_4c = 0xffffffff;
  local_40 = 0;
  local_48 = 0;
  QAbstractItemModel::beginMoveRows
            (param_1,(int)&local_38,param_2,(QModelIndex *)(ulong)(uint)(param_2 + -1 + param_4),
             (int)&local_50);
  FUN_100738c40(*(long *)(param_1 + 0x10) + 0x18,param_2,param_3);
  QAbstractItemModel::endMoveRows();
  return;
}

