
undefined8 * FUN_100208240(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 == 1) {
    puVar1 = (undefined *)QString::fromAscii_helper("CreateHdd",9);
  }
  else {
    puVar1 = PTR_shared_null_1021e1288;
    if (param_3 == 0) {
      puVar1 = (undefined *)QString::fromAscii_helper("ShowDialog",10);
    }
  }
  *param_1 = puVar1;
  return param_1;
}

