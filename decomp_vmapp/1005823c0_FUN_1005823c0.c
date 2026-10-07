
void FUN_1005823c0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = *(long **)(param_1 + 0x58);
  uVar2 = *(uint *)(plVar3 + 0x228);
  *(uint *)(plVar3 + 0x228) = uVar2 | 0x10000;
  uVar4 = (**(code **)(*plVar3 + 0x350))();
  FUN_1005ab5b0(uVar4);
  FUN_1005b1ea0(uVar4);
  FUN_1005b1e80(uVar4);
  FUN_100583390(param_1);
  if ((uVar2 & 0x10000) == 0) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x58) + 0x1140);
    *puVar1 = *puVar1 & 0xfffeffff;
  }
  return;
}

