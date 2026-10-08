
void FUN_100037150(QObject *param_1,undefined8 param_2)

{
  CRingListModel *this;
  CRingListModel *local_28;
  
  this = operator_new(0x18);
  CRingListModel::CRingListModel(this,param_1);
  local_28 = this;
  CRingListModel::setMaxSize((int)this);
  FUN_100037b80(param_1 + 0x28,param_2,&local_28);
  return;
}

