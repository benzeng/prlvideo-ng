
undefined8 FUN_1005ec9d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1005c11e0(*param_1);
  lVar2 = FUN_1005af5a0(uVar1);
  uVar1 = 0;
  if ((*(long *)(lVar2 + 0x40) != 0) && (uVar1 = 0, *(int *)(*(long *)(lVar2 + 0x40) + 4) != 0)) {
    uVar1 = *(undefined8 *)(lVar2 + 0x48);
  }
  return uVar1;
}

