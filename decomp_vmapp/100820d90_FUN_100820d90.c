
void FUN_100820d90(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 != *param_2) {
    return;
  }
  if (DAT_1011c06d8 != 0) {
    iVar1 = FUN_100885600();
    if (*param_1 < iVar1) {
      lVar2 = FUN_100885620(DAT_1011c06d8);
                    /* WARNING: Could not recover jumptable at 0x000100820dd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return;
    }
  }
  _strcmp(*(char **)(param_1 + 2),*(char **)(param_2 + 2));
  return;
}

