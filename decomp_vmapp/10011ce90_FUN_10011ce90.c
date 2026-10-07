
undefined8 FUN_10011ce90(undefined8 param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("proto_first_str_param",0x15);
  local_30 = pQVar1;
  FUN_10011cdb0(param_1,param_2,&local_30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_22 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return param_1;
}

