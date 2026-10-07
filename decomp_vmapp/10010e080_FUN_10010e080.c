
void FUN_10010e080(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = 3;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x109e0) != 2) {
    uVar6 = 0;
  }
  uVar4 = FUN_1007da300("vm.pause_on_sleep",uVar6);
  lVar2 = DAT_1011c3800;
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x1a18);
  FUN_1008e3970("","vm",0,"VM System config monitor: host was woken up");
  lVar5 = FUN_100097250(*(undefined8 *)(param_1 + 0x18));
  if (lVar5 != 0) {
    lVar5 = FUN_100097250(*(undefined8 *)(param_1 + 0x18));
    *(int *)(lVar5 + 0x840) = *(int *)(lVar5 + 0x840) + 1;
  }
  if (lVar2 != 0) {
    FUN_1002f0120(lVar2);
  }
  cVar3 = FUN_100711fc0();
  if ((plVar1 != (long *)0x0) && (cVar3 != '\x01')) {
    (**(code **)(*plVar1 + 0x80))(plVar1);
  }
  if (((uVar4 & 2) != 0) && (*(char *)(param_1 + 0x20) != '\0')) {
    cVar3 = FUN_100711fc0();
    if ((cVar3 != '\0') && (cVar3 = FUN_100712360(), cVar3 == '\0')) {
      return;
    }
    FUN_1008e3970("","vm",0,"VM System config monitor: VM paused -> running");
    FUN_10008fa70(*(undefined8 *)(param_1 + 0x18),0x4e39);
    cVar3 = FUN_10008f5d0(*(undefined8 *)(param_1 + 0x18),0xe,10000);
    if (cVar3 == '\0') {
      FUN_1008e3970("","vm",0,"VM System config monitor: timeout (VM paused -> running)");
      return;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

