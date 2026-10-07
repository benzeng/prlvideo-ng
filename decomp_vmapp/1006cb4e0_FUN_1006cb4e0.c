
undefined1 FUN_1006cb4e0(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_30 [8];
  long local_28;
  long local_20;
  
  local_20 = 0;
  local_28 = 0;
  cVar1 = FUN_1006cb220(local_30);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1006cb580(param_1,FUN_1006cb6d0,local_30);
  }
  if (local_28 != 0) {
    _CFRelease();
  }
  if (local_20 != 0) {
    _CFRelease();
  }
  return uVar2;
}

