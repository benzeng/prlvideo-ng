
void FUN_100476ac0(undefined8 param_1)

{
  undefined8 uVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  uVar1 = FUN_10044b340();
  uVar1 = FUN_1003b0b00(uVar1);
  FUN_100459010(&local_30,param_1);
  FUN_1003adb20(uVar1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

