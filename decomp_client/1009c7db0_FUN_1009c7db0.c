
undefined1 FUN_1009c7db0(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((((*(long *)(param_1 + 0x10) != 0) &&
       (puVar1 = *(undefined1 **)(param_1 + 8), puVar1 != (undefined1 *)0x0)) &&
      (*(int *)(param_1 + 0x20) != -1)) &&
     (uVar2 = 0, (int)*(long *)(param_1 + 0x10) - (int)puVar1 == 1)) {
    uVar2 = *puVar1;
  }
  return uVar2;
}

