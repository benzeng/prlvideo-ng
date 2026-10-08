
bool FUN_100c7eed0(undefined8 param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  
  iVar5 = *param_2;
  lVar2 = *(long *)(param_2 + 2);
  lVar7 = 0;
  do {
    if (iVar5 <= lVar7) {
      iVar5 = FUN_100c58980(param_1,"\n",1);
      return iVar5 == 1;
    }
    iVar4 = (int)lVar7;
    if (iVar4 == (iVar4 / 0x12) * 0x12) {
      iVar3 = FUN_100c58980(param_1,"\n",1);
      if (iVar3 < 1) {
        return false;
      }
      iVar3 = FUN_100c58c20(param_1,param_3,param_3);
      if (iVar3 < 1) {
        return false;
      }
    }
    puVar1 = (undefined1 *)(lVar2 + lVar7);
    lVar7 = lVar7 + 1;
    pcVar6 = ":";
    if (iVar5 + -1 == iVar4) {
      pcVar6 = "";
    }
    iVar4 = FUN_100c5c0c0(param_1,"%02x%s",*puVar1,pcVar6);
    if (iVar4 < 1) {
      return false;
    }
  } while( true );
}

