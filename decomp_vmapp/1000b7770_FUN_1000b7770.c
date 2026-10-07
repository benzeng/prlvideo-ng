
undefined8 FUN_1000b7770(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 2) {
    if ((*(long *)(param_1 + 0x50) == 0) || (*(int *)(*(long *)(param_1 + 0x50) + 0x14) != 0x4e30))
    {
      FUN_1008e3970("","vm",0,"Unable to pause VM. Timed out.");
      if (*(long *)(param_1 + 0x50) == 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPendingCmd",
                      "VirtualPCStates.cpp",0x537,"stateVmTimerPausing");
      }
      FUN_10008ec80(param_1,0xe);
      FUN_1000a78a0(param_1,0);
      FUN_1000a7ae0(param_1,0,0);
      FUN_10008f760(param_1,0x80000051);
    }
    else {
      FUN_1008e3970("","vm",0,"Couldn\'t pause vm on dbgdump. Generate dbgdump anyway.");
      uVar2 = *(undefined8 *)(param_1 + 0x107d8);
      uVar1 = FUN_1000a7060(param_1);
      FUN_1000f8920(uVar2,uVar1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

