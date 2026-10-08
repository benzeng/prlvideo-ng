
void FUN_10037fac0(long param_1,char param_2)

{
  undefined8 uVar1;
  QArrayData *local_30 [2];
  undefined1 local_19;
  
  if (*(char *)(param_1 + 0x30) != param_2) {
    *(char *)(param_1 + 0x30) = param_2;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    FUN_10037f160(local_30,uVar1);
    FUN_100834ef0(uVar1,local_30);
    if (*(int *)local_30[0] != -1) {
      if (*(int *)local_30[0] != 0) {
        LOCK();
        *(int *)local_30[0] = *(int *)local_30[0] + -1;
        UNLOCK();
        if (*(int *)local_30[0] != 0) {
          return;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_30[0],2,8);
    }
  }
  return;
}

