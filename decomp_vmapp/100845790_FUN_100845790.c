
void FUN_100845790(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = *(ulong *)(param_1 + 0x38);
  uVar5 = uVar1 << 3;
  uVar6 = uVar2 << 3;
  pcVar3 = *(code **)(param_1 + 0x160);
  if ((*(int *)(param_1 + 0x170) != 0) || (*(int *)(param_1 + 0x174) != 0)) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60);
  }
  *(ulong *)(param_1 + 0x40) =
       *(ulong *)(param_1 + 0x40) ^
       ((uVar1 & 0x1fffffffffffffff) >> 0x35 | (uVar5 & 0xff000000000000) >> 0x28 |
        (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
        (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar1 << 0x3b);
  *(ulong *)(param_1 + 0x48) =
       *(ulong *)(param_1 + 0x48) ^
       ((uVar2 & 0x1fffffffffffffff) >> 0x35 | (uVar6 & 0xff000000000000) >> 0x28 |
        (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 |
        (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28 | uVar2 << 0x3b);
  (*pcVar3)((void *)(param_1 + 0x40),param_1 + 0x60);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) ^ *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) ^ *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) ^ *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) ^ *(uint *)(param_1 + 0x2c);
  sVar4 = 0x10;
  if (param_3 < 0x11) {
    sVar4 = param_3;
  }
  _memcpy(param_2,(void *)(param_1 + 0x40),sVar4);
  return;
}

