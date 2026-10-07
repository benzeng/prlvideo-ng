
void FUN_100434340(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                  void *param_6)

{
  ulong uVar1;
  uint *puVar2;
  
  if (0xf < param_3) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_3);
    return;
  }
  uVar1 = (ulong)param_5 + 0x10;
  puVar2 = operator_new(uVar1);
  ___bzero(puVar2,uVar1);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar2[2] = param_5;
  if (param_5 != 0) {
    _memcpy(puVar2 + 4,param_6,(ulong)param_5);
  }
  FUN_100434990(param_1,param_2,0x18984,puVar2,param_5 + 0x10,&DAT_1011ccb98,0);
  operator_delete(puVar2);
  return;
}

