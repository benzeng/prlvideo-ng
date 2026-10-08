
void FUN_10093aa16(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((((*(uint *)(param_1 + 0x48) >> 1 ^ 1) & 1) == 0) && (*(long *)(param_1 + 0x38) != 0)) {
    lVar1 = FUN_10093a8f9(param_1,*(undefined8 *)(param_1 + 0x38));
    if (lVar1 != 0) {
      FUN_10091dd92(param_2,0xc01,0,0,*(undefined8 *)(lVar1 + 0x40),
                    "Circular reference to the attribute group \'%s\' defined",
                    *(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar1 + 0x60) = 0;
    }
  }
  return;
}

