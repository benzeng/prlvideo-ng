
void FUN_1003518d0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_1003dcef0(param_1 + 0x92);
  if ((lVar2 != 0) && (uVar1 = *param_1, (ulong)uVar1 != 0)) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x9c) + uVar3 * 8) == lVar2) {
        *(undefined8 *)(*(long *)(param_1 + 0x9c) + uVar3 * 8) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

