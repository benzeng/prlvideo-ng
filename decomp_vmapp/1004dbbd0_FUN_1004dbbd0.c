
void FUN_1004dbbd0(long param_1,uint *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  param_2[0x10] = (uint)*(byte *)(param_1 + 0x28);
  param_2[0xf] = 0;
  plVar1 = *(long **)(*(long *)(param_1 + 0x40) + 0x10);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2 + 0xf);
  bVar2 = FUN_1004e2f60(*(undefined8 *)(param_1 + 0x20));
  *param_2 = (uint)bVar2;
  uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x40) + 0x10) + 0x10))();
  *(undefined8 *)(param_2 + 0xb) = uVar4;
  *(ulong *)(param_2 + 0xd) = (ulong)((int)uVar4 + 0x1ffU & 0xfffffe00);
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  plVar1 = *(long **)(*(long *)(param_1 + 0x40) + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2 + 3,param_2 + 5,param_2 + 7);
  *(undefined8 *)(param_2 + 9) = *(undefined8 *)(param_2 + 7);
  uVar3 = 1;
  if (*param_2 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  return;
}

