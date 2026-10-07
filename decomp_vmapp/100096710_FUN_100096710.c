
void FUN_100096710(long param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  FUN_1008e3970("","vm",0,"[Devices] Terminating...");
  QTime::start();
  FUN_1003fcbb0(param_1 + 0x1960);
  FUN_100258380();
  FUN_1002a49b0();
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","Flush devices threads",uVar4)
  ;
  QTime::start();
  FUN_10010d8c0();
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","System Config Monitor",uVar4)
  ;
  QTime::start();
  if (*(long *)(DAT_1011c3698 + 0x1a58) != 0) {
    FUN_1001087b0(*(undefined8 *)(param_1 + 0x1a60));
  }
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","Captured video sources",uVar4
               );
  if (*(long *)(param_1 + 0x10800) != 0) {
    QTime::start();
    if (*(long **)(param_1 + 0x10800) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10800) + 8))();
    }
    *(undefined8 *)(param_1 + 0x10800) = 0;
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","PS/2 keyboard",uVar4);
  }
  if (*(long *)(param_1 + 0x10808) != 0) {
    QTime::start();
    if (*(long **)(param_1 + 0x10808) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10808) + 8))();
    }
    *(undefined8 *)(param_1 + 0x10808) = 0;
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","USB keyboard",uVar4);
  }
  if (*(long *)(param_1 + 0x10810) != 0) {
    QTime::start();
    if (*(long **)(param_1 + 0x10810) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10810) + 8))();
    }
    *(undefined8 *)(param_1 + 0x10810) = 0;
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","PS/2 mouse",uVar4);
  }
  if (*(long *)(param_1 + 0x10818) != 0) {
    QTime::start();
    if (*(long **)(param_1 + 0x10818) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10818) + 8))();
    }
    *(undefined8 *)(param_1 + 0x10818) = 0;
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","USB mouse",uVar4);
  }
  QTime::start();
  if (DAT_1011c3800 != 0) {
    FUN_100272660();
  }
  FUN_1002725c0();
  *(undefined8 *)(param_1 + 0x1a08) = 0;
  *(undefined8 *)(param_1 + 0x1a00) = 0;
  *(undefined8 *)(param_1 + 0x19f8) = 0;
  *(undefined8 *)(param_1 + 0x19f0) = 0;
  *(undefined8 *)(param_1 + 0x19e8) = 0;
  *(undefined8 *)(param_1 + 0x19e0) = 0;
  *(undefined8 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","Networking",uVar4);
  FUN_1000e7750();
  FUN_1002592b0(FUN_100097140,0);
  if (*(long *)(param_1 + 0x1988) != 0) {
    QTime::start();
    if (*(long **)(param_1 + 0x1988) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1988) + 8))();
    }
    *(undefined8 *)(param_1 + 0x1988) = 0;
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","SCSI adapter",uVar4);
  }
  if (*(long *)(param_1 + 0x1a18) != 0) {
    QTime::start();
    FUN_10029ff90(param_1 + 0x1a18);
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","Sound",uVar4);
  }
  if (*(long *)(param_1 + 0x1a58) != 0) {
    QTime::start();
    FUN_1002c1cd0(*(undefined8 *)(param_1 + 0x1a58));
    lVar2 = *(long *)(param_1 + 0x1a58);
    *(undefined8 *)(param_1 + 0x1a58) = 0;
    FUN_10025ab50(lVar2 + 0x68);
    if (*(int *)(param_1 + 0x1948) != 2) {
      FUN_1002bd000();
    }
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","USB controller",uVar4);
  }
  QTime::start();
  if (*(long **)(param_1 + 0x1a20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a20) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x1a20) = 0;
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","Power source",uVar4);
  if (*(long *)(param_1 + 0x1a38) != 0) {
    FUN_1002a9880();
  }
  QTime::start();
  pvVar3 = *(void **)(param_1 + 0x10838);
  if (pvVar3 != (void *)0x0) {
    FUN_1004c04f0(pvVar3);
    operator_delete(pvVar3);
  }
  *(undefined8 *)(param_1 + 0x10838) = 0;
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","Tools dispatcher",uVar4);
  QTime::start();
  pvVar3 = *(void **)(param_1 + 0x1a30);
  if (pvVar3 != (void *)0x0) {
    FUN_100533d20(pvVar3);
    operator_delete(pvVar3);
  }
  *(undefined8 *)(param_1 + 0x1a30) = 0;
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","Ballooning",uVar4);
  QTime::start();
  if (*(long **)(param_1 + 0x1ac8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1ac8) + 8))();
  }
  *(undefined8 *)(param_1 + 0x1ac8) = 0;
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs",
                "Storage filter TG req handler",uVar4);
  QTime::start();
  if (*(long **)(param_1 + 0x1a38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a38) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x1a38) = 0;
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","PCI video",uVar4);
  pvVar3 = *(void **)(param_1 + 0x107f8);
  if (pvVar3 != (void *)0x0) {
    FUN_1000d7780(pvVar3);
    operator_delete(pvVar3);
  }
  *(undefined8 *)(param_1 + 0x107f8) = 0;
  QTime::start();
  if (*(long **)(param_1 + 0x1a28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a28) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x1a28) = 0;
  uVar4 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","PCI toolgate",uVar4);
  if (*(long *)(param_1 + 0x1a48) != 0) {
    QTime::start();
    FUN_100470f60(param_1 + 0x10840,*(undefined8 *)(param_1 + 0x1a48));
    (**(code **)(**(long **)(param_1 + 0x1a48) + 0x28))
              (*(long **)(param_1 + 0x1a48),0x17,FUN_1000a2370,param_1);
    (**(code **)(**(long **)(param_1 + 0x1a48) + 0x18))
              (*(long **)(param_1 + 0x1a48),*(undefined8 *)(param_1 + 0x1a40));
    FUN_10046aff0(*(undefined8 *)(param_1 + 0x1a48));
    *(undefined8 *)(param_1 + 0x1a48) = 0;
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","OTG dispatcher",uVar4);
  }
  plVar1 = (long *)(param_1 + 0x1a40);
  if (*plVar1 != 0) {
    QTime::start();
    FUN_100466f90(*plVar1);
    *plVar1 = 0;
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s termination time is %u msecs","OTG request tracker",uVar4)
    ;
  }
  FUN_1008e3970("","vm",0,"[Devices] Terminating finished");
  return;
}

