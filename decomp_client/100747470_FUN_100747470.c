
void FUN_100747470(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  if (param_3 != 0) {
    return;
  }
  local_20 = (QArrayData *)QString::fromAscii_helper("win10.upgrade.advisor",0x15);
  uVar1 = FUN_100747530(param_1,&local_20);
  FUN_100746a50(uVar1,0x240c8400);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_1007474de;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1007474de:
  FUN_1007471d0(param_1);
  return;
}

