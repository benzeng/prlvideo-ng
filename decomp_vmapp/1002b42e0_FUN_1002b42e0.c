
bool FUN_1002b42e0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"[CBaseKeyboard] incorrect parameter");
  }
  else {
    *param_1 = DAT_1011c4a90;
  }
  return param_1 != (undefined4 *)0x0;
}

