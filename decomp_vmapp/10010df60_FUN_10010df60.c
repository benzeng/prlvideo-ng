
void FUN_10010df60(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 3;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x109e0) != 2) {
    uVar5 = 0;
  }
  uVar4 = FUN_1007da300("vm.pause_on_sleep",uVar5);
  lVar2 = DAT_1011c3800;
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x1a18);
  FUN_1008e3970("","vm",0,"VM System config monitor: host is going to sleep");
  if (lVar2 != 0) {
    FUN_1002f00d0(lVar2);
  }
  cVar3 = FUN_100711fc0();
  if ((plVar1 != (long *)0x0) && (cVar3 != '\x01')) {
    (**(code **)(*plVar1 + 0x78))(plVar1);
  }
  if (((uVar4 & 1) != 0) && (0xd < *(uint *)(*(long *)(param_1 + 0x18) + 0xa4))) {
    FUN_1008e3970("","vm",0,"VM System config monitor: VM running -> paused");
    FUN_10008fdb0(*(undefined8 *)(param_1 + 0x18),0x4e38,0);
    cVar3 = FUN_10008f5d0(*(undefined8 *)(param_1 + 0x18),4,10000);
    if (cVar3 == '\0') {
      FUN_1008e3970("","vm",0,"VM System config monitor: timeout (VM running -> paused)");
      return;
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

