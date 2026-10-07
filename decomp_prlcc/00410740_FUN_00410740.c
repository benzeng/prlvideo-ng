
undefined8 * FUN_00410740(long param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != 0) {
    do {
      lVar4 = param_1;
      param_1 = *(long *)(lVar4 + 0x40);
    } while (param_1 != 0);
    puVar3 = *(undefined8 **)(lVar4 + 0x90);
    for (puVar1 = (undefined8 *)*puVar3; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1
        ) {
      iVar2 = strcmp(param_2,(char *)*puVar1);
      if (iVar2 == 0) {
        return puVar1 + 1;
      }
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return (undefined8 *)PTR_EZXML_NIL_0061bd80;
}

