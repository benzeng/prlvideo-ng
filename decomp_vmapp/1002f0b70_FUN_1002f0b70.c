
void FUN_1002f0b70(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  iVar6 = FUN_1002f03f0();
  uVar1 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar7 = 0;
  bVar4 = false;
  do {
    bVar3 = bVar4;
    if (((uVar1 >> ((uint)uVar7 & 0x1f) & 1) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 8) + uVar7 * 8), lVar2 != 0)) {
      cVar5 = FUN_100272b10(lVar2,1);
      if ((iVar6 < 0x3c) && (cVar5 != '\x01')) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("","LocalDevices",1,
                        "VMNET(%d) Link is still not connected. Secs after wakeup %d",
                        uVar7 & 0xffffffff,iVar6);
        }
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1 << ((byte)uVar7 & 0x1f);
      }
      else {
        cVar5 = FUN_100276c00(*(undefined8 *)(*(long *)(param_1 + 8) + uVar7 * 8));
        bVar3 = true;
        if (cVar5 == '\0') {
          bVar3 = bVar4;
        }
      }
    }
    uVar7 = uVar7 + 1;
    bVar4 = bVar3;
  } while (uVar7 != 0x10);
  if (bVar3) {
    FUN_100272c10();
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",1,"Rescheduling network reconnect timer.");
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_10010dd40(5000,FUN_1002f0b60,param_1);
  return;
}

