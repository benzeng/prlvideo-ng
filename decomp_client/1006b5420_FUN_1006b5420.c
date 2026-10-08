
void FUN_1006b5420(long param_1,long *param_2)

{
  long lVar1;
  
  if (((*param_2 == 0) || (*(int *)(*param_2 + 4) == 0)) || (param_2[1] == 0)) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! currContext.isNull()","MenuManager/CMenuManager.cpp",0xeb,"onContextChanged");
  }
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = 0;
    if ((*param_2 != 0) && (lVar1 = 0, *(int *)(*param_2 + 4) != 0)) {
      lVar1 = param_2[1];
    }
    FUN_1006b4810(param_1,*(long *)(param_1 + 0x20),lVar1);
    lVar1 = 0;
    if ((*param_2 != 0) && (lVar1 = 0, *(int *)(*param_2 + 4) != 0)) {
      lVar1 = param_2[1];
    }
    FUN_100070780(param_1,lVar1);
    return;
  }
  return;
}

