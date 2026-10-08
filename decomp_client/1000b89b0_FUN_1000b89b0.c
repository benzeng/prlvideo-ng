
undefined8 FUN_1000b89b0(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x68))();
  cVar1 = FUN_1000e8fd0(uVar2,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
  }
  return uVar2;
}

