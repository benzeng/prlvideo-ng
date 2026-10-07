
undefined4 FUN_1003022b0(long param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0x8ca8) {
    puVar1 = (undefined4 *)(param_1 + 0x15a8);
    puVar2 = (undefined4 *)(param_1 + 0x15a0);
  }
  else {
    if ((param_2 != 0x8ca9) && (param_2 != 0x8d40)) {
      return 0;
    }
    puVar1 = (undefined4 *)(param_1 + 0x15ac);
    puVar2 = (undefined4 *)(param_1 + 0x15a4);
  }
  if (param_3 != '\0') {
    puVar2 = puVar1;
  }
  return *puVar2;
}

