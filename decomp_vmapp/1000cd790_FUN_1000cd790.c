
undefined1 FUN_1000cd790(long param_1)

{
  char cVar1;
  uint uVar2;
  
  FUN_1008e3970("","vm",0,"App AFTER callbacks...");
  uVar2 = *(uint *)(param_1 + 0x1f0);
  if ((uVar2 & 0xa000000) == 0) {
    if ((uVar2 & 0x5000000) == 0) goto LAB_1000cd7eb;
    uVar2 = uVar2 | 0x8003;
  }
  else {
    uVar2 = uVar2 | 0x4002;
  }
  cVar1 = FUN_1000ecf90(&DAT_100bfbab0,uVar2);
  if (cVar1 == '\0') {
    FUN_1008e3970("","vm",0,"SaReCallbackOnly failed");
    return 0;
  }
LAB_1000cd7eb:
  FUN_1008e3970("","vm",0,"App AFTER callbacks...OK");
  return 1;
}

