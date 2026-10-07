
undefined8 FUN_100363420(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_2 + 0x24);
  uVar2 = 0;
  while( true ) {
    uVar1 = CONCAT71((uint7)(uint3)((puVar3[-4] & 0xfffffffc) >> 8),1);
    if ((puVar3[-4] & 0xfffffffc) == 0x10) {
      return 1;
    }
    if ((puVar3[-3] & 0xfffffffc) == 0x10) {
      return uVar1;
    }
    if ((puVar3[-1] & 0xfffffffc) == 0x10) {
      return uVar1;
    }
    if ((*puVar3 & 0xfffffffc) == 0x10) break;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 10;
    if (7 < uVar2) {
      return 0;
    }
  }
  return uVar1;
}

