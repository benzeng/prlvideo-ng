
undefined8 FUN_1004ace40(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1004b2e40(*(undefined8 *)(param_1 + 0xe0));
    return uVar1;
  }
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Invalid request in CancelRequestLocked()");
  }
  return 0xf0000002;
}

