
size_t FUN_100411780(void *param_1,uint param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  size_t sVar1;
  undefined8 local_18;
  
  local_18 = 0x400b200;
  sVar1 = 8;
  if (param_2 < 9) {
    sVar1 = (size_t)param_2;
  }
  if (param_2 < 4) {
    sVar1 = FUN_1004103f0(0x52400,param_3,param_4,0);
    return sVar1;
  }
  if (*(short *)(param_5 + 0x68) == 1) {
    local_18 = 0x80000400b200;
  }
  _memcpy(param_1,&local_18,sVar1);
  return sVar1;
}

