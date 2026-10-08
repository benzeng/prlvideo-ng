
void FUN_100c27d40(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = *(int *)(param_1 + 0x28) - 1;
    *(uint *)(param_1 + 0x28) = uVar2;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar2 * 4);
    uVar1 = *(uint *)(param_1 + 0x30);
    if (uVar2 <= uVar1 && uVar1 - uVar2 != 0) {
      iVar5 = *(int *)(param_1 + 0x18);
      uVar3 = uVar1 - uVar2;
      *(uint *)(param_1 + 0x18) = iVar5 - (uVar1 - uVar2);
      if (uVar3 != 0) {
        uVar4 = iVar5 + 0xfU & 0xf;
        if ((uVar3 & 1) != 0) {
          if (uVar4 == 0) {
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x180);
            uVar4 = 0xf;
          }
          else {
            uVar4 = uVar4 - 1;
          }
          uVar3 = uVar3 - 1;
        }
        if (uVar1 - 1 != uVar2) {
          do {
            if (uVar4 == 0) {
              *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x180);
              iVar5 = 0xf;
            }
            else {
              iVar5 = uVar4 - 1;
            }
            uVar3 = uVar3 - 2;
            if (iVar5 == 0) {
              *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x180);
              uVar4 = 0xf;
            }
            else {
              uVar4 = iVar5 - 1;
            }
          } while (uVar3 != 0);
        }
      }
    }
    *(uint *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  return;
}

