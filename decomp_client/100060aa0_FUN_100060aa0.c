
void FUN_100060aa0(long param_1)

{
  char cVar1;
  long lVar2;
  
  FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"Current context is about to be removed");
  lVar2 = QObject::sender();
  if (lVar2 == 0) {
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != sender()","Application/CAppContextLogic.mm",0x152,
                  "onBeforeCurrentContextRemoved");
  }
  lVar2 = QObject::sender();
  do {
    lVar2 = *(long *)(*(long *)(lVar2 + 8) + 0x10);
    if (lVar2 == 0) break;
    cVar1 = FUN_10005f5d0(param_1,lVar2);
  } while (cVar1 == '\0');
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! m_pCurrentContext.isNull()","Application/CAppContextLogic.mm",0x161,
                  "onBeforeCurrentContextRemoved");
  }
  return;
}

