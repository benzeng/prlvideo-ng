
void FUN_1002e2680(long param_1,undefined8 *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x90);
  lVar5 = (ulong)(param_3 - 1) * 0x34;
  *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(lVar3 + 0x2e + lVar5);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar3 + 0x2a + lVar5);
  uVar4 = *(undefined8 *)(lVar3 + 0x1a + lVar5);
  param_2[1] = *(undefined8 *)(lVar3 + 0x22 + lVar5);
  *param_2 = uVar4;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x90) + 4 + lVar5);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x90) + 0x1e + lVar5);
  if (param_4 < uVar2) {
    param_4 = uVar2;
  }
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  *(uint *)((long)param_2 + 4) = param_4;
  *(int *)((long)param_2 + 0x16) =
       (int)(((ulong)*(uint *)((long)param_2 + 0x12) * 10000000) / (ulong)param_4 >> 0xd);
  return;
}

