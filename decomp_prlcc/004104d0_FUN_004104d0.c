
undefined1 * FUN_004104d0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  puVar1 = &DAT_0041913e;
  if (param_1 != 0) {
    do {
      lVar2 = param_1;
      param_1 = *(long *)(lVar2 + 0x40);
    } while (param_1 != 0);
    puVar1 = (undefined1 *)(lVar2 + 0x9a);
  }
  return puVar1;
}

