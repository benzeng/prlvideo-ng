
void _xmlNanoHTTPOpenRedir(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  _xmlNanoHTTPMethodRedir(param_1,0,0,param_2,param_3,0,0);
  return;
}

