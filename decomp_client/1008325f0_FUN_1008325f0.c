
void FUN_1008325f0(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  QArrayData *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10035f610();
      return;
    case 1:
      uVar1 = *(undefined8 *)(param_4 + 8);
      puVar2 = *(undefined8 **)(param_4 + 0x10);
      local_20 = puVar2[2];
      local_30 = *puVar2;
      local_28 = puVar2[1];
      local_38 = (QArrayData *)**(undefined8 **)(param_4 + 0x18);
      if (1 < *(int *)local_38 + 1U) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + 1;
        local_11 = *(int *)local_38 != 0;
        UNLOCK();
      }
      FUN_10035f790(param_1,uVar1,&local_38);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          UNLOCK();
          if (*(int *)local_38 != 0) {
            return;
          }
          local_11 = 0;
        }
        QArrayData::deallocate(local_38,1,8);
      }
      break;
    case 2:
      FUN_10035f9e0(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 3:
      FUN_10035f660();
      return;
    }
  }
  return;
}

