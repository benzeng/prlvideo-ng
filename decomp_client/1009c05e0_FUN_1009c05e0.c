
void FUN_1009c05e0(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  long local_40;
  long local_38;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1009ac1d0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 1:
      FUN_1009ac510(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 2:
      FUN_1009ac530(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 3:
      local_28 = (QArrayData *)**(undefined8 **)(param_4 + 8);
      if (1 < *(int *)local_28 + 1U) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + 1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
      }
      FUN_1009ae040(param_1,&local_28);
      if (*(int *)local_28 != -1) {
        if (*(int *)local_28 != 0) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + -1;
          UNLOCK();
          if (*(int *)local_28 != 0) {
            return;
          }
          local_19 = 0;
        }
        QArrayData::deallocate(local_28,1,8);
      }
      break;
    case 4:
      uVar1 = **(undefined4 **)(param_4 + 8);
      local_30 = 0;
      if (**(long **)(param_4 + 0x10) != 0) {
        local_30 = **(long **)(param_4 + 0x10);
        (*DAT_102310a48)();
      }
      FUN_1009b0280(param_1,uVar1,&local_30);
      if (local_30 != 0) {
        (*DAT_102310a50)();
      }
      break;
    case 5:
      local_38 = 0;
      if (**(long **)(param_4 + 8) != 0) {
        local_38 = **(long **)(param_4 + 8);
        (*DAT_102310a48)();
      }
      local_40 = 0;
      if (**(long **)(param_4 + 0x10) != 0) {
        local_40 = **(long **)(param_4 + 0x10);
        (*DAT_102310a48)();
      }
      FUN_1009b0a30(param_1,&local_38,&local_40);
      if (local_40 != 0) {
        (*DAT_102310a50)();
      }
      local_40 = 0;
      if (local_38 != 0) {
        (*DAT_102310a50)();
      }
      break;
    case 6:
      FUN_1009ad4f0(param_1,**(undefined1 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    case 7:
      FUN_1009adc20(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
  }
  return;
}

