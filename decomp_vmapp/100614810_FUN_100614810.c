
int FUN_100614810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *local_30;
  
  local_30 = (undefined8 *)0x0;
  iVar2 = FUN_1006140f0(&local_30,param_1,param_2,param_3);
  puVar1 = local_30;
  if (iVar2 < 0) {
    FUN_1008e3970("","crypt",0,"Error initializing engine 0x%x",iVar2);
  }
  else {
    iVar2 = FUN_100614430(local_30,param_4,param_5,0);
    (**(code **)*puVar1)(puVar1);
  }
  return iVar2;
}

