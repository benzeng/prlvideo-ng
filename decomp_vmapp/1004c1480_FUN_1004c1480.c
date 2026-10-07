
undefined8 FUN_1004c1480(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0xf0000003;
  if (3 < *(ushort *)(param_2 + 0x14)) {
    FUN_1002a6010(param_2);
    puVar2 = (undefined4 *)FUN_1002a6010(param_2);
    *puVar2 = 0;
    uVar1 = 0;
  }
  return uVar1;
}

