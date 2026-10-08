
undefined1 * FUN_100dda4c0(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  
  uVar11 = *param_2;
  uVar9 = *(undefined2 *)(param_2 + 1);
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar2 = *(undefined1 *)((long)param_2 + 9);
  uVar3 = *(undefined1 *)((long)param_2 + 10);
  uVar4 = *(undefined1 *)((long)param_2 + 0xb);
  uVar5 = *(undefined1 *)(param_2 + 3);
  uVar6 = *(undefined1 *)((long)param_2 + 0xd);
  uVar7 = *(undefined1 *)((long)param_2 + 0xe);
  uVar8 = *(undefined1 *)((long)param_2 + 0xf);
  uVar10 = *(undefined2 *)((long)param_2 + 6);
  FUN_100deac20();
  *param_1 = (char)((uint)uVar11 >> 0x18);
  param_1[1] = (char)((uint)uVar11 >> 0x10);
  param_1[2] = (char)((uint)uVar11 >> 8);
  param_1[3] = (char)uVar11;
  param_1[4] = (char)((ushort)uVar9 >> 8);
  param_1[5] = (char)uVar9;
  param_1[6] = (char)((ushort)uVar10 >> 8);
  param_1[7] = (char)uVar10;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar6;
  param_1[0xe] = uVar7;
  param_1[0xf] = uVar8;
  return param_1;
}

