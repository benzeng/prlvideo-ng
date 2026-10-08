
undefined8
FUN_100ca2620(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar2 = FUN_100c76990(*param_2);
  iVar5 = 0;
  FUN_100c5c0c0(param_3,"%*sVersion: %ld (0x%lX)",param_4,"",lVar2 + 1);
  iVar1 = FUN_100c60800(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)FUN_100c60820(param_2[1],iVar5);
      uVar4 = FUN_100c9f1d0(0,*puVar3);
      FUN_100c5c0c0(param_3,"\n%*sZone: %s, User: ",param_4,"",uVar4);
      FUN_100bf3910(uVar4);
      FUN_100c7efd0(param_3,puVar3[1]);
      iVar5 = iVar5 + 1;
      iVar1 = FUN_100c60800(param_2[1]);
    } while (iVar5 < iVar1);
  }
  return 1;
}

