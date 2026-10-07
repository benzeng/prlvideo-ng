
undefined8 FUN_1000a1ce0(long param_1,uint *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *local_30 [2];
  
  uVar6 = 0;
  if (param_2 != (uint *)0x0) {
    if (DAT_1011b64d8 == '\0') {
      iVar3 = ___cxa_guard_acquire(&DAT_1011b64d8);
      if (iVar3 != 0) {
        DAT_1011b64c0 = QString::fromAscii_helper("parallels.GracefulShutdown.guest.win",0x24);
        DAT_1011b64c8 = QString::fromAscii_helper("parallels.GracefulShutdown.guest.lin",0x24);
        DAT_1011b64d0 = QString::fromAscii_helper("parallels.GracefulShutdown.guest.mac",0x24);
        ___cxa_atexit(FUN_1000a2af0,0,0x100000000);
        ___cxa_guard_release(&DAT_1011b64d8);
      }
    }
    uVar6 = 0;
    FUN_100474100(local_30,param_1 + 0x10840,&DAT_1011b64c0,3,0);
    if (local_30[0] != (long *)0x0) {
      puVar5 = (undefined8 *)local_30[0][2];
      uVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        piVar4 = (int *)*puVar5;
        if (*piVar4 != 1) {
          FUN_100031c40(puVar5);
          piVar4 = (int *)*puVar5;
        }
        if (3 < *(int *)(*(long *)(piVar4 + 0x12) + 4)) {
          puVar5 = (undefined8 *)0x0;
          if (local_30[0] != (long *)0x0) {
            puVar5 = (undefined8 *)local_30[0][2];
          }
          piVar4 = (int *)*puVar5;
          if (*piVar4 != 1) {
            FUN_100031c40(puVar5);
            piVar4 = (int *)*puVar5;
          }
          *param_2 = *(uint *)(*(long *)(piVar4 + 0x12) + *(long *)(*(long *)(piVar4 + 0x12) + 0x10)
                              ) | 3;
          uVar6 = 1;
        }
      }
      if (local_30[0] != (long *)0x0) {
        LOCK();
        plVar1 = local_30[0] + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_30[0] + 0x10))();
        }
      }
    }
  }
  return uVar6;
}

