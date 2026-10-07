
void FUN_1005f3400(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,
                  undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100585990(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001005f3430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_4,uVar1);
  return;
}

