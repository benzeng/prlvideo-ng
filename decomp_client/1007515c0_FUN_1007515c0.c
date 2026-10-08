
void FUN_1007515c0(long param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar4 + 8);
  if (iVar1 != *(int *)(lVar4 + 0xc)) {
    plVar3 = (long *)(lVar4 + 0x10 + (long)iVar1 * 8);
    lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_1007545f0(param_1 + 0x10);
  cVar2 = CSpotlightWrapper::isRunning();
  if (cVar2 != '\0') {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: vm search thread is already running");
    return;
  }
  CSpotlightWrapper::startSearch();
  return;
}

