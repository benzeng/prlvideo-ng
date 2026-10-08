
undefined8 * FUN_100cbdc70(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = FUN_100c60800(*param_1), 0 < iVar1)) {
    do {
      puVar2 = (undefined8 *)FUN_100c60820(*param_1,iVar3);
      iVar1 = _strcmp((char *)*puVar2,param_2);
      if (iVar1 == 0) {
        return puVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_100c60800(*param_1);
    } while (iVar3 < iVar1);
  }
  return (undefined8 *)0x0;
}

