
undefined8 FUN_1002c9850(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = 0;
  if ((((*(byte *)(lVar1 + 0x202c) & 2) != 0) && (uVar2 = 2, *(int *)(param_1 + 0x3c) != 0)) &&
     (uVar2 = 1, ((*(ushort *)(lVar1 + 0x2012) | *(ushort *)(lVar1 + 0x2010)) & 10) == 0)) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    uVar2 = 2;
  }
  return uVar2;
}

