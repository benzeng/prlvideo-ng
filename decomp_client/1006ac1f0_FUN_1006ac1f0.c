
bool FUN_1006ac1f0(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != m_pServer",
                  "ActionManager/ActionUpdater/CServerActionStateProvider.cpp",0x48,"isValid");
  }
  cVar1 = FUN_10069dcb0(param_1);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(param_1 + 0x18) != 0;
  }
  return bVar2;
}

