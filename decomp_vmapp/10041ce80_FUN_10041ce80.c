
void FUN_10041ce80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar1 = *(undefined8 *)(param_1 + 0x660);
  FUN_10041cc80(&local_28,param_2,param_2);
  FUN_100415cb0(uVar1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

