
long FUN_1008cf3e0(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_1008cfaa0();
  }
  lVar1 = (**(code **)(param_1 + 8))();
  if (lVar1 == 0) {
    FUN_100887ce0(0xe,0x6f,0x41,"conf_lib.c",0xed);
    lVar1 = 0;
  }
  return lVar1;
}

