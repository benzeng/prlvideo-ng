
ulong FUN_100ae6580(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = FUN_100ae6240(param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100ae6480(param_1);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}

