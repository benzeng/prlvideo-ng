
void FUN_1002aa010(long param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  void *pvVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint local_34;
  
  uVar1 = *param_2;
  lVar14 = (ulong)uVar1 * 0x8f0;
  uVar5 = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 0x930 + lVar14) = uVar5;
  uVar6 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x934 + lVar14) = uVar6;
  uVar2 = param_2[2];
  *(uint *)(param_1 + 0x938 + lVar14) = (uint)uVar2;
  uVar3 = param_2[3];
  *(uint *)(param_1 + 0x93c + lVar14) = (uint)uVar3;
  uVar4 = param_2[1];
  *(uint *)(param_1 + 0x940 + lVar14) = (uint)uVar4;
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x980 + lVar14) = uVar7;
  uVar8 = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x984 + lVar14) = uVar8;
  if ((ulong)uVar1 != 0) {
    lVar10 = *(long *)(param_1 + 0x910);
    lVar13 = (ulong)(uVar1 - 1) * 0x414;
    *(char *)(lVar10 + 0x24 + lVar13) = (char)uVar4;
    *(ushort *)(lVar10 + 0x26 + lVar13) = uVar2;
    *(ushort *)(lVar10 + 0x28 + lVar13) = uVar3;
    *(short *)(lVar10 + 0x2a + lVar13) = (short)uVar6;
    *(undefined4 *)(lVar10 + 0x2c + lVar13) = uVar5;
    *(undefined4 *)(lVar10 + 0x30 + lVar13) = uVar7;
    *(undefined4 *)(lVar10 + 0x34 + lVar13) = uVar8;
  }
  pvVar11 = *(void **)(param_1 + 0x988 + lVar14);
  if (pvVar11 != (void *)0x0) {
    operator_delete__(pvVar11);
  }
  *(undefined8 *)(param_1 + 0x988 + lVar14) = 0;
  *(undefined1 *)(param_1 + 0x9e4 + lVar14) = 1;
  iVar9 = *(int *)(param_1 + 0x9838);
  uVar12 = (uint)(iVar9 == 0);
  if (uVar12 != *(byte *)(param_1 + 0x9f8 + lVar14)) {
    lVar10 = *(long *)(param_1 + 0x9b8 + lVar14);
    if (lVar10 != 0) {
      local_34 = uVar12 ^ 1;
      _CGLSetParameter(lVar10,0xde,&local_34);
    }
    *(bool *)(param_1 + 0x9f8 + lVar14) = iVar9 == 0;
  }
  *(undefined4 *)(param_1 + 0x9d0 + lVar14) = *(undefined4 *)(param_1 + 0x9d4 + lVar14);
  uVar1 = *param_2;
  lVar14 = (ulong)uVar1 * 0x8f0;
  if (*(int *)(param_1 + 0x950 + lVar14) != 0) {
    *(undefined4 *)(param_1 + 0x950 + lVar14) = 0;
  }
  if (*(int *)(param_1 + 0x954 + lVar14) != 0) {
    *(undefined4 *)(param_1 + 0x954 + lVar14) = 0;
  }
  if (*(uint *)(param_1 + 0x958 + lVar14) < 0x3fff) {
    *(undefined4 *)(param_1 + 0x958 + lVar14) = 0x3fff;
  }
  if (*(uint *)(param_1 + 0x95c + lVar14) < 0x3fff) {
    *(undefined4 *)(param_1 + 0x95c + lVar14) = 0x3fff;
  }
  FUN_100434030(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0),(ulong)uVar1,
                *(undefined4 *)(param_2 + 10));
  FUN_100434440(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0),*param_2,
                *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0xe),param_2[2],param_2[3],
                param_2[1],*(undefined4 *)(param_2 + 4));
  FUN_100031560(DAT_1011c35c8,*param_2,param_2[1],*(undefined4 *)(param_2 + 0xc),
                *(undefined4 *)(param_2 + 0xe),param_2[2],param_2[3]);
  return;
}

