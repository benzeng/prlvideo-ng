
void FUN_100893a20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((*(code **)(param_1 + 8) != (code *)0x0) &&
       (lVar1 = (**(code **)(param_1 + 8))(param_1,6,param_2,4,(long)param_5,0), lVar1 < 1)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_10088af10(*(long *)(param_1 + 0x30) + 0x18,param_2,0,param_3,param_4,param_5);
    if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100893aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 8))(param_1,6,param_2,4,(long)param_5,1);
      return;
    }
  }
  return;
}

