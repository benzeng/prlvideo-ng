
undefined8 * FUN_1002cc370(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  cVar1 = operator==((QString *)(param_2 + 0x28),(QString *)(param_2 + 0x20));
  if (cVar1 == '\0') {
    if (*(int *)(((QString *)(param_2 + 0x28))->field0_0x0 + 4) != 0) {
      cVar1 = FUN_1001b35f0(param_2 + 0x18);
      if (cVar1 == '\0') {
        local_2c = 0;
        FUN_100129840(param_1,&local_2c);
        local_30 = 1;
        FUN_100129840(param_1,&local_30);
      }
    }
    local_34 = 2;
    FUN_100129840(param_1,&local_34);
  }
  else {
    local_28[0] = 1;
    FUN_100129840(param_1,local_28);
  }
  return param_1;
}

