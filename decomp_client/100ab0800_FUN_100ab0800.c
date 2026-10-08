
void FUN_100ab0800(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    do {
      uVar1 = *(uint *)(param_1 + 0x1c);
    } while ((uVar1 & 1) != 0);
    if ((uVar1 & 6) == 0) {
      return;
    }
    LOCK();
    uVar2 = *(uint *)(param_1 + 0x1c);
    if (uVar1 == uVar2) {
      *(uint *)(param_1 + 0x1c) = uVar1 | 8;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

