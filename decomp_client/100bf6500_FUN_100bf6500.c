
void FUN_100bf6500(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 != *param_2) {
    return;
  }
  if (DAT_1023160c8 != 0) {
    iVar1 = FUN_100c60800();
    if (*param_1 < iVar1) {
      lVar2 = FUN_100c60820(DAT_1023160c8);
                    /* WARNING: Could not recover jumptable at 0x000100bf6547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return;
    }
  }
  _strcmp(*(char **)(param_1 + 2),*(char **)(param_2 + 2));
  return;
}

