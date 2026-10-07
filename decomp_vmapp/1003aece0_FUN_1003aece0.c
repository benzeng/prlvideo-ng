
undefined8 FUN_1003aece0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  lVar1 = *(long *)(param_1 + 8);
  local_10 = *(undefined8 *)(lVar1 + 0xa0);
  local_18 = 4;
  puVar2 = *(undefined8 **)(lVar1 + 0xc0);
  if (puVar2 == *(undefined8 **)(lVar1 + 200)) {
    FUN_1003c5980(lVar1 + 0xb8,&local_18);
  }
  else {
    puVar2[1] = local_10;
    *puVar2 = CONCAT44(uStack_14,4);
    *(long *)(lVar1 + 0xc0) = *(long *)(lVar1 + 0xc0) + 0x10;
  }
  return 0;
}

