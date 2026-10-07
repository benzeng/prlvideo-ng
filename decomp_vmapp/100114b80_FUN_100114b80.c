
string * FUN_100114b80(string *param_1,undefined8 param_2,string *param_3,long param_4)

{
  QArrayData *local_58;
  QArrayData *local_50;
  string local_48 [24];
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_4 == 0) {
    std::string::string(param_1,param_3);
    return param_1;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper("+0x%2",5);
  QString::arg(&local_50,&local_58,param_4,0,0x10,0x20);
  QString::toUtf8();
  std::string::__init((char *)local_48,(ulong)(local_30 + *(long *)(local_30 + 0x10)));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100114c27;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100114c27:
  FUN_100115aa0(param_1,param_3,local_48);
  std::string::~string(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100114c6f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100114c6f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return param_1;
}

