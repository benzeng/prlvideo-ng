
void FUN_1005588b0(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1005565f0();
  *param_1 = &PTR_FUN_100bc5bc0;
  param_1[6] = &PTR_metaObject_100bc5c78;
  param_1[8] = &PTR_FUN_100bc5cf0;
  param_1[9] = &PTR_FUN_100bc5d48;
  iVar1 = FUN_1007da300("vm.snapshot.defer_writes",1);
  *(bool *)(param_1 + 0x14) = iVar1 != 0;
  return;
}

