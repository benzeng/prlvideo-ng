
undefined4 FUN_100d69580(long param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100df99c0("","WinRegistry",0,"OA00004.06:");
  }
  else {
    puVar2 = (uint *)*puVar1;
    if ((1 < *puVar2) || (*(long *)(puVar2 + 4) != 0x18)) {
      QByteArray::reallocData(puVar1,puVar2[1] + 1,puVar2[2] >> 0x1f);
      puVar2 = (uint *)*puVar1;
    }
    if (*(int *)((long)puVar2 + *(long *)(puVar2 + 4)) == 0x66676572) {
      return *(undefined4 *)(*(long *)(puVar2 + 4) + 0x18 + (long)puVar2);
    }
    FUN_100df99c0("","WinRegistry",0,"OA00004.07:\t%x");
  }
  return 0xffffffff;
}

