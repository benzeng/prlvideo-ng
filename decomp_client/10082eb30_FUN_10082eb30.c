
void FUN_10082eb30(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      uVar1 = *(undefined8 *)(param_4 + 8);
      uVar2 = **(undefined8 **)(param_4 + 0x10);
      uVar3 = (*(undefined8 **)(param_4 + 0x10))[1];
      local_20 = (QArrayData *)**(undefined8 **)(param_4 + 0x18);
      if (1 < *(int *)local_20 + 1U) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + 1;
        local_13 = *(int *)local_20 != 0;
        UNLOCK();
      }
      FUN_10033b9b0(param_1,uVar1,uVar2,uVar3,&local_20);
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
      break;
    case 1:
      FUN_10033bac0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 2:
      FUN_10033bb00(param_1,*(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    case 3:
      FUN_10033bae0(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    }
  }
  return;
}

