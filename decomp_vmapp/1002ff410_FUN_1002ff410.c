
void FUN_1002ff410(undefined8 *param_1,undefined8 param_2)

{
  time_t tVar1;
  undefined8 uVar2;
  
  FUN_1002a6dc0();
  *param_1 = &PTR_FUN_100bbb8f0;
  param_1[2] = param_2;
  tVar1 = _time((time_t *)0x0);
  DAT_1011c80d8 = (undefined4)tVar1;
  DAT_1011c80f0 = DAT_1011c80d8;
  FUN_1002a50a0(param_1[2],0x8130,0x813f,param_1);
  uVar2 = FUN_10070e6f0("I@video.gl_reqs");
  param_1[3] = uVar2;
  return;
}

