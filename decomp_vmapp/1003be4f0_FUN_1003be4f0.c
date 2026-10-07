
undefined8 FUN_1003be4f0(long param_1,long param_2)

{
  ushort uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar1 = *(ushort *)(param_2 + 0x4c);
  if (uVar1 < 0x16) {
    if (uVar1 == 2) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      pcVar2 = "break;\n";
    }
    else {
      if (uVar1 != 7) {
        return 0;
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
      pcVar2 = "continue;\n";
    }
  }
  else if (uVar1 == 0x16) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar2 = "}\n";
  }
  else {
    if (uVar1 != 0x30) {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar2 = "while (true) {\n";
  }
  FUN_10038e8e0(uVar3,pcVar2);
  return 0;
}

