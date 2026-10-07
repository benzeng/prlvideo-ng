
undefined8 FUN_1000bbbc0(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 7) {
    cVar1 = FUN_100533a10(*(undefined8 *)(param_1 + 0x1a30));
    if (cVar1 != '\0') {
      uVar2 = FUN_100533b70(*(undefined8 *)(param_1 + 0x1a30));
      FUN_1008e3970("","vm",0,"Balloon timed out. Result %llx, dirty=%u",uVar2,
                    *(undefined1 *)(*(long *)(param_1 + 0x1a30) + 0x10));
    }
    DAT_1011c36a0 = 0;
    FUN_1000a7ae0(param_1,1,0);
    FUN_1000a78a0(param_1,1);
    FUN_10008f1c0(param_1,2,60000,1,1);
    FUN_10008ec80(param_1,0x11);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

