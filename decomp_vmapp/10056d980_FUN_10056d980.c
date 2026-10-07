
void FUN_10056d980(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)param_1[2];
  *param_1 = ((undefined8 *)param_1[2])[3];
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x340);
                    /* WARNING: Could not recover jumptable at 0x00010056d9a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1,param_3,UNRECOVERED_JUMPTABLE);
  return;
}

