
undefined8 FUN_1005207c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0xf0000009;
  if (7 < *(ushort *)(param_2 + 0x14)) {
    puVar2 = (undefined8 *)FUN_1002a6010(param_2);
    *puVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = 0;
  }
  return uVar1;
}

