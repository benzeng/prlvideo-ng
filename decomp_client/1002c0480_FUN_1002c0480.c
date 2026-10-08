
void FUN_1002c0480(long *param_1,int param_2)

{
  void *pvVar1;
  
  if (param_2 == 0x3c5e) {
    if (DAT_102310a08 == (void *)0x0) {
      pvVar1 = operator_new(0x220);
      FUN_1007cc3f0(pvVar1);
      DAT_102273890 = 1;
      DAT_102310a08 = pvVar1;
    }
    FUN_1007d49f0(DAT_102310a08);
                    /* WARNING: Could not recover jumptable at 0x0001002c04e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  return;
}

