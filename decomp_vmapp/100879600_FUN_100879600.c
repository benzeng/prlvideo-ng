
undefined8 FUN_100879600(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_1011c0868;
  if (DAT_1011c0868 == 0) {
    lVar1 = FUN_100879660();
  }
  if (*(code **)(lVar1 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010087962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x58))(param_1);
    return uVar2;
  }
  FUN_100887ce0(0x25,0x8b,0x6c,"dso_lib.c",0x1bb);
  return 0;
}

