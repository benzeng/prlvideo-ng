
long FUN_1008c5780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_100884e10();
  if (lVar3 == 0) {
    FUN_100887ce0(0x22,0x9a,0x41,"v3_alt.c",0x13c);
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100885600(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = FUN_100885620(param_3,iVar1);
        iVar2 = FUN_1008c4900(*(undefined8 *)(lVar4 + 8),"email");
        if (((iVar2 == 0) && (*(char **)(lVar4 + 0x10) != (char *)0x0)) &&
           (iVar2 = _strcmp(*(char **)(lVar4 + 0x10),"copy"), iVar2 == 0)) {
          uVar5 = 0;
LAB_1008c5871:
          iVar2 = FUN_1008c65d0(param_2,lVar3,uVar5);
          if (iVar2 == 0) {
LAB_1008c5880:
            FUN_100885590(lVar3,FUN_1008c53e0);
            return 0;
          }
        }
        else {
          iVar2 = FUN_1008c4900(*(undefined8 *)(lVar4 + 8),"email");
          if (((iVar2 == 0) && (*(char **)(lVar4 + 0x10) != (char *)0x0)) &&
             (iVar2 = _strcmp(*(char **)(lVar4 + 0x10),"move"), iVar2 == 0)) {
            uVar5 = 1;
            goto LAB_1008c5871;
          }
          lVar4 = FUN_1008c60b0(0,param_1,param_2,lVar4,0);
          if (lVar4 == 0) goto LAB_1008c5880;
          FUN_1008852e0(lVar3,lVar4);
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100885600(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

