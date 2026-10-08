
void FUN_100690f20(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) || (param_2[1] == 0)) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! context.isNull()","ActionManager/CActionManager.cpp",0x5a,"onAfterContextAdded"
                 );
    lVar1 = *param_2;
    if (lVar1 == 0) {
      return;
    }
  }
  if ((*(int *)(lVar1 + 4) != 0) && (param_2[1] != 0)) {
    FUN_100692020(*(undefined8 *)(param_1 + 0x18));
    lVar1 = 0;
    if ((*param_2 != 0) && (lVar1 = 0, *(int *)(*param_2 + 4) != 0)) {
      lVar1 = param_2[1];
    }
    FUN_1006a6660(*(undefined8 *)(param_1 + 0x20),lVar1);
    return;
  }
  return;
}

