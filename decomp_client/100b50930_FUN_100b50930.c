
undefined1 FUN_100b50930(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_30 [8];
  long local_28;
  long local_20;
  
  local_20 = 0;
  local_28 = 0;
  cVar1 = FUN_100b50670(local_30);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100b509d0(param_1,FUN_100b50b20,local_30);
  }
  if (local_28 != 0) {
    _CFRelease();
  }
  if (local_20 != 0) {
    _CFRelease();
  }
  return uVar2;
}

