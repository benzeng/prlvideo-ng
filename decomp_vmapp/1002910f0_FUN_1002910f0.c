
void FUN_1002910f0(long *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  
  iVar5 = *(int *)(param_2 + 0x18);
  if (iVar5 == 6) {
    (**(code **)(*param_1 + 0xf8))(param_1,0,0);
    lVar6 = param_1[0x200];
    uVar4 = *(ushort *)(param_1 + 0x1fe);
    lVar9 = (ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + lVar6;
    uVar8 = *(uint *)(lVar9 + 0x4210 + (ulong)uVar4 * 4);
    do {
      puVar1 = (uint *)(lVar9 + 0x4210 + (ulong)uVar4 * 4);
      LOCK();
      uVar2 = *puVar1;
      bVar10 = uVar8 == uVar2;
      if (bVar10) {
        *puVar1 = uVar8 | 0x400000;
        uVar2 = uVar8;
      }
      uVar8 = uVar2;
      UNLOCK();
    } while (!bVar10);
    uVar4 = *(ushort *)((long)param_1 + 0xfee);
    bVar3 = *(byte *)(param_1 + 0x1fe);
    uVar8 = *(uint *)(lVar6 + 0x4000 + (ulong)uVar4 * 4);
    do {
      puVar1 = (uint *)(lVar6 + 0x4000 + (ulong)uVar4 * 4);
      LOCK();
      uVar2 = *puVar1;
      bVar10 = uVar8 == uVar2;
      if (bVar10) {
        *puVar1 = 1 << (bVar3 & 0x1f) | uVar8;
        uVar2 = uVar8;
      }
      uVar8 = uVar2;
      UNLOCK();
    } while (!bVar10);
    if ((uVar8 >> (*(byte *)(param_1 + 0x1fe) & 0x1f) & 1) == 0) {
      *(long *)(param_1[499] + 0xf0) = *(long *)(param_1[499] + 0xf0) + 1;
      FUN_1002effe0(DAT_1011c3e30);
    }
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  else if (iVar5 == 4) {
    uVar7 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    *(undefined4 *)(param_2 + 0x30) = uVar7;
  }
  else if (iVar5 == 3) {
    FUN_10028df60(param_1);
    return;
  }
  return;
}

