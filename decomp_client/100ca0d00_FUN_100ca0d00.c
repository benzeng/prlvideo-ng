
long FUN_100ca0d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_100c60010();
  if (lVar3 == 0) {
    FUN_100c62ee0(0x22,0x9a,0x41,"v3_alt.c",0x13c);
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100c60800(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = FUN_100c60820(param_3,iVar1);
        iVar2 = FUN_100c9fe80(*(undefined8 *)(lVar4 + 8),"email");
        if (((iVar2 == 0) && (*(char **)(lVar4 + 0x10) != (char *)0x0)) &&
           (iVar2 = _strcmp(*(char **)(lVar4 + 0x10),"copy"), iVar2 == 0)) {
          uVar5 = 0;
LAB_100ca0df1:
          iVar2 = FUN_100ca1b50(param_2,lVar3,uVar5);
          if (iVar2 == 0) {
LAB_100ca0e00:
            FUN_100c60790(lVar3,FUN_100ca0960);
            return 0;
          }
        }
        else {
          iVar2 = FUN_100c9fe80(*(undefined8 *)(lVar4 + 8),"email");
          if (((iVar2 == 0) && (*(char **)(lVar4 + 0x10) != (char *)0x0)) &&
             (iVar2 = _strcmp(*(char **)(lVar4 + 0x10),"move"), iVar2 == 0)) {
            uVar5 = 1;
            goto LAB_100ca0df1;
          }
          lVar4 = FUN_100ca1630(0,param_1,param_2,lVar4,0);
          if (lVar4 == 0) goto LAB_100ca0e00;
          FUN_100c604e0(lVar3,lVar4);
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

