
void FUN_100863b40(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  if (param_2 == 0xc) {
    if ((param_3 == 1) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1007b8f70(param_1,param_4[1]);
      return;
    case 1:
      FUN_1007ba670(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 2:
      uVar1 = *(undefined4 *)param_4[1];
      local_20 = *(QArrayData **)param_4[2];
      if (1 < *(int *)local_20 + 1U) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + 1;
        local_13 = *(int *)local_20 != 0;
        UNLOCK();
      }
      FUN_1007b8e40(param_1,uVar1,&local_20,*(undefined4 *)param_4[3]);
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
      break;
    case 3:
      FUN_1007b9e90(param_1,*(undefined4 *)param_4[1]);
      return;
    }
  }
  return;
}

