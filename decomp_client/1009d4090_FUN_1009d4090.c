
undefined1
FUN_1009d4090(task_t param_1,undefined4 param_2,byte *param_3,code *param_4,undefined8 param_5)

{
  undefined1 uVar1;
  long lVar2;
  string local_110;
  undefined1 local_10f [15];
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined1 local_d8 [32];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  
  _task_suspend(param_1);
  FUN_1009d51e0(local_d8,param_1,0);
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  FUN_1009d5370(&local_110,param_3,&local_f8);
  local_b8 = 6;
  local_b4 = 2;
  local_b0 = 0;
  if (((byte)local_110 & 1) == 0) {
    local_100 = local_10f;
  }
  local_ac = param_2;
  uVar1 = FUN_1009d54a0(local_d8,local_100);
  if (param_4 != (code *)0x0) {
    if ((*param_3 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    lVar2 = local_e8;
    if ((local_f8 & 1) == 0) {
      lVar2 = (long)&local_f8 + 1;
    }
    uVar1 = (*param_4)(param_3,lVar2,param_5,uVar1);
  }
  std::string::~string(&local_110);
  std::string::~string((string *)&local_f8);
  FUN_1009d5320(local_d8);
  _task_resume(param_1);
  return uVar1;
}

