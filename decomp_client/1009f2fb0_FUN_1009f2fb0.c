
undefined8 FUN_1009f2fb0(undefined8 param_1,undefined8 param_2)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("CurrentVm.xml",0xd);
  FUN_1009f2400(param_1,param_2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

