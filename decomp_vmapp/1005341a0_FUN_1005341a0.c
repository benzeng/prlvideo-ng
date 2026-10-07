
void FUN_1005341a0(long param_1,undefined4 param_2)

{
  QArrayData *local_20;
  undefined1 local_12;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_1008e3970("","OnConsoleClosingHost",0,
                  "answerToEvent (0x%x) called but no Console event occured",param_2);
    return;
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  local_20 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100519800(param_1,&local_20,param_1 + 0x40,4,0,0);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

