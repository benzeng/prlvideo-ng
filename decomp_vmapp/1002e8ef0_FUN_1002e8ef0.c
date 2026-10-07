
undefined8 FUN_1002e8ef0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 4;
  if (*(long *)(param_1 + 0x168) != 0) {
    lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0x70))();
    if (*(long *)(lVar1 + 0x310) == 0) {
      uVar2 = 6;
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[MSC] Failed to create AioWorker");
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x198) = 0x4001;
      *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x170);
      *(long *)(param_1 + 0x1a0) = param_1;
      *(long *)(param_1 + 0x1a8) = param_1;
      *(code **)(param_1 + 0x1d8) = FUN_1002e96a0;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x168);
      *(undefined4 *)(param_1 + 0x1e4) = 1;
      *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x168);
      uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0x70))();
      FUN_1002c5ef0(uVar2,param_1 + 400,*(undefined8 *)(param_1 + 0x40));
      uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0x70))();
      FUN_1002c5f30(uVar2);
      uVar2 = 9;
      if (DAT_1011ccc18 != (code *)0x0) {
        (*DAT_1011ccc18)(1,0x22,(param_1 + 400) * 0x100 | 7);
      }
    }
  }
  return uVar2;
}

