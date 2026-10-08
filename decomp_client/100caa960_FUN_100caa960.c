
long FUN_100caa960(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_100cab020();
  }
  lVar1 = (**(code **)(param_1 + 8))();
  if (lVar1 == 0) {
    FUN_100c62ee0(0xe,0x6f,0x41,"conf_lib.c",0xed);
    lVar1 = 0;
  }
  return lVar1;
}

