
void FUN_100432860(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (0xf < param_3) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_3);
    return;
  }
  local_24 = param_7;
  local_20 = param_8;
  local_1c = param_9;
  local_28 = param_6;
  local_18 = param_3;
  local_14 = param_4;
  local_10 = param_5;
  FUN_100434990(param_1,param_2,0x18972,&local_28,0x1c,&DAT_1011ccb98,0);
  return;
}

