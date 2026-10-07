
undefined8 FUN_10029a6d0(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = *(int **)(param_1 + 0xa0);
  if (*piVar2 == 1) {
    uVar3 = 0;
    if (((ulong)(uint)piVar2[1] < 0x21) &&
       ((0x101010100U >> ((ulong)(uint)piVar2[1] & 0x3f) & 1) != 0)) {
      if (piVar2[2] - 1U < 8) {
        iVar1 = piVar2[3];
        if (iVar1 < 32000) {
          if (iVar1 < 0x2b11) {
            if (iVar1 != 8000) {
              return 0;
            }
          }
          else if (iVar1 < 0x5622) {
            if ((iVar1 != 0x2b11) && (iVar1 != 16000)) {
              return 0;
            }
          }
          else if ((iVar1 != 0x5622) && (iVar1 != 24000)) {
            return 0;
          }
        }
        else if (iVar1 < 88000) {
          if (iVar1 < 48000) {
            if ((iVar1 != 32000) && (iVar1 != 0xac44)) {
              return 0;
            }
          }
          else if ((iVar1 != 48000) && (iVar1 != 64000)) {
            return 0;
          }
        }
        else if ((iVar1 != 88000) && (iVar1 != 0x2ee00)) {
          return 0;
        }
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

