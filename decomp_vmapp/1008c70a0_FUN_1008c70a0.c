
undefined8
FUN_1008c70a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar2 = FUN_10089b410(*param_2);
  iVar5 = 0;
  FUN_100880ec0(param_3,"%*sVersion: %ld (0x%lX)",param_4,"",lVar2 + 1);
  iVar1 = FUN_100885600(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)FUN_100885620(param_2[1],iVar5);
      uVar4 = FUN_1008c3c50(0,*puVar3);
      FUN_100880ec0(param_3,"\n%*sZone: %s, User: ",param_4,"",uVar4);
      FUN_10081e1a0(uVar4);
      FUN_1008a3a50(param_3,puVar3[1]);
      iVar5 = iVar5 + 1;
      iVar1 = FUN_100885600(param_2[1]);
    } while (iVar5 < iVar1);
  }
  return 1;
}

