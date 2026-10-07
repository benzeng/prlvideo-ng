
long FUN_1007ebb80(void)

{
  long lVar1;
  long lVar2;
  long local_18;
  
  lVar1 = FUN_10087e670();
  local_18 = 0;
  if (lVar1 != 0) {
    local_18 = FUN_10086c160();
    if (local_18 != 0) {
      lVar2 = FUN_1008b4900(lVar1,&local_18,0,0);
      if (lVar2 == 0) {
        FUN_10086c430(local_18);
        local_18 = 0;
      }
    }
    FUN_10087d4e0(lVar1);
  }
  return local_18;
}

