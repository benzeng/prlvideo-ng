
undefined8 FUN_1003b8b60(uint *param_1,long param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint3 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined **local_40;
  undefined8 local_38;
  
  uVar7 = *param_1;
  uVar2 = *(uint *)(param_2 + 0x34);
  if (uVar7 <= uVar2) {
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 4) + 0xb8);
      FUN_10038e8e0(*(undefined8 *)(param_1 + 2),"\t// ");
      local_40 = &PTR_FUN_100bbdd50;
      local_38 = 0;
      iVar6 = FUN_1003b6f40(&local_40,(ulong)uVar7 * 0x10 + lVar8,*(undefined8 *)(param_1 + 2));
      if (iVar6 != 0) {
        return 1;
      }
      uVar7 = *param_1 + 1;
      *param_1 = uVar7;
      uVar2 = *(uint *)(param_2 + 0x34);
    } while (uVar7 <= uVar2);
  }
  uVar10 = *(undefined8 *)(param_1 + 2);
  uVar3 = *(undefined4 *)(*(long *)(param_2 + 0x38) + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  lVar8 = FUN_1003a7de0(*(undefined2 *)(param_2 + 0x4c));
  FUN_10038e8e0(uVar10,"\t%d.%d.%d  %s",uVar3,uVar2,uVar4,*(undefined8 *)(lVar8 + 8));
  sVar1 = *(short *)(param_2 + 0x4c);
  if (sVar1 != 0x3d) goto LAB_1003b8c6b;
  if ((*(ushort *)(param_2 + 0x54) & 0x8000) == 0) {
    if (*(char *)(param_2 + 0x4e) == '\x01') {
      uVar10 = *(undefined8 *)(param_1 + 2);
      pcVar9 = "_uint";
      goto LAB_1003b8c5f;
    }
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 2);
    pcVar9 = "_rcpFloat";
LAB_1003b8c5f:
    FUN_10038e8e0(uVar10,pcVar9);
  }
  sVar1 = *(short *)(param_2 + 0x4c);
LAB_1003b8c6b:
  if ((sVar1 == 0x6f) && (*(char *)(param_2 + 0x4e) == '\x01')) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 2),"_uint");
  }
  uVar5 = *(uint3 *)(param_2 + 0x54);
  if ((uVar5 & 0x2000) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 2),"_sat");
    uVar5 = *(uint3 *)(param_2 + 0x54);
  }
  if ((uVar5 & 0x4000) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 2),"_nz");
    uVar5 = *(uint3 *)(param_2 + 0x54);
  }
  if ((uVar5 & 1) != 0) {
    uVar7 = (uint)uVar5;
    FUN_10038e8e0(*(undefined8 *)(param_1 + 2),"(%d, %d, %d)",(int)(uVar7 << 0x1b) >> 0x1c,
                  (int)(uVar7 << 0x17) >> 0x1c,(int)(uVar7 << 0x13) >> 0x1c);
  }
  if (*(short *)(param_2 + 0x4c) == 0xdb) {
    FUN_1003b9280(param_1,param_2);
  }
  else if (*(short *)(param_2 + 0x4c) == 0xdc) {
    FUN_1003b93d0(param_1,param_2);
  }
  else if (*(int *)(param_2 + 0x48) != 0) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      pcVar9 = " ";
      if (uVar7 != 0) {
        pcVar9 = ", ";
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 2),pcVar9);
      FUN_1003b94a0(param_1,*(long *)(param_2 + 0x40) + lVar8);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x40;
    } while (uVar7 < *(uint *)(param_2 + 0x48));
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 2),"\n");
  return 0;
}

