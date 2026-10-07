
undefined8 FUN_1002d8ee0(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,
                  "[%s] ControlClassVendorRequest, uPhase %u, bmRequestType %02X, bReq %02X, wValue %04X, wIndex %04X, wLength %u, uSize %u"
                  ,param_1 + 0xcf,param_3,*(undefined1 *)(param_1 + 0xf7),
                  *(undefined1 *)(param_1 + 0xf8),*(undefined2 *)(param_1 + 0xf9),
                  *(undefined2 *)(param_1 + 0xfb),*(undefined2 *)(param_1 + 0xfd),
                  *(undefined4 *)(param_2 + 0x43c));
  }
  if (param_3 == 2) {
    if (*(short *)(param_1 + 0xfd) == 0) {
LAB_1002d8f92:
      uVar1 = FUN_1002d90c0(param_1,param_2,1);
      return uVar1;
    }
  }
  else if (param_3 == 1) {
    if (*(short *)(param_1 + 0xfd) != 0) goto LAB_1002d8f92;
    *(undefined4 *)(param_2 + 0x454) = *(undefined4 *)(param_2 + 0x43c);
  }
  return 1;
}

