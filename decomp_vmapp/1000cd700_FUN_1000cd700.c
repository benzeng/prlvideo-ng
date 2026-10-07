
bool FUN_1000cd700(long param_1)

{
  char cVar1;
  uint uVar2;
  
  FUN_1008e3970("","vm",0,"App BEFORE callbacks...");
  uVar2 = *(uint *)(param_1 + 0x1f0);
  if ((uVar2 & 0xa000000) == 0) {
    uVar2 = uVar2 | 0x2003;
  }
  else {
    uVar2 = uVar2 | 0x1002;
  }
  cVar1 = FUN_1000ecf90(&DAT_100bfbab0,uVar2);
  if (cVar1 == '\0') {
    FUN_1008e3970("","vm",0,"SaReCallbackOnly failed");
  }
  else {
    FUN_1008e3970("","vm",0,"App BEFORE callbacks...OK");
  }
  return cVar1 != '\0';
}

