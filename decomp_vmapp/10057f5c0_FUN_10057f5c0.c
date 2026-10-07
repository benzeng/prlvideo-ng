
ulong FUN_10057f5c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  
  QMutex::lock();
  if (param_1[0x239] == 0) {
    uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,param_2);
    uVar4 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      FUN_1008e3970("","vdisk",0,"Error setting key to decrypt disk [0x%x]",uVar4);
    }
    else {
      plVar2 = operator_new(0x68,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar2 == (long *)0x0) {
        FUN_1008e3970("","vdisk",0,"Error allocating memory for images filter");
        uVar4 = 0x80000002;
      }
      else {
        FUN_100580a50(plVar2);
        uVar1 = (**(code **)(*plVar2 + 0xf8))(plVar2,1,param_1,param_3,param_4);
        if ((int)uVar1 < 0) {
          pcVar3 = "Failed to prepare encryption (0x%x)";
        }
        else {
          uVar1 = FUN_10057f4e0(param_1,plVar2);
          if (-1 < (int)uVar1) {
            param_1[0x239] = (long)plVar2;
            QMutex::unlock();
                    /* WARNING: Could not recover jumptable at 0x00010057f6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
            return uVar4;
          }
          pcVar3 = "Failed to fill images (0x%x)";
        }
        uVar4 = (ulong)uVar1;
        FUN_1008e3970("","vdisk",0,pcVar3,uVar4);
        (**(code **)*plVar2)();
      }
    }
  }
  else {
    FUN_1008e3970("","vdisk",0,"Some progress in action");
    uVar4 = 0x80019002;
  }
  QMutex::unlock();
  return uVar4;
}

