
undefined1
FUN_100753620(undefined8 param_1,long param_2,undefined8 param_3,undefined2 *param_4,ulong *param_5)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 local_140 [32];
  uint local_120;
  undefined4 uStack_11c;
  uint local_10c;
  ulong local_38;
  
  if (param_5 == (ulong *)0x0) {
    return 0;
  }
  if (*(short *)(param_2 + 0x220) == 0x40) {
    cVar1 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x6d0),
                          local_140,0x110);
    if (cVar1 == '\0') {
      FUN_1008e3970("","dbgdump",0,"Failed to read KPCR 0x%llx. Trying to use default...",
                    *(undefined8 *)(param_2 + 0x6d0));
      cVar1 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),0xfffff800011b1000,local_140,
                            0x110);
      if (cVar1 == '\0') {
LAB_10075387f:
        FUN_1008e3970("","dbgdump",0,"Failed to read KPCR");
        return 0;
      }
    }
    uVar2 = CONCAT44(uStack_11c,local_120);
    uVar3 = 0x8664;
  }
  else {
    if (*(short *)(param_2 + 0x220) != 0x20) {
      FUN_1008e3970("","dbgdump",0,"unknown bitness: %d");
      return 0;
    }
    cVar1 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x6a0),
                          local_140,0x38);
    if (cVar1 == '\0') {
      FUN_1008e3970("","dbgdump",0,"Failed to read KPCR 0x%llx. Trying to use default...",
                    *(undefined8 *)(param_2 + 0x6a0));
      cVar1 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),0xffdff000,local_140,0x38);
      if (cVar1 == '\0') goto LAB_10075387f;
    }
    uVar2 = (ulong)local_120;
    local_38 = (ulong)local_10c;
    uVar3 = 0x14c;
  }
  *param_5 = uVar2;
  if (local_38 == 0) {
    cVar1 = FUN_1007530a0(param_1,uVar3,param_3);
    if (cVar1 == '\0') {
      FUN_1008e3970("","dbgdump",0,"Seaching for KPCR.KdVersionBlock...failed.");
      *param_4 = 0xf;
      param_4[1] = 0x893;
      param_4[4] = 0x14c;
    }
  }
  else {
    cVar1 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_38,param_4,0x28);
    if ((cVar1 == '\0') && (cVar1 = FUN_1007530a0(param_1,uVar3,param_3,param_4), cVar1 == '\0')) {
      FUN_1008e3970("","dbgdump",0,"Seaching for KPCR.KdVersionBlock...failed.");
      *param_4 = 0xf;
      param_4[1] = 0x893;
      param_4[4] = 0x14c;
    }
  }
  return 1;
}

