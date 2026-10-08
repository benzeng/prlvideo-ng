
void FUN_100adcee0(long *param_1)

{
  Data *local_20;
  undefined1 local_11;
  
  if (*(int *)(param_1[2] + 0x818) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    local_20 = (Data *)PTR_shared_null_1021e15e8;
    (**(code **)(*param_1 + 0x10))(param_1,&local_20);
    FUN_100adcb40(param_1,0,1,&local_20);
    FUN_100addd20(param_1[1]);
    FUN_100adc520(param_1[2]);
    FUN_100adc580(param_1[2]);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return;
        }
        local_11 = 0;
      }
      QListData::dispose(local_20);
    }
  }
  return;
}

