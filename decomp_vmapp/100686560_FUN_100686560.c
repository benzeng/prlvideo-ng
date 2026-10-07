
undefined8 FUN_100686560(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_100684b20(param_1 + 6,param_1[7] * param_1[4]);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010068659d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x178))(param_1,0,param_1[4],param_2);
    return uVar2;
  }
  return 0x80021022;
}

