
undefined4 FUN_10059ae20(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  QArrayData *local_30;
  undefined4 local_28;
  undefined1 local_22;
  
  local_28 = 0;
  FUN_10059f090(param_2);
  plVar1 = (long *)FUN_10059ac80(param_1,9,&local_28);
  if (plVar1 == (long *)0x0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,
                  "Error opening disk %s to get info. Received NULL reference. Error 0x%x",
                  local_30 + *(long *)(local_30 + 0x10),local_28);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return local_28;
        }
        local_22 = 0;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  else {
    local_28 = (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return local_28;
}

