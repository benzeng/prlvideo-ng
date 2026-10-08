
undefined1 FUN_100182420(QGraphicsItem *param_1,undefined8 param_2,char param_3)

{
  long *plVar1;
  undefined1 uVar2;
  long *local_40;
  Data *local_38;
  undefined1 local_29;
  
  FUN_100182540(&local_38,param_1,param_2);
  if (*(int *)(local_38 + 0xc) == *(int *)(local_38 + 8)) {
    uVar2 = 0;
  }
  else {
    plVar1 = *(long **)(local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10);
    local_40 = plVar1;
    QGraphicsScene::removeItem(param_1);
    FUN_100186400(param_1 + 0x10,&local_40);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (param_3 != '\0') {
      FUN_1001832f0(param_1,1);
      FUN_1001832f0(param_1,2);
      FUN_100183da0(param_1);
      FUN_100182a20(param_1);
      FUN_1007fda60(param_1);
    }
    FUN_1007fd9f0(param_1,param_2);
    uVar2 = 1;
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar2;
      }
      local_29 = 0;
    }
    QListData::dispose(local_38);
  }
  return uVar2;
}

