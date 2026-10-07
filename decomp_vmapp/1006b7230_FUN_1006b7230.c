
bool FUN_1006b7230(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_2c [6];
  undefined1 local_26 [6];
  
  FUN_1006b6c60(param_1,local_26);
  FUN_1006b6c60(param_2,local_2c);
  iVar1 = _memcmp(local_26,local_2c,6);
  return iVar1 == 0;
}

