
void FUN_10047a200(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_10111c580;
  param_1 = param_1 + 1;
  FUN_10047a0f0(param_1,0x10);
  puVar1 = (undefined4 *)FUN_10078cc60(param_1);
  *puVar1 = 0xe;
  puVar1[2] = 1;
  puVar1[1] = 0;
  puVar1[3] = 0;
  FUN_10047a190(param_1,&DAT_100b43b60,8,0x2001);
  return;
}

