
void FUN_10038d8e0(long param_1)

{
  uint3 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  uVar1 = *(uint3 *)(param_1 + 0xb0);
  if ((uVar1 & 0x1000) == 0) {
    if ((uVar1 & 0x8000) == 0) {
      iVar2 = 0x88e8;
      if ((uVar1 & 0x200) == 0) {
        iVar2 = ((uVar1 & 0x400) >> 8) + 0x88e4;
      }
      pvVar4 = operator_new(0x14);
      FUN_10038d2a0(pvVar4,(uVar1 & 0x100) >> 8 | 0x8892,iVar2,*(undefined4 *)(param_1 + 0xc));
      *(void **)(param_1 + 0x58) = pvVar4;
    }
    else {
      pvVar4 = operator_new(0x14);
      iVar2 = *(int *)(*(long *)(param_1 + 0x28) + 8);
      iVar3 = FUN_10032df20(param_1);
      FUN_10038d2a0(pvVar4,0x8892,0x88e9,iVar3 * iVar2);
      *(void **)(param_1 + 0x58) = pvVar4;
    }
  }
  else {
    pvVar4 = operator_new(0x14);
    FUN_10038d2a0(pvVar4,0x8a11,0x88e8,*(undefined4 *)(param_1 + 0xc));
    *(void **)(param_1 + 0x58) = pvVar4;
  }
  return;
}

