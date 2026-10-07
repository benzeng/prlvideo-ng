
undefined8 FUN_1002d27d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x14c8) != 0) && (uVar2 = 2, *(int *)(param_1 + 0x3c) != 0)) {
    lVar1 = *(long *)(param_1 + 0x40);
    uVar2 = 1;
    if ((((*(byte *)(lVar1 + 0x482) & 2) == 0) &&
        ((((*(byte *)(lVar1 + 0x492) & 2) == 0 && ((*(byte *)(lVar1 + 0x4a2) & 2) == 0)) &&
         ((*(byte *)(lVar1 + 0x4b2) & 2) == 0)))) &&
       (((((*(byte *)(lVar1 + 0x4c2) & 2) == 0 && ((*(byte *)(lVar1 + 0x4d2) & 2) == 0)) &&
         ((*(byte *)(lVar1 + 0x4e2) & 2) == 0)) &&
        ((((*(byte *)(lVar1 + 0x4f2) & 2) == 0 && ((*(byte *)(lVar1 + 0x502) & 2) == 0)) &&
         ((((*(byte *)(lVar1 + 0x512) & 2) == 0 &&
           ((((*(byte *)(lVar1 + 0x522) & 2) == 0 && ((*(byte *)(lVar1 + 0x532) & 2) == 0)) &&
            ((*(byte *)(lVar1 + 0x542) & 2) == 0)))) && ((*(byte *)(lVar1 + 0x552) & 2) == 0))))))))
    {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      uVar2 = 2;
    }
  }
  return uVar2;
}

