
undefined8 FUN_1004ce360(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  uVar1 = 0xf0000003;
  if ((*(short *)(param_2 + 0x14) == 4) && (*(short *)(param_2 + 0x16) == 0)) {
    puVar2 = (undefined2 *)FUN_1002a6010(param_2);
    uVar1 = 0xf000001c;
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 6;
      puVar2[1] = (ushort)(DAT_10111cc70 != 0);
      uVar1 = 0;
    }
  }
  return uVar1;
}

