
undefined8 FUN_10029bb60(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((DAT_102310940 != 0) && (*(int *)(DAT_102310940 + 4) != 0)) && (DAT_102310948 != 0)) {
    (**(code **)(*param_1 + 0x80))();
    FUN_100df99c0("","prl_client_app",0,"Task already runnning");
    uVar1 = 0x80000009;
  }
  return uVar1;
}

