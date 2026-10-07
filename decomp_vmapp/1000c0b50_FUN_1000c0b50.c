
undefined8 FUN_1000c0b50(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x108) + 0xb8))
                    (*(long **)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  if (iVar1 < 0) {
    FUN_1008e3970("","vm",0,"Failed to destroy VCPU %u (%#x)",*(undefined4 *)(param_1 + 0x110));
  }
  FUN_1002577c0();
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_10008eef0(param_1);
  FUN_10008f9b0(param_1);
  FUN_10008f940(param_1);
  return 0;
}

