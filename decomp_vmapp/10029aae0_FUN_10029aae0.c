
int FUN_10029aae0(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  if (param_1[0x23] == 0) {
    FUN_10029a070(param_1);
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,0);
    if (-1 < iVar1) {
      param_1[0x23] = (long)param_2;
      iVar1 = 0;
      FUN_10029a7b0(param_1);
    }
  }
  else {
    iVar1 = -0x7ffffff7;
    if (0 < DAT_1011b55f8) {
      uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
      FUN_1008e3970("AudioAS","LocalDevices",1,
                    "[CSoundDevice] [%s] Slave already attached: old = %p, new = %p",uVar2,
                    param_1[0x23],param_2);
    }
  }
  QMutex::unlock();
  return iVar1;
}

