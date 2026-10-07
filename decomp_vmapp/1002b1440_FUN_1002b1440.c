
void FUN_1002b1440(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x1938);
  uVar4 = *(uint *)(lVar3 + 0x3cec4);
  do {
    puVar1 = (uint *)(lVar3 + 0x3cec4);
    LOCK();
    uVar2 = *puVar1;
    bVar5 = uVar4 == uVar2;
    if (bVar5) {
      *puVar1 = param_2 | uVar4;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
  } while (!bVar5);
  FUN_1000acd00(*(undefined8 *)(param_1 + 8),0x1000000,*(undefined4 *)(param_1 + 0x11870),1);
  return;
}

