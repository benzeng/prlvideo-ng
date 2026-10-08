
undefined8 FUN_10010cf90(undefined8 param_1,undefined4 param_2)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("SCSI %1:0",9);
  QString::arg(param_1,&local_28,param_2,0,10,0x20);
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

