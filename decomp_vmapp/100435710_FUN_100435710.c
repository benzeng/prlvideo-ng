
void FUN_100435710(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  
  if (0xf < param_3) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_3);
    return;
  }
  local_18 = 0;
  local_20 = 0;
  local_28 = param_4;
  local_24 = param_5;
  local_10 = param_3;
  FUN_100434990(param_1,param_2,0x1896c,&local_28,0x1c,&DAT_1011ccb98,0);
  return;
}

