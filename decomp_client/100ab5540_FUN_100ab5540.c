
long FUN_100ab5540(void)

{
  long lVar1;
  long lVar2;
  long local_18;
  
  lVar1 = FUN_100c59870();
  local_18 = 0;
  if (lVar1 != 0) {
    local_18 = FUN_100c47360();
    if (local_18 != 0) {
      lVar2 = FUN_100c8fe80(lVar1,&local_18,0,0);
      if (lVar2 == 0) {
        FUN_100c47630(local_18);
        local_18 = 0;
      }
    }
    FUN_100c586e0(lVar1);
  }
  return local_18;
}

