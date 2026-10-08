
undefined8
FUN_100c78fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long local_30;
  
  local_30 = 0;
  iVar1 = FUN_100c80850(param_3,&local_30,param_1);
  uVar2 = 0;
  if (local_30 != 0) {
    uVar2 = 0;
    iVar1 = FUN_100c65f10(local_30,(long)iVar1,param_4,param_5,param_2,0);
    if (iVar1 != 0) {
      FUN_100bf3910(local_30);
      uVar2 = 1;
    }
  }
  return uVar2;
}

