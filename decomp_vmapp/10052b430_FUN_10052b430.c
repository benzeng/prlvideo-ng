
ulong FUN_10052b430(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = FUN_10052b0f0(param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10052b330(param_1);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}

