
undefined8 FUN_100cb0ef0(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar2 = FUN_100bf6fe0(param_2);
  if ((param_1 != 0) && (lVar2 != 0)) {
    iVar1 = FUN_100c60800(param_1);
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        puVar3 = (undefined8 *)FUN_100c60820(param_1,iVar5);
        iVar1 = FUN_100bf8810(*puVar3,lVar2);
        if (iVar1 == 0) {
          if (*(int *)(puVar3 + 1) != 0) {
            return 0;
          }
          iVar1 = FUN_100c60800(puVar3[2]);
          if (iVar1 != 0) {
            uVar4 = FUN_100c60820(puVar3[2],0);
            return uVar4;
          }
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar1 = FUN_100c60800(param_1);
      } while (iVar5 < iVar1);
    }
  }
  return 0;
}

