
undefined8 FUN_1003a6aa0(long param_1,ushort param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x2a) {
    if ((param_2 != 0x1d) && (param_2 != 0x27)) {
      return 0;
    }
  }
  else {
    if (param_2 == 0x2a) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      pcVar1 = "}\nelse\n{\n";
      goto LAB_1003a6ada;
    }
    if (param_2 != 0x2b) {
      return 0;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  pcVar1 = "}\n";
LAB_1003a6ada:
  FUN_10038e8e0(uVar2,pcVar1);
  return 0;
}

