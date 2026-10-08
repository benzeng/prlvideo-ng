
undefined8 * FUN_100cbdbc0(char *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && (iVar1 = FUN_100c60800(param_2), 0 < iVar1)) {
    iVar1 = 0;
    if (param_1 == (char *)0x0) {
      do {
        puVar3 = (undefined8 *)FUN_100c60820(param_2,iVar1);
        if (puVar3 != (undefined8 *)0x0) {
          return puVar3;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(param_2);
      } while (iVar1 < iVar2);
    }
    else {
      do {
        puVar3 = (undefined8 *)FUN_100c60820(param_2,iVar1);
        if ((puVar3 != (undefined8 *)0x0) && (iVar2 = _strcmp((char *)*puVar3,param_1), iVar2 == 0))
        {
          return puVar3;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(param_2);
      } while (iVar1 < iVar2);
    }
  }
  puVar3 = (undefined8 *)FUN_100cbd3f0(param_1);
  return puVar3;
}

