
undefined8 FUN_1000a91f0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  QTime::start();
  do {
    cVar1 = FUN_10008bf10(*(undefined8 *)(param_1 + 0x1940));
    if (cVar1 == '\0') {
      FUN_1008e3970("","vm",0,"[GuestMem] unable prepare existing guest memory");
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      FUN_100408ff0(param_1 + 0x10b0,0x80000392,&local_28);
      FUN_10002d9d0(&local_28);
      return 0;
    }
    cVar1 = FUN_10008bf30(*(undefined8 *)(param_1 + 0x1940));
  } while (cVar1 != '\0');
  uVar2 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] Memory batch prepare time is %u msecs",uVar2);
  return 1;
}

