
void FUN_1002b2850(long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  long local_68 [3];
  undefined4 local_50;
  bool local_4c;
  
  QMutex::lock();
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  bVar4 = *(char *)((long)param_1 + 0x44) == '\0';
  if (bVar4) {
    uVar3 = (undefined4)param_1[5];
    uVar1 = *(undefined4 *)((long)param_1 + 0x2c);
    local_68[0] = param_1[5];
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
  }
  local_4c = !bVar4;
  local_50 = param_2;
  if (2 < DAT_1011b55f8) {
    pcVar2 = "abs";
    if (!bVar4) {
      pcVar2 = "rel";
    }
    FUN_1008e3970("","LocalDevices",3,"[%s] Inject buttons (%d, %d, %d, %d, 0x%x, %s)",param_1[0x18]
                  ,uVar3,uVar1,0,0,param_2,pcVar2);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_68);
  QMutex::unlock();
  return;
}

