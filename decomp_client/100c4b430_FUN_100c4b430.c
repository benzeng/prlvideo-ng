
int FUN_100c4b430(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 local_48 [24];
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if (*(long *)(puVar1 + 2) == 0) {
    lVar3 = FUN_100c26720();
    *(long *)(puVar1 + 2) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = FUN_100c26db0(lVar3,0x10001);
    if (iVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_100c47360();
  iVar2 = 0;
  if (lVar3 != 0) {
    puVar4 = (undefined1 *)0x0;
    if (*(long *)(param_1 + 0x38) != 0) {
      puVar4 = local_48;
      FUN_100c72bf0(puVar4,param_1);
    }
    iVar2 = FUN_100c46db0(lVar3,*puVar1,*(undefined8 *)(puVar1 + 2),puVar4);
    if (iVar2 < 1) {
      FUN_100c47630(lVar3);
    }
    else {
      FUN_100c6d510(param_2,6,lVar3);
    }
  }
  return iVar2;
}

