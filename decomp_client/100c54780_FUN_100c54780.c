
undefined8 FUN_100c54780(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_1023162a8;
  if (DAT_1023162a8 == 0) {
    lVar1 = FUN_100c54860();
  }
  if (*(code **)(lVar1 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c547c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x50))(param_1,param_2,param_3);
    return uVar2;
  }
  FUN_100c62ee0(0x25,0x8c,0x6c,"dso_lib.c",0x1af);
  return 0xffffffff;
}

