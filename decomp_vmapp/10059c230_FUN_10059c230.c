
undefined1 FUN_10059c230(undefined8 param_1,uint *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  QArrayData *local_30;
  uint local_28;
  undefined1 local_22;
  
  local_28 = 0;
  plVar2 = (long *)FUN_10059ac80(param_1,0xb,&local_28);
  if (plVar2 == (long *)0x0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error opening disk %s [0x%x]",local_30 + *(long *)(local_30 + 0x10),
                  local_28);
    if (*(int *)local_30 == -1) {
      uVar1 = 0;
    }
    else {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          uVar1 = 0;
          goto LAB_10059c2f0;
        }
        local_22 = 0;
      }
      QArrayData::deallocate(local_30,1,8);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0xd8))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_10059c2f0:
  if (param_2 != (uint *)0x0) {
    *param_2 = local_28;
  }
  return uVar1;
}

