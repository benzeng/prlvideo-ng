
void FUN_100a3c5a0(QObject *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  QObject *pQVar2;
  long local_40;
  int *local_38;
  undefined1 local_29;
  
  uVar1 = FUN_100152280();
  pQVar2 = (QObject *)FUN_100154930(uVar1,param_2 + 8,param_2);
  if (pQVar2 == (QObject *)0x0) {
    return;
  }
  if ((param_3 != 0x30000001) && (param_3 != 0x30000009)) {
    if (param_3 != 0x30000004) {
      return;
    }
    FUN_10018c250(&local_40,pQVar2);
    FUN_100a3f470(&local_38,param_1 + 0x68,local_40);
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
    FUN_100a3a020(param_1,pQVar2,&local_38);
    if (*local_38 != -1) {
      if (*local_38 != 0) {
        LOCK();
        *local_38 = *local_38 + -1;
        local_29 = *local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a3c656;
      }
      FUN_100a3fda0(&local_38);
    }
  }
LAB_100a3c656:
  QObject::disconnect(pQVar2,
                      "2vmStateChanged(GUI::VmId,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                      param_1,
                      "1onVmStateChanged(GUI::VmId,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)");
  return;
}

