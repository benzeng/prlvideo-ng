
void FUN_100aced80(long param_1,QString *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  QArrayData *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    local_38 = (QArrayData *)*param_3;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_2b = *(int *)local_38 != 0;
      UNLOCK();
    }
    FUN_100ae25d0(param_1,&local_38,param_4,param_5);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
        local_2a = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return;
}

