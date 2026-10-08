
void FUN_1007a6220(long param_1,undefined8 param_2)

{
  Data *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_19;
  
  if (*(int *)(param_1 + 0x68) == 2) {
    local_28 = 0x172;
    local_24 = 0x186;
    local_38 = 0x10;
    local_30 = 0x540000005f;
    FUN_100124a60(&local_40,param_1 + 0x90,param_1 + 0xa0);
    FUN_1007aaab0(param_1 + 0x70,param_2,&local_28,&local_38,0,
                  *(int *)(local_40 + 0xc) != *(int *)(local_40 + 8));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_19 = 0;
      }
      QListData::dispose(local_40);
    }
  }
  return;
}

