
int FUN_100c4f6b0(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_48 [24];
  
  piVar1 = *(int **)(param_1 + 0x28);
  puVar4 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar4 = local_48;
    FUN_100c72bf0(puVar4,param_1);
  }
  lVar3 = FUN_100c4d390();
  iVar5 = 0;
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar2 = FUN_100c4c5c0(lVar3,(long)*piVar1,(long)piVar1[1],*(undefined8 *)(piVar1 + 2),0,0,0,0,0,
                          puVar4);
    if (iVar2 == 0) {
      FUN_100c4d5f0(lVar3);
    }
    else {
      FUN_100c6d510(param_2,0x74,lVar3);
      iVar5 = iVar2;
    }
  }
  return iVar5;
}

