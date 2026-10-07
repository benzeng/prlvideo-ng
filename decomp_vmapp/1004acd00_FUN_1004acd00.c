
undefined8 FUN_1004acd00(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xf0000002;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Invalid request in SubmitRequestLocked()");
    }
  }
  else {
    if (3 < *(ushort *)(param_2 + 0x14)) {
      uVar1 = FUN_1004b2d60(*(undefined8 *)(param_1 + 0xe0),param_2);
      return uVar1;
    }
    uVar1 = 0xf0000003;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Invalid inline bytes count for Request  %p",param_2)
      ;
    }
  }
  return uVar1;
}

