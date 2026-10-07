
undefined8 FUN_1003fb830(void)

{
  uint in_EAX;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  iVar1 = FUN_1002592b0(FUN_1003fb3b0,(long)&uStack_28 + 4);
  if (iVar1 == 0) {
    uVar3 = 0;
    if (uStack_28._4_4_ != 0) {
      do {
        FUN_1007685b0(100);
        uStack_28 = uStack_28 & 0xffffffff;
        iVar1 = FUN_1002592b0(FUN_1003fb5f0,(long)&uStack_28 + 4);
        if (iVar1 != 0) {
          pcVar2 = "Device scanning with is_disabled_compact_disks_cb()failed";
          goto LAB_1003fb8bd;
        }
      } while (uStack_28._4_4_ != 0);
    }
  }
  else {
    pcVar2 = "Device scanning with enable_compact_disks_cb()failed";
LAB_1003fb8bd:
    FUN_1008e3970("","HddUtils",0,pcVar2);
    uVar3 = 0x80021000;
  }
  return uVar3;
}

