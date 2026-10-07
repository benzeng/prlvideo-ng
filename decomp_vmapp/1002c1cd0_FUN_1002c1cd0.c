
void FUN_1002c1cd0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  piVar3 = &DAT_1011c4aa0;
  uVar2 = 0;
  do {
    if (*piVar3 != 0) {
      iVar1 = FUN_1002b8700(param_1,uVar2 & 0xffffffff);
      if ((iVar1 == 0) && (0 < DAT_1011c568c)) {
        FUN_1008e3970("","USB",0,"Cannot disconnect USB device");
      }
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 0xc;
  } while (uVar2 != 0x3d);
  return;
}

