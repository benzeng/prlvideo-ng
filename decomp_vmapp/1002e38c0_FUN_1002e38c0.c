
undefined8 FUN_1002e38c0(long param_1,short param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x20;
  if (param_3 == 1) {
    if (param_2 == 0x200) {
      uVar5 = *(uint *)(param_4 + 4);
      lVar3 = *(long *)(param_1 + 0x90);
      lVar4 = (ulong)(*(byte *)(param_4 + 3) - 1) * 0x34;
      *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(lVar3 + 0x2e + lVar4);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar3 + 0x2a + lVar4);
      uVar6 = *(undefined8 *)(lVar3 + 0x1a + lVar4);
      *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(lVar3 + 0x22 + lVar4);
      *(undefined8 *)(param_1 + 0x54) = uVar6;
      uVar1 = *(uint *)(lVar3 + 4 + lVar4);
      uVar2 = *(uint *)(lVar3 + 0x1e + lVar4);
      if (uVar5 < uVar2) {
        uVar5 = uVar2;
      }
      if (uVar1 < uVar5) {
        uVar5 = uVar1;
      }
      *(uint *)(param_1 + 0x58) = uVar5;
      uVar6 = 0;
      *(int *)(param_1 + 0x6a) =
           (int)(((ulong)*(uint *)(param_1 + 0x66) * 10000000) / (ulong)uVar5 >> 0xd);
      *(uint *)(param_1 + 0x80) = uVar5 / 10000;
    }
    else if (param_2 == 0x100) {
      uVar5 = *(uint *)(param_4 + 4);
      lVar3 = *(long *)(param_1 + 0x90);
      lVar4 = (ulong)(*(byte *)(param_4 + 3) - 1) * 0x34;
      *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(lVar3 + 0x2e + lVar4);
      *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(lVar3 + 0x2a + lVar4);
      uVar6 = *(undefined8 *)(lVar3 + 0x1a + lVar4);
      *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(lVar3 + 0x22 + lVar4);
      *(undefined8 *)(param_1 + 0x3a) = uVar6;
      uVar1 = *(uint *)(lVar3 + 4 + lVar4);
      uVar2 = *(uint *)(lVar3 + 0x1e + lVar4);
      if (uVar5 < uVar2) {
        uVar5 = uVar2;
      }
      if (uVar1 < uVar5) {
        uVar5 = uVar1;
      }
      *(uint *)(param_1 + 0x3e) = uVar5;
      uVar6 = 0;
      *(int *)(param_1 + 0x50) =
           (int)(((ulong)*(uint *)(param_1 + 0x4c) * 10000000) / (ulong)uVar5 >> 0xd);
    }
  }
  return uVar6;
}

