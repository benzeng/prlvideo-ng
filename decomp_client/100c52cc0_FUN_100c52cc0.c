
int FUN_100c52cc0(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_48 [24];
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  iVar5 = 0;
  puVar4 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar4 = local_48;
    FUN_100c72bf0(puVar4,param_1);
  }
  lVar3 = FUN_100c51af0();
  if (lVar3 != 0) {
    iVar2 = FUN_100c51390(lVar3,*puVar1,puVar1[1],puVar4);
    if (iVar2 == 0) {
      FUN_100c51d00(lVar3);
    }
    else {
      FUN_100c6d510(param_2,0x1c,lVar3);
      iVar5 = iVar2;
    }
  }
  return iVar5;
}

