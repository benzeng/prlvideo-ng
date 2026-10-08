
void FUN_100b0ddb0(long *param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  
  lVar1 = param_1[7];
  cVar2 = (**(code **)(*param_1 + 0x198))(param_1,param_3 * lVar1,param_2,"prefetch");
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100b0ddfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 0x58))((long *)param_1[1],param_2,param_3 * lVar1);
    return;
  }
  return;
}

