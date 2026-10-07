
undefined8 FUN_10027e3b0(long param_1,long param_2)

{
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,
                  "[CNetVirtIo::ResumeState] rx(pfn:%08x idx:%d) tx(pfn:%08x idx:%d)",
                  *(undefined4 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x3c),
                  *(undefined4 *)(param_2 + 0x38),*(undefined2 *)(param_2 + 0x3e));
  }
  FUN_10027d110(param_1 + 0x4870,(ulong)*(uint *)(param_2 + 0x34) << 0xc,0x100,
                *(undefined2 *)(param_2 + 0x3c),*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x30));
  FUN_10027d110(param_1 + 0x18,(ulong)*(uint *)(param_2 + 0x38) << 0xc,0x100,
                *(undefined2 *)(param_2 + 0x3e),*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x30));
  return 0;
}

