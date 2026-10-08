
void FUN_10009be40(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  QTimer::stop();
  if (*(char *)(param_1 + 0x30) == '\0') {
    if (*(int *)(param_1 + 0x28) == 3) {
      return;
    }
    local_40 = 3;
    local_38 = 0;
    local_3c = 0;
    local_34 = 0xffff;
    local_30 = 0;
    local_2c = 0;
    puVar1 = &local_40;
    uVar2 = 3;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 2) {
      return;
    }
    local_28 = 3;
    local_20 = 0;
    local_24 = 0;
    local_1c = 0xffff;
    local_14 = 0;
    local_18 = 3;
    puVar1 = &local_28;
    uVar2 = 2;
  }
  FUN_10009b5f0(param_1,uVar2,puVar1);
  return;
}

