
undefined8 FUN_100879580(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_1011c0868;
  if (DAT_1011c0868 == 0) {
    lVar1 = FUN_100879660();
  }
  if (*(code **)(lVar1 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001008795c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x50))(param_1,param_2,param_3);
    return uVar2;
  }
  FUN_100887ce0(0x25,0x8c,0x6c,"dso_lib.c",0x1af);
  return 0xffffffff;
}

