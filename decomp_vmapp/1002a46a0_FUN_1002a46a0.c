
void FUN_1002a46a0(QObject *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_100bbe5a0;
  lVar3 = *(long *)(DAT_1011c3698 + 0x1938);
  uVar2 = *(uint *)(lVar3 + 0xa0b0);
  uVar1 = uVar2 - 1;
  *(uint *)(lVar3 + 0xa0b0) = uVar1;
  while (uVar5 = uVar1, uVar2 != 0) {
    plVar4 = *(long **)(lVar3 + 0xa000 + (ulong)uVar5 * 0xb0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xa0))();
      uVar5 = *(uint *)(lVar3 + 0xa0b0);
    }
    *(uint *)(lVar3 + 0xa0b0) = uVar5 - 1;
    uVar1 = uVar5 - 1;
    uVar2 = uVar5;
  }
  QObject::~QObject(param_1);
  return;
}

