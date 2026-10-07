
void FUN_10047e9d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *local_30;
  
  plVar1 = *(long **)(*(long *)(*(long *)(DAT_1011c3650 + 0x10) + 0x18) + 0x10);
  (**(code **)(*plVar1 + 0x120))(&local_30,plVar1,param_2,param_3);
  if ((local_30 != (long *)0x0) && (local_30[2] != 0)) {
    iVar2 = FUN_1007965e0();
    if ((iVar2 == 0) || (iVar2 == 6)) goto LAB_10047eaa6;
  }
  FUN_1008e3970("TCHOST","ToolsCenterHost",0,
                "VM exec: can\'t send data to client, error = 0x%x! Session will be closed.\n");
  QMutex::lock();
  lVar3 = FUN_10047def0(param_1 + 0x50,param_4);
  if (lVar3 == 0) {
    QMutex::unlock();
  }
  else {
    FUN_10047e6d0(lVar3);
    *(undefined1 *)(lVar3 + 0x21) = 1;
    QMutex::unlock();
    FUN_10047eb10(param_1,param_4);
  }
LAB_10047eaa6:
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return;
}

