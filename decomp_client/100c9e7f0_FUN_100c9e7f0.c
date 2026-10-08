
void FUN_100c9e7f0(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0) {
    if ((param_4 == 0) || (iVar1 = FUN_100c60800(param_2), iVar1 == 0)) {
      FUN_100c5c0c0(param_1,"%*s",param_3,"");
      iVar1 = FUN_100c60800(param_2);
      if (iVar1 == 0) {
        FUN_100c58a70(param_1,"<EMPTY>\n");
      }
    }
    iVar1 = FUN_100c60800(param_2);
    if (0 < iVar1) {
      iVar1 = 0;
      if (param_4 == 0) {
        do {
          if (0 < iVar1) {
            FUN_100c5c0c0(param_1,", ");
          }
          lVar4 = FUN_100c60820(param_2,iVar1);
          if (*(long *)(lVar4 + 8) == 0) {
            FUN_100c58a70(param_1,*(long *)(lVar4 + 0x10));
          }
          else if (*(long *)(lVar4 + 0x10) == 0) {
            FUN_100c58a70(param_1,*(long *)(lVar4 + 8));
          }
          else {
            FUN_100c5c0c0(param_1,"%s:%s");
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100c60800(param_2);
        } while (iVar1 < iVar2);
      }
      else {
        do {
          FUN_100c5c0c0(param_1,"%*s",param_3,"");
          lVar3 = FUN_100c60820(param_2,iVar1);
          lVar4 = *(long *)(lVar3 + 0x10);
          if ((*(long *)(lVar3 + 8) == 0) ||
             (lVar4 = *(long *)(lVar3 + 8), *(long *)(lVar3 + 0x10) == 0)) {
            FUN_100c58a70(param_1,lVar4);
          }
          else {
            FUN_100c5c0c0(param_1,"%s:%s");
          }
          FUN_100c58a70(param_1,"\n");
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100c60800(param_2);
        } while (iVar1 < iVar2);
      }
    }
  }
  return;
}

