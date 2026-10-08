
void FUN_100a39ef0(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  Connection local_40 [8];
  long local_38;
  
  if (*(int *)(*param_3 + 0xc) != *(int *)(*param_3 + 8)) {
    lVar3 = *param_2;
    iVar1 = *(int *)(lVar3 + 8);
    if (iVar1 != *(int *)(lVar3 + 0xc)) {
      plVar4 = (long *)(lVar3 + 0x10 + (long)iVar1 * 8);
      lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
      do {
        if (*plVar4 != 0) {
          FUN_10018c250(&local_38);
          cVar2 = FUN_100a3f2f0(param_1 + 0x68,local_38,param_3);
          if (local_38 != 0) {
            _PrlHandle_Free();
          }
          if (cVar2 != '\0') {
            QObject::connect(local_40,*plVar4,
                             "2vmStateChanged(GUI::VmId,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)"
                             ,param_1,
                             "1onVmStateChanged(GUI::VmId,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)"
                             ,0);
            QMetaObject::Connection::~Connection(local_40);
          }
        }
        FUN_100a39aa0();
        plVar4 = plVar4 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  return;
}

