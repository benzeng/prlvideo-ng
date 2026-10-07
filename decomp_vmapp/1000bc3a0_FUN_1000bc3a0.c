
undefined8 FUN_1000bc3a0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPendingCmd",
                  "VirtualPCStates.cpp",0x651,"stateVmStopAndRestore");
    lVar3 = *(long *)(param_1 + 0x50);
  }
  cVar1 = FUN_10006b7e0(*(undefined8 *)(param_1 + 0xf8),lVar3 + 0x18);
  if (cVar1 != '\0') {
    iVar2 = FUN_1000cca30(*(undefined8 *)(param_1 + 0x109c8),0x80000044);
    if ((-1 < iVar2) && (*(char *)(*(long *)(param_1 + 0x109c8) + 0x1f8) == '\0')) {
      uVar4 = 1;
      goto LAB_1000bc443;
    }
  }
  FUN_10008f760(param_1);
  uVar4 = 0xc;
LAB_1000bc443:
  FUN_10008ec80(param_1,uVar4);
  return 0;
}

