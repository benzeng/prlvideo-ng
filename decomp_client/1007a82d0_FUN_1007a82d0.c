
undefined1  [16] FUN_1007a82d0(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  plVar1 = (long *)QGridLayout::itemAtPosition((int)*(undefined8 *)(param_1 + 0x30),param_2);
  uVar5 = 0xffffffffffffffff;
  uVar3 = 0;
  if (plVar1 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
    uVar3 = 0;
    uVar4 = 0;
    if (lVar2 != 0) {
      uVar4 = *(ulong *)(*(long *)(lVar2 + 0x28) + 0x14);
      uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0x28) + 0x1c);
      uVar3 = uVar4 & 0xffffffff00000000;
      uVar4 = uVar4 & 0xffffffff;
    }
  }
  auVar6._0_8_ = uVar3 | uVar4;
  auVar6._8_8_ = uVar5;
  return auVar6;
}

