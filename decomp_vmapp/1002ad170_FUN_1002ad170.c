
undefined4 FUN_1002ad170(long param_1,ulong param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = (param_2 & 0xffffffff) * 0x8f0;
  iVar2 = *(int *)(param_1 + 0x93c + lVar4) * *(int *)(param_1 + 0x934 + lVar4);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x930 + lVar4);
    if (uVar1 < param_3) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),uVar1 + iVar2 <= param_4 + param_3);
    }
  }
  return uVar3;
}

