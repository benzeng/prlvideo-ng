
undefined8 FUN_100bc80b0(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  undefined1 *local_40;
  long local_38;
  
  if (param_1[0x12] != 0x1110) goto LAB_100bc839b;
  puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x14) + 8);
  piVar2 = *(int **)(param_1 + 0x4c);
  if ((((((piVar2 == (int *)0x0) || (*piVar2 != *param_1)) ||
        ((piVar2[0x11] == 0 && (*(long *)(piVar2 + 0x50) == 0)))) || (piVar2[0x28] != 0)) &&
      (iVar4 = FUN_100be8c40(param_1,0), iVar4 == 0)) ||
     (iVar4 = FUN_100bd6ce0(param_1,0,*(long *)(param_1 + 0x20) + 0xc4,0x20), iVar4 < 1))
  goto LAB_100bc83f5;
  puVar1[4] = *(undefined1 *)((long)param_1 + 0x1c5);
  puVar1[5] = (char)param_1[0x71];
  lVar12 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(puVar1 + 0x1e) = *(undefined8 *)(lVar12 + 0xdc);
  *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(lVar12 + 0xd4);
  uVar6 = *(undefined8 *)(lVar12 + 0xc4);
  *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(lVar12 + 0xcc);
  *(undefined8 *)(puVar1 + 6) = uVar6;
  if (param_1[0xf] == 0) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x4c) + 0x44);
    sVar11 = (size_t)iVar4;
    local_40 = puVar1 + 0x27;
    puVar1[0x26] = (char)iVar4;
    lVar10 = 0x28;
    lVar12 = 0x29;
    if (sVar11 == 0) {
      local_38 = 0x27;
      goto LAB_100bc8242;
    }
    if (iVar4 < 0x21) {
      _memcpy(local_40,(void *)(*(long *)(param_1 + 0x4c) + 0x48),sVar11);
      local_40 = puVar1 + sVar11 + 0x27;
      local_38 = sVar11 + 0x27;
      lVar12 = sVar11 + 0x29;
      lVar10 = sVar11 + 0x28;
      goto LAB_100bc8242;
    }
    uVar6 = 0x44;
    uVar9 = 0x2f9;
  }
  else {
    local_40 = puVar1 + 0x27;
    puVar1[0x26] = 0;
    local_38 = 0x27;
    lVar10 = 0x28;
    lVar12 = 0x29;
LAB_100bc8242:
    uVar6 = FUN_100be4ad0(param_1);
    iVar5 = 0;
    iVar4 = FUN_100be4d80(param_1,uVar6,puVar1 + lVar12,0);
    if (iVar4 == 0) {
      uVar6 = 0xb5;
      uVar9 = 0x303;
    }
    else {
      *local_40 = (char)((uint)iVar4 >> 8);
      puVar1[lVar10] = (char)iVar4;
      lVar12 = (long)iVar4;
      if (((*(byte *)((long)param_1 + 0x1aa) & 2) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x5c) + 0x100) != 0)) {
        iVar5 = FUN_100c60800();
      }
      lVar10 = local_38 + lVar12;
      puVar1[local_38 + 2 + lVar12] = (char)iVar5 + '\x01';
      if (iVar5 < 1) {
        lVar12 = local_38 + 3 + lVar12;
        lVar3 = lVar10 + 3;
      }
      else {
        lVar12 = (ulong)(iVar5 - 1) + 4 + lVar10;
        uVar8 = 0;
        do {
          puVar7 = (undefined1 *)
                   FUN_100c60820(*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x100),
                                 uVar8 & 0xffffffff);
          puVar1[uVar8 + lVar10 + 3] = *puVar7;
          uVar8 = uVar8 + 1;
          lVar3 = lVar12;
        } while (iVar5 != (int)uVar8);
      }
      puVar1[lVar3] = 0;
      iVar4 = FUN_100bd9640(param_1);
      if (iVar4 < 1) {
        uVar6 = 0xe2;
        uVar9 = 0x328;
      }
      else {
        lVar12 = FUN_100bd7440(param_1,puVar1 + lVar12 + 1,puVar1 + 0x4000);
        if (lVar12 != 0) {
          lVar10 = lVar12 - (long)(puVar1 + 4);
          *puVar1 = 1;
          puVar1[1] = (char)((ulong)lVar10 >> 0x10);
          puVar1[2] = (char)((ulong)lVar10 >> 8);
          puVar1[3] = (char)lVar10;
          param_1[0x12] = 0x1111;
          param_1[0x18] = (int)lVar12 - (int)puVar1;
          param_1[0x19] = 0;
LAB_100bc839b:
          uVar6 = FUN_100bd30a0(param_1,0x16);
          return uVar6;
        }
        uVar6 = 0x44;
        uVar9 = 0x32f;
      }
    }
  }
  FUN_100c62ee0(0x14,0x83,uVar6,"s3_clnt.c",uVar9);
LAB_100bc83f5:
  param_1[0x12] = 5;
  return 0xffffffff;
}

