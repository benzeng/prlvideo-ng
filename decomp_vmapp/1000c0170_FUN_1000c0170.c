
void FUN_1000c0170(long param_1)

{
  if ((*(byte *)(param_1 + 0x1ab1) & 1) != 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "(m_uVMInitMask & VM_INIT_MON_LOAD) == 0","VirtualPCBios.cpp",0x15e,
                  "VMSetupMemoryMap");
  }
  FUN_100088a10(param_1 + 0x140);
  if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 10) != 0) {
    return;
  }
  FUN_1000dc9d0();
  return;
}

