
int FUN_1005a5820(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  QArrayData *local_30;
  int local_28;
  undefined1 local_22;
  
  local_28 = 0;
  plVar2 = (long *)FUN_10059ac80(param_2,param_3,&local_28);
  if (plVar2 == (long *)0x0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Can\'t add disk %s to the states manager. Error code %x",
                  local_30 + *(long *)(local_30 + 0x10),local_28);
    iVar1 = local_28;
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
      iVar1 = local_28;
    }
  }
  else {
    local_28 = FUN_1005a5710(param_1,plVar2,1);
    iVar1 = 0;
    if (local_28 < 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_1008e3970("","vdisk",0,"Error inserting opened disk code 0x%x",local_28);
      iVar1 = local_28;
    }
  }
  return iVar1;
}

