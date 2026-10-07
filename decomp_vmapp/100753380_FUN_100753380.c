
undefined8 FUN_100753380(ushort *param_1,uint param_2)

{
  uint *puVar1;
  ulong uVar2;
  
  if (3 < param_2) {
    puVar1 = &DAT_1011a1324;
    uVar2 = 0;
    do {
      if (((uint)*param_1 == puVar1[-1]) && ((uint)param_1[1] == *puVar1)) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 9;
    } while (uVar2 < 0x33);
  }
  return 0;
}

