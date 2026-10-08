
undefined8 FUN_100a48ce0(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(uint *)(param_2 + 4) < 0xc) {
    uVar2 = 0;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
    *puVar1 = *param_3;
    uVar2 = CONCAT71((int7)((ulong)puVar1 >> 8),1);
  }
  return uVar2;
}

