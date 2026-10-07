
int FUN_1005f68c0(long param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1005fb0b0();
  if (iVar2 < 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","PRL_SUCCEEDED(err)",
                  "OfflineOperations.cpp",0xaa,"Finalize");
  }
  cVar1 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0x20))();
  if (cVar1 != '\0') {
    FUN_1007ea1f0(*(long *)(param_1 + 0x58) + 0x1168);
    iVar2 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0x18))();
    if (iVar2 < 0) {
      FUN_1008e3970("","vdisk",0,"Error at descriptor save 0x%x",iVar2);
      return iVar2;
    }
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x360))();
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 800))();
  return 0;
}

