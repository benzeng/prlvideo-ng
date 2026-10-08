
undefined1 FUN_100adca00(long *param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  Data *local_30;
  undefined1 local_22;
  
  if (*(int *)(param_1[2] + 0x818) == 0) {
    local_30 = (Data *)PTR_shared_null_1021e15e8;
    (**(code **)(*param_1 + 0x10))(param_1,&local_30);
    if ((param_2 == 0) || (param_3 != '\x01')) {
      if (((int)param_1[4] != 0) && (iVar2 = FUN_100adc6d0(param_1[2]), iVar2 == 0)) {
        FUN_100adcb40(param_1,(int)param_1[4],1,&local_30);
      }
    }
    else {
      uVar1 = FUN_100adcd00(param_1,param_2);
      FUN_100adcb40(param_1,uVar1,1,&local_30);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(*param_1 + 0x18))(param_1,&local_30);
    FUN_100addd20(param_1[1]);
    FUN_100adc520(param_1[2]);
    FUN_100adc580(param_1[2]);
    uVar3 = 1;
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return 1;
        }
        local_22 = 0;
      }
      QListData::dispose(local_30);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

