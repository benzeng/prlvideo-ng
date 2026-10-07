
undefined8 FUN_100285890(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_40 = *(undefined4 *)(param_1 + 0x90);
  local_3c = 5;
  local_38 = 0x88;
  local_34 = 0;
  plVar2 = *(long **)(param_1 + 0x3a0f0);
  iVar3 = 0;
  if (plVar2 != (long *)(param_1 + 0x3a0f0)) {
    iVar3 = 0;
    do {
      iVar1 = FUN_1000ed5c0(&local_40,0x10);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = FUN_1000ed5c0(plVar2 + -0x13,local_38);
      if (iVar1 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)(param_1 + 0x3a0f0));
  }
  if (iVar3 != *(int *)(param_1 + 0x3a100)) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","n == m_stalled_cnt",
                  "../Scsi/Lsi/dev.cpp",0x157,"suspend_queue");
  }
  return 0;
}

