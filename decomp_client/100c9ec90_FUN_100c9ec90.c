
undefined8
FUN_100c9ec90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  iVar1 = FUN_100c60800(param_3);
  if (0 < iVar1) {
    if (param_2 != 0) {
      FUN_100c5c0c0(param_1,"%*s%s:\n",param_5,"",param_2);
      param_5 = param_5 + 4;
    }
    iVar1 = FUN_100c60800(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      if (param_5 == 0) {
        do {
          lVar3 = FUN_100c60820(param_3,iVar1);
          uVar4 = FUN_100c97ae0(lVar3);
          FUN_100c74930(param_1,uVar4);
          iVar2 = FUN_100c97b10(lVar3);
          pcVar5 = "";
          if (iVar2 != 0) {
            pcVar5 = "critical";
          }
          iVar2 = FUN_100c5c0c0(param_1,": %s\n",pcVar5);
          if (iVar2 < 1) {
            return 0;
          }
          iVar2 = FUN_100c9e9a0(param_1,lVar3,param_4,4);
          if (iVar2 == 0) {
            FUN_100c5c0c0(param_1,"%*s",4,"");
            FUN_100c7efd0(param_1,*(undefined8 *)(lVar3 + 0x10));
          }
          iVar2 = FUN_100c58980(param_1,"\n",1);
          if (iVar2 < 1) {
            return 0;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100c60800(param_3);
        } while (iVar1 < iVar2);
      }
      else {
        do {
          lVar3 = FUN_100c60820(param_3,iVar1);
          iVar2 = FUN_100c5c0c0(param_1,"%*s",param_5,"");
          if (iVar2 < 1) {
            return 0;
          }
          uVar4 = FUN_100c97ae0(lVar3);
          FUN_100c74930(param_1,uVar4);
          iVar2 = FUN_100c97b10(lVar3);
          pcVar5 = "";
          if (iVar2 != 0) {
            pcVar5 = "critical";
          }
          iVar2 = FUN_100c5c0c0(param_1,": %s\n",pcVar5);
          if (iVar2 < 1) {
            return 0;
          }
          iVar2 = FUN_100c9e9a0(param_1,lVar3,param_4,param_5 + 4);
          if (iVar2 == 0) {
            FUN_100c5c0c0(param_1,"%*s",param_5 + 4,"");
            FUN_100c7efd0(param_1,*(undefined8 *)(lVar3 + 0x10));
          }
          iVar2 = FUN_100c58980(param_1,"\n",1);
          if (iVar2 < 1) {
            return 0;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100c60800(param_3);
        } while (iVar1 < iVar2);
      }
    }
  }
  return 1;
}

