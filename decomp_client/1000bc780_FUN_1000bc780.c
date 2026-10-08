
void FUN_1000bc780(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  QArrayData *local_38;
  undefined1 local_30 [23];
  undefined1 local_19;
  
  FUN_1000c0170(&local_38,param_4);
  uVar1 = 2;
  if ((param_3 != 2) && (uVar1 = 0xfffffffe, param_3 == 1)) {
    uVar1 = FUN_1000bbb60(param_1,0xfffffffe);
  }
  FUN_1000bc3e0(param_1,uVar1,&local_38);
  FUN_100039a80(local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

