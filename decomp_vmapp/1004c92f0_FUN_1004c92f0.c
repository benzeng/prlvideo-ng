
undefined8 FUN_1004c92f0(undefined8 param_1,long param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  
  if ((*(short *)(param_2 + 0x14) == 0x10) && (*(short *)(param_2 + 0x16) == 0)) {
    puVar1 = (uint *)FUN_1002a6010(param_2);
    if (*puVar1 < 4) {
      uVar2 = FUN_1004ceea0(param_1,puVar1 + 1);
      return uVar2;
    }
  }
  return 0xf0000003;
}

