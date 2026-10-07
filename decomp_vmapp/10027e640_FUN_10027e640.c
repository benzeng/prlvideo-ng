
undefined8 FUN_10027e640(long param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 8) != 0) && (uVar2 = *(uint *)(param_1 + 4), uVar2 != 0)) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar6 = *(ushort *)(lVar4 + 2);
    iVar7 = uVar2 - (int)((ulong)uVar6 % (ulong)uVar2);
    uVar5 = (uint)uVar6;
    if (iVar7 < param_3) {
      _memcpy((void *)(lVar4 + 4 + ((ulong)uVar6 % (ulong)uVar2) * 8),param_2,(long)iVar7 * 8);
      uVar6 = uVar6 + (short)iVar7;
      param_2 = (void *)((long)param_2 + (long)iVar7 * 8);
      param_3 = param_3 - iVar7;
      uVar2 = *(uint *)(param_1 + 4);
      lVar4 = *(long *)(param_1 + 0x20);
    }
    _memcpy((void *)(lVar4 + 4 + ((ulong)uVar6 % (ulong)uVar2) * 8),param_2,(long)param_3 * 8);
    sVar3 = (short)(param_3 + (uint)uVar6);
    *(short *)(*(long *)(param_1 + 0x20) + 2) = sVar3;
    uVar1 = 1;
    if ((int)((int)sVar3 - (uint)*(ushort *)(param_1 + 0x2c)) <
        (int)((param_3 + (uint)uVar6) - uVar5 & 0xffff)) {
      *(undefined1 *)(param_1 + 0x2e) = 0;
    }
  }
  return uVar1;
}

