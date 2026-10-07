
undefined1 FUN_1002a6870(ulong param_1)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 & 7) == 0) {
    uVar3 = param_1 & 0xfff;
    if (0x1000 - uVar3 < 0x18) {
      uVar2 = 0;
    }
    else {
      param_1 = param_1 & 0xfffffffffffff000;
      uVar4 = param_1;
      if (0xafffffff < param_1) {
        uVar4 = 0xffffffffffffffff;
        if (0xffffffff < param_1) {
          uVar4 = param_1 - 0x50000000;
        }
      }
      lVar1 = FUN_10008c320(DAT_1011c3688,uVar4,0x1000,1,1);
      if (lVar1 == 0) {
        uVar2 = 0;
      }
      else if ((*(int *)(uVar3 + 8 + lVar1) - 0x18U < 0x3fffffe9) &&
              (*(ushort *)(uVar3 + 0xe + lVar1) < 0x401)) {
        *(undefined4 *)(uVar3 + 4 + lVar1) = 0xf0000000;
        uVar3 = param_1;
        if (0xafffffff < param_1) {
          uVar3 = 0xffffffffffffffff;
          if (0xffffffff < param_1) {
            uVar3 = param_1 - 0x50000000;
          }
        }
        FUN_10008c640(DAT_1011c3688,uVar3,0x1000,0,1,1);
        uVar2 = 1;
      }
      else {
        uVar3 = param_1;
        if (0xafffffff < param_1) {
          uVar3 = 0xffffffffffffffff;
          if (0xffffffff < param_1) {
            uVar3 = param_1 - 0x50000000;
          }
        }
        uVar2 = 0;
        FUN_10008c640(DAT_1011c3688,uVar3,0x1000,0,1,1);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

