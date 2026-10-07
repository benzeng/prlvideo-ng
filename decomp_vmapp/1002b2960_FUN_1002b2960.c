
void FUN_1002b2960(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  QMutex::lock();
  local_60 = 0;
  local_68 = 0;
  local_54 = 0;
  local_70 = param_2;
  local_6c = param_3;
  local_58 = param_4;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,"[%s] Inject move (%d, %d, 0x%x, %s)",param_1[0x18],param_2,
                  param_3,param_4,"abs");
  }
  (**(code **)(*param_1 + 0x50))(param_1,&local_70);
  QMutex::unlock();
  return;
}

