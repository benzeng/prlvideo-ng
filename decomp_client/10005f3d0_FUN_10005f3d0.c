
void FUN_10005f3d0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! vmUuid.isEmpty()","Application/CAppContextLogic.mm",0x111,
                  "onCoherenceWindowActivated");
  }
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_2);
  if (lVar2 != 0) {
    FUN_10005f5d0(param_1,lVar2);
    return;
  }
  FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,
                "(!)Error: can\'t get VM on coherence window activation.");
  return;
}

