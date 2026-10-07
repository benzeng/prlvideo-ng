
undefined8 FUN_1002e7470(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[MSC] reset");
  }
  lVar1 = *(long *)(param_1 + 0x1a0);
  lVar2 = param_1;
  while (lVar1 == lVar2) {
    uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0x70))();
    FUN_1002c1590(uVar3,0xffffffff);
    lVar2 = *(long *)(param_1 + 0x1a0);
  }
  *(undefined4 *)(param_1 + 0x14c) = 1;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_10070ae60(param_1 + 400);
  FUN_1004103f0(0,param_1 + 0x150,0x12,0);
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x70) + 0xf0) = 0;
  return 1;
}

