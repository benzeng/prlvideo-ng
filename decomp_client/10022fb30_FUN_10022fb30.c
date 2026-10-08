
undefined8 * FUN_10022fb30(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 == 2) {
    puVar1 = (undefined *)QString::fromAscii_helper("Logout",6);
  }
  else if (param_3 == 1) {
    puVar1 = (undefined *)QString::fromAscii_helper("SetPassword",0xb);
  }
  else {
    puVar1 = PTR_shared_null_1021e1288;
    if (param_3 == 0) {
      puVar1 = (undefined *)QString::fromAscii_helper("LoginInGuest",0xc);
    }
  }
  *param_1 = puVar1;
  return param_1;
}

