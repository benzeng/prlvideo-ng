
undefined8 * FUN_100a33970(undefined8 *param_1,long param_2,uint param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint uVar13;
  ulong uVar14;
  void *pvVar15;
  void *pvVar16;
  ulong uVar17;
  void *pvVar18;
  long local_58;
  
  uVar3 = *(uint *)(param_2 + 10);
  if (*(uint *)(param_2 + 2) == param_3) {
    if (param_3 < 0x36) {
      pcVar12 = "Input data doesn\'t include minimum header";
      goto LAB_100a339c6;
    }
    iVar4 = *(int *)(param_2 + 0x12);
    iVar5 = *(int *)(param_2 + 0x16);
    uVar1 = *(undefined2 *)(param_2 + 0x1a);
    uVar2 = *(ushort *)(param_2 + 0x1c);
    uVar6 = *(undefined4 *)(param_2 + 0x1e);
    uVar13 = *(uint *)(param_2 + 0x22);
    uVar7 = *(undefined8 *)(param_2 + 0x26);
    uVar8 = *(undefined8 *)(param_2 + 0x2e);
    uVar17 = (ulong)*(uint *)(param_2 + 0xe) + 0xe;
    if (param_3 < uVar17) {
      pcVar12 = "Input data doesn\'t include full header";
LAB_100a33a3d:
      FUN_100df99c0("","CPBitmapOperations",0,pcVar12);
LAB_100a33a46:
      pvVar18 = (void *)0x0;
    }
    else {
      if (uVar3 < uVar17) {
        pcVar12 = "Image bits intersected with header bits";
        goto LAB_100a33a3d;
      }
      if ((iVar4 == 0) || (iVar5 == 0)) {
        FUN_100df99c0("","CPBitmapOperations",0,"Invalid size of image %dx%d",iVar4,iVar5);
        goto LAB_100a33a46;
      }
      if (iVar4 < 0) {
        pcVar12 = "Image width can never be negative";
        goto LAB_100a33a3d;
      }
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","CPBitmapOperations",3,"BMP header size = %d");
      }
      iVar10 = -iVar5;
      if (-1 < iVar5) {
        iVar10 = iVar5;
      }
      if (uVar13 == 0) {
        uVar13 = (uint)uVar2 * iVar4 - 1 >> 3;
        uVar13 = (uVar13 - (uVar13 | 0xfffffffc)) * iVar10;
      }
      if (param_3 < uVar3 + uVar13) {
        pcVar12 = "Error in BMP structure, BMP is larger than input data";
        goto LAB_100a33a3d;
      }
      uVar17 = (ulong)uVar13 + 0x28;
      puVar11 = operator_new(uVar17);
      ___bzero(puVar11,uVar17);
      local_58 = 0;
      uVar17 = (ulong)uVar13 + 0x28;
      *puVar11 = 0x28;
      puVar11[1] = iVar4;
      puVar11[2] = iVar10;
      *(undefined2 *)(puVar11 + 3) = uVar1;
      *(ushort *)((long)puVar11 + 0xe) = uVar2;
      puVar11[4] = uVar6;
      puVar11[5] = uVar13;
      *(undefined8 *)(puVar11 + 8) = uVar8;
      *(undefined8 *)(puVar11 + 6) = uVar7;
      pvVar18 = (void *)0x0;
      if (uVar17 != 0) {
        pvVar18 = operator_new(uVar17);
        local_58 = uVar17 + (long)pvVar18;
        _memcpy(pvVar18,puVar11,uVar17);
      }
      operator_delete(puVar11);
      uVar17 = local_58 - (long)pvVar18;
      if (uVar17 != 0) {
        uVar13 = *(uint *)((long)pvVar18 + 0x14);
        uVar9 = (ulong)uVar13 / (ulong)*(uint *)((long)pvVar18 + 8);
        uVar14 = 0;
        if (iVar5 < 0) {
          uVar14 = (ulong)(uVar13 - (int)uVar9);
        }
        if (uVar13 != 0) {
          pvVar16 = (void *)((long)pvVar18 + 0x28);
          pvVar15 = (void *)(param_2 + uVar14 + uVar3);
          uVar14 = -uVar9;
          if (-1 < iVar5) {
            uVar14 = uVar9;
          }
          do {
            _memcpy(pvVar16,pvVar15,uVar9);
            pvVar16 = (void *)((long)pvVar16 + uVar9);
            pvVar15 = (void *)((long)pvVar15 + uVar14);
          } while (pvVar16 < (void *)((ulong)uVar13 + 0x28 + (long)pvVar18));
        }
        param_1[2] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        if ((long)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        pvVar16 = operator_new(uVar17);
        *param_1 = pvVar16;
        param_1[2] = (long)pvVar16 + uVar17;
        _memcpy(pvVar16,pvVar18,uVar17);
        param_1[1] = (long)pvVar16 + uVar17;
        goto LAB_100a33a60;
      }
    }
  }
  else {
    pcVar12 = "BMP size doesn\'t equal to input data size";
LAB_100a339c6:
    pvVar18 = (void *)0x0;
    FUN_100df99c0("","CPBitmapOperations",0,pcVar12);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
LAB_100a33a60:
  if (pvVar18 != (void *)0x0) {
    operator_delete(pvVar18);
  }
  return param_1;
}

