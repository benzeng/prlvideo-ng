
void FUN_100083a30(undefined4 *param_1,undefined8 param_2)

{
  ___bzero(param_1,0xa58);
  FUN_100083890(param_1,param_2);
  *param_1 = 0xdead0a58;
  param_1[0x10] = 10;
  param_1[0x54] = 10;
  param_1[0x111] = 0xff;
  param_1[0x11a] = 1;
  param_1[0x11d] = 0x27f;
  return;
}

