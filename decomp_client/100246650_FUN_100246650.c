
undefined8 * FUN_100246650(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 == 1) {
    puVar1 = (undefined *)QString::fromAscii_helper("ShowValidationErrors",0x14);
  }
  else {
    puVar1 = PTR_shared_null_1021e1288;
    if (param_3 == 0) {
      puVar1 = (undefined *)QString::fromAscii_helper("ValidateConfig",0xe);
    }
  }
  *param_1 = puVar1;
  return param_1;
}

