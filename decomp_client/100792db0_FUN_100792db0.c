
void FUN_100792db0(undefined8 param_1)

{
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  int *local_50 [4];
  QVariant local_30 [2];
  undefined1 local_11;
  
  local_58 = (QArrayData *)QString::fromAscii_helper("1onSpecialCharacters()",0x16);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  FUN_100a1c600(local_50,param_1,&local_58,&local_68);
  FUN_1007923b0(param_1,local_50);
  QVariant::~QVariant(local_30);
  if (local_50[0] != (int *)0x0) {
    LOCK();
    *local_50[0] = *local_50[0] + -1;
    local_11 = *local_50[0] != 0;
    UNLOCK();
    if ((!(bool)local_11) && (local_50[0] != (int *)0x0)) {
      operator_delete(local_50[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

