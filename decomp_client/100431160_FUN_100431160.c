
void FUN_100431160(undefined8 param_1,int param_2,int param_3,long param_4)

{
  long *plVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100431e30(param_1,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
      return;
    }
    if (param_3 == 1) {
      plVar1 = (long *)QAbstractItemView::model();
      QAbstractItemView::currentIndex();
      local_48 = 0xffffffff;
      local_44 = 0xffffffff;
      local_38 = 0;
      local_40 = 0;
      (**(code **)(*plVar1 + 0x100))(plVar1,local_30,1,&local_48);
    }
    else if (param_3 == 0) {
      FUN_100431600(param_1);
      return;
    }
  }
  return;
}

