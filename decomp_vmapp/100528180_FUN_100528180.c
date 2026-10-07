
void FUN_100528180(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = *(uint *)(param_1 + 0x818);
  if (uVar2 != 0) {
    uVar1 = 0;
    piVar3 = *(int **)(param_1 + 0x810);
    do {
      if (*piVar3 == param_2) {
        if (uVar1 != uVar2 - 1) {
          _memmove(piVar3,*(int **)(param_1 + 0x810) + (uVar1 + 1),(ulong)(uVar2 - (uVar1 + 1)) << 2
                  );
          uVar2 = *(uint *)(param_1 + 0x818);
        }
        *(uint *)(param_1 + 0x818) = uVar2 - 1;
        if (*(int *)(param_1 + 0x808) != param_2) {
          return;
        }
        *(undefined4 *)(param_1 + 0x808) = 0;
        *(undefined4 *)(param_1 + 0x824) = 0;
        return;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}

