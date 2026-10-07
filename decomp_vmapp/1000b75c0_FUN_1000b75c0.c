
undefined8 FUN_1000b75c0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPendingCmd",
                  "VirtualPCStates.cpp",0x4c9,"stateVmPausing");
  }
  lVar2 = *(long *)(param_1 + 0x48);
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 < 0x4e38) {
    if (iVar1 != 0x4e21) {
      if (iVar1 != 0x4e22) {
        return 0;
      }
      goto LAB_1000b7759;
    }
  }
  else {
    if (0x4e49 < iVar1) {
      if (iVar1 != 0x4e4a) {
        return 0;
      }
      FUN_100097120(param_1);
      FUN_10008f640(param_1,2,1);
      FUN_10008ec80(param_1,4);
      FUN_10008fa70(param_1,0x4e4a);
      goto LAB_1000b7759;
    }
    if (0x4e3a < iVar1) {
      if (iVar1 == 0x4e3b) {
        FUN_10008f4d0(param_1);
      }
      else {
        if (iVar1 != 0x4e48) {
          return 0;
        }
        if ((*(int *)(lVar2 + 0x28) != 0) && (iVar1 = **(int **)(lVar2 + 0x30), iVar1 < 0)) {
          FUN_1008e3970("","vm",0,"Unable to pause VM via tools.");
          FUN_10008ec80(param_1,0xe);
          FUN_1000a78a0(param_1,0);
          FUN_1000a7ae0(param_1,0,0);
          FUN_10008f760(param_1,iVar1);
        }
      }
      goto LAB_1000b7759;
    }
    if (iVar1 == 0x4e38) goto LAB_1000b7759;
    if (iVar1 != 0x4e39) {
      return 0;
    }
  }
  FUN_10008ec80(param_1,0xe);
  FUN_1000a78a0(param_1,0);
  FUN_1000a7ae0(param_1,0,0);
  FUN_10008f760(param_1,0);
LAB_1000b7759:
  FUN_10008f910(param_1,0);
  return 1;
}

