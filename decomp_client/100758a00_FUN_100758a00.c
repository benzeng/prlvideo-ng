
undefined8 * FUN_100758a00(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_100109d60(&local_30,param_2,0);
  FUN_1000341d0(param_1,&local_30);
  FUN_100758680(local_38,param_2,3);
  FUN_1001d3590(param_1,local_38);
  FUN_100758680(local_40,param_2,10);
  FUN_1001d3590(param_1,local_40);
  FUN_100758680(local_48,param_2,0xb);
  FUN_1001d3590(param_1,local_48);
  FUN_100758680(local_50,param_2,6);
  FUN_1001d3590(param_1,local_50);
  FUN_100039a80(local_50);
  FUN_100039a80(local_48);
  FUN_100039a80(local_40);
  FUN_100039a80(local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

