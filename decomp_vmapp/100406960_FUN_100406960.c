
undefined4 FUN_100406960(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  
  local_2c = 0;
  cVar1 = (**(code **)(*(long *)param_1[1] + 0x98))();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 4) = 0x16;
    local_2c = 0;
  }
  else {
    (**(code **)(*(long *)param_1[1] + 0x60))((long *)param_1[1],param_2,0);
    cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*(long *)param_1[1] + 0x38))
                        ((long *)param_1[1],param_4,param_3,&local_2c);
      if (cVar1 == '\0') {
        local_2c = 0;
      }
    }
    uVar2 = FUN_100768f60();
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  return local_2c;
}

