
void FUN_1000bd300(long *param_1)

{
  char cVar1;
  long lVar2;
  
  if ((char)param_1[9] != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x68))(param_1);
    if (*(char *)(lVar2 + 0xc) != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001000bd33a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x78))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001000bd346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))(param_1);
      return;
    }
  }
  return;
}

