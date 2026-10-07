
void FUN_100297410(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  param_3[0xe] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *param_3 = param_1;
  param_3[2] = (long)FUN_100297570;
  param_3[1] = (long)FUN_100297610;
  param_3[5] = (long)param_3;
  param_3[7] = (long)param_3;
  lVar5 = param_2[1];
  if ((int)lVar5 != 0) {
    *(undefined4 *)(param_3 + 6) = 1;
  }
  uVar1 = *(uint *)(param_2 + 2);
  lVar2 = *(long *)(param_1 + 0x13800);
  param_3[3] = (ulong)uVar1 * lVar2;
  lVar3 = *param_2;
  param_3[4] = lVar2 * lVar3;
  param_3[0x120] = lVar3;
  *(uint *)(param_3 + 0x121) = (uint)((int)lVar5 != 0);
  *(uint *)((long)param_3 + 0x90c) = uVar1;
  *(undefined4 *)(param_3 + 0x122) = 0;
  *(uint *)(param_1 + 0x1014) =
       *(uint *)(param_1 + 0x1014) | 1 << (*(byte *)((long)param_2 + 0xd) & 0x1f);
  plVar4 = (long *)param_3[0x126];
  param_3[0x126] = (long)(param_2 + 3);
  param_2[3] = (long)(param_3 + 0x125);
  param_2[4] = (long)plVar4;
  *plVar4 = (long)(param_2 + 3);
  FUN_1004035a0(param_1 + 0x137b8,param_3,*(undefined8 *)(param_1 + 0x1008),8000000);
  *(byte *)((long)param_3 + 0x31) = *(byte *)((long)param_3 + 0x31) | 0x10;
  return;
}

