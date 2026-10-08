
void FUN_10082dbb0(undefined8 param_1,int param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_1003342a0(param_1,*(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    }
    if (param_3 == 1) {
      uVar2 = *(undefined8 *)(param_4 + 8);
      uVar3 = **(undefined8 **)(param_4 + 0x10);
      uVar1 = *(undefined4 *)(*(undefined8 **)(param_4 + 0x10) + 1);
      local_20 = (QArrayData *)**(undefined8 **)(param_4 + 0x18);
      if (1 < *(int *)local_20 + 1U) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + 1;
        local_13 = *(int *)local_20 != 0;
        UNLOCK();
      }
      FUN_100334400(param_1,uVar2,uVar3,uVar1,&local_20);
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
        QArrayData::deallocate(local_20,1,8);
      }
    }
    else if (param_3 == 0) {
      FUN_100334280(param_1,*(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                    **(undefined4 **)(param_4 + 0x18));
      return;
    }
  }
  return;
}

