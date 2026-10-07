
void FUN_100031560(long param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                  undefined4 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined4 uVar1;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  
  QMutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 0x280);
  QMutex::unlock();
  local_32 = param_7;
  local_40 = param_2;
  local_3e = param_3;
  local_3c = param_4;
  local_38 = param_5;
  local_34 = param_6;
  FUN_100030610(param_1,uVar1,0x10,&local_40);
  return;
}

