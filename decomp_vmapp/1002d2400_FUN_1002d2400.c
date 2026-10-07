
undefined4 FUN_1002d2400(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[XHC] SetInterrupt Reason:%x Target:%d, USBCMD = %08x, USBSTS = %08x",
                  param_2 & 0xffff,param_3,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x80),
                  *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x84));
  }
  if ((0x1f < param_3) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"[XHC] Interrupt Target(%d) is more that (32)",param_3);
  }
  lVar4 = *(long *)(param_1 + 0x40);
  uVar5 = *(uint *)(lVar4 + 0x84);
  do {
    puVar1 = (uint *)(lVar4 + 0x84);
    LOCK();
    uVar3 = *puVar1;
    bVar7 = uVar5 == uVar3;
    if (bVar7) {
      *puVar1 = (param_2 & 3) << 3 | uVar5;
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
    UNLOCK();
  } while (!bVar7);
  lVar4 = *(long *)(param_1 + 0x40);
  uVar6 = 0;
  if ((*(byte *)(lVar4 + 0x80) & 4) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x14b0) + 0xf0);
    *plVar2 = *plVar2 + 1;
    uVar6 = 1;
    uVar5 = *(uint *)(lVar4 + 0x2020);
    do {
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x2020);
      bVar7 = uVar5 == uVar3;
      if (bVar7) {
        *(uint *)(lVar4 + 0x2020) = 1 << ((byte)param_3 & 0x1f) | uVar5;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
      UNLOCK();
    } while (!bVar7);
    FUN_1002effe0(*(undefined8 *)(param_1 + 0x1498));
  }
  return uVar6;
}

