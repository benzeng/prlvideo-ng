
void _xmlNanoHTTPOpen(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  _xmlNanoHTTPMethod(param_1,0,0,param_2,0,0);
  return;
}

