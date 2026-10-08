
undefined8 FUN_100a2feb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (DAT_1023112a0 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(param_4 + 8);
                    /* WARNING: Could not recover jumptable at 0x000100a2feda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 **)(param_4 + 8),param_1,param_2,param_3,param_3,
                       UNRECOVERED_JUMPTABLE);
    return uVar1;
  }
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("CPTOOL","CPInterceptor",1,"promiseKeeper called on broken context");
  }
  return 0xffff9dd4;
}

