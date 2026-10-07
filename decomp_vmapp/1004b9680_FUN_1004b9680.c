
undefined1 FUN_1004b9680(long param_1,uint param_2)

{
  double dVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x1018) = 0;
  }
  else {
    uVar4 = param_2 >> 0x10 ^ param_2;
    uVar8 = (ulong)(uVar4 >> 8 ^ uVar4) & 0xff;
    puVar9 = *(undefined8 **)(param_1 + 0x818 + uVar8 * 8);
    puVar11 = (undefined8 *)(param_1 + 0x818 + uVar8 * 8);
    while (puVar10 = puVar9, puVar10 != (undefined8 *)0x0) {
      if (*(uint *)(puVar10 + 1) == param_2) {
        *(undefined1 *)((long)puVar10 + 0x21) = 1;
        goto LAB_1004b9816;
      }
      puVar11 = puVar10;
      puVar9 = (undefined8 *)*puVar10;
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_58 = 0.0;
    dStack_50 = 0.0;
    local_48 = 0.0;
    puVar9 = _malloc(0x80);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",0,"Failed to allocate memory (%ld bytes)",0x80);
      return 0;
    }
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 9) = local_68;
    puVar9[8] = uStack_70;
    puVar9[7] = local_78;
    *(undefined4 *)((long)puVar9 + 0x4c) = 0;
    puVar9[0xc] = local_48;
    puVar9[0xb] = dStack_50;
    puVar9[10] = local_58;
    *(undefined4 *)((long)puVar9 + 0x2c) = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    *(undefined1 *)((long)puVar9 + 0x34) = 1;
    *puVar9 = *puVar11;
    *puVar11 = puVar9;
    *(uint *)(puVar9 + 1) = param_2;
    *(undefined1 *)((long)puVar9 + 0x25) = 1;
    *(undefined4 *)(puVar9 + 5) = 0;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x868) != 0) {
      *(undefined2 *)(puVar9 + 4) = 0x101;
    }
    puVar10 = (undefined8 *)*puVar11;
LAB_1004b9816:
    pcVar3 = DAT_1011ccd98;
    uVar5 = (*DAT_1011ccc38)();
    iVar6 = (*pcVar3)(uVar5,*(undefined4 *)(puVar10 + 1),&local_58);
    if (iVar6 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
      iVar6 = *(int *)(lVar2 + 0x1c);
      dVar1 = *(double *)(lVar2 + 0x240);
      iVar7 = (int)((double)((int)local_58 - *(int *)(lVar2 + 0x18)) * dVar1);
      *(int *)(puVar10 + 0xb) = iVar7;
      iVar6 = (int)((double)((int)dStack_50 - iVar6) * dVar1);
      *(int *)((long)puVar10 + 0x5c) = iVar6;
      *(int *)(puVar10 + 0xc) = (int)((double)(int)local_48 * dVar1 + (double)iVar7);
      *(int *)((long)puVar10 + 100) = (int)((double)(int)local_40 * dVar1 + (double)iVar6);
    }
    pcVar3 = DAT_1011ccd98;
    uVar5 = (*DAT_1011ccc38)();
    iVar6 = (*pcVar3)(uVar5,param_2,&local_58);
    if (iVar6 == 0) {
      dVar1 = *(double *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + 0x240);
      local_78 = 0;
      uStack_70 = CONCAT44((int)(dVar1 * local_40),(int)(local_48 * dVar1));
      FUN_1004bf6a0(param_1 + 0x1030,&local_78);
    }
    *(undefined8 *)(param_1 + 0x1018) = *puVar11;
  }
  return 1;
}

