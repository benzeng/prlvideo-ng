
void FUN_100acecb0(long param_1,QString *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    local_30 = (QArrayData *)*param_3;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_23 = *(int *)local_30 != 0;
      UNLOCK();
    }
    FUN_100ae2570(param_1,&local_30,param_4);
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
  }
  return;
}

