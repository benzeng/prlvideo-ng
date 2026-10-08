
bool FUN_100b40d10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_2c [6];
  undefined1 local_26 [6];
  
  FUN_100b40740(param_1,local_26);
  FUN_100b40740(param_2,local_2c);
  iVar1 = _memcmp(local_26,local_2c,6);
  return iVar1 == 0;
}

