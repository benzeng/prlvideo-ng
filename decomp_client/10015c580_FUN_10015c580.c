
undefined8 FUN_10015c580(undefined8 param_1,undefined8 param_2,uint param_3,QString *param_4)

{
  undefined8 uVar1;
  CRequestInfo local_60 [8];
  QArrayData *local_58;
  int *local_48;
  QVariant local_38;
  undefined1 local_21;
  
  CRequestInfo::CRequestInfo(local_60,param_3,param_4,(QObject *)0x0);
  uVar1 = FUN_10015da10(param_1,param_2,local_60);
  QVariant::~QVariant(&local_38);
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + -1;
    local_21 = *local_48 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_48 != (int *)0x0)) {
      operator_delete(local_48);
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return uVar1;
}

