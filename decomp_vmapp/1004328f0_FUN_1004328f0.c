
void FUN_1004328f0(undefined8 param_1,undefined8 param_2,uint param_3,void *param_4)

{
  undefined1 local_428 [1024];
  uint local_28;
  
  if (0xf < param_3) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_3);
    return;
  }
  local_28 = param_3;
  _memcpy(local_428,param_4,0x400);
  FUN_100434990(param_1,param_2,200000,local_428,0x404,&DAT_1011ccb98,0);
  return;
}

