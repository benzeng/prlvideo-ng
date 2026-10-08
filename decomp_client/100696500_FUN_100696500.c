
undefined8 FUN_100696500(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != m_pAction","ActionManager/ActionHandler/CActionHandler.cpp",0x59,"isValid");
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return CONCAT71((int7)((ulong)lVar1 >> 8),lVar1 != 0);
}

