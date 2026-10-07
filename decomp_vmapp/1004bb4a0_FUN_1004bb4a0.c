
void FUN_1004bb4a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x40);
  uVar1 = 0;
  do {
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"CGImage for display [%d] is released",
                      uVar1 & 0xffffffff);
        lVar2 = *plVar3;
      }
      _CGImageRelease(lVar2);
    }
    uVar1 = uVar1 + 1;
    plVar3 = plVar3 + 4;
  } while (uVar1 != 0x10);
  *(undefined1 *)(param_1 + 0x24a) = 1;
  ___bzero(param_1 + 0x28,0x200);
  return;
}

