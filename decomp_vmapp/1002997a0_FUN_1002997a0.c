
void FUN_1002997a0(long *param_1)

{
  undefined8 uVar1;
  
  if (1 < DAT_1011b55f8) {
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_1008e3970("AudioAS","LocalDevices",2,"[CSoundDevice] [%s] Terminating",uVar1);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x38))(param_1);
  QMutex::lock();
  FUN_10029a070(param_1);
  QMutex::unlock();
  FUN_100299430(param_1,0);
  return;
}

