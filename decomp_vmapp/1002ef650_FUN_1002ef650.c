
void FUN_1002ef650(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0xc) & 1) == 0) {
    uVar3 = *(uint *)(lVar2 + 0xc);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar2 + 0xc);
      bVar4 = uVar3 == uVar1;
      if (bVar4) {
        *(uint *)(lVar2 + 0xc) = uVar3 | 1;
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
      UNLOCK();
    } while (!bVar4);
    if ((uVar3 & 1) == 0) {
      FUN_1007d8b20(param_1 + 0xc);
      return;
    }
  }
  return;
}

