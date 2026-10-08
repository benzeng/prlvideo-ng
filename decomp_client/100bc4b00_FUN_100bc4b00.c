
undefined8 FUN_100bc4b00(uint *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 extraout_RDX;
  long lVar12;
  int iVar13;
  undefined2 uVar14;
  undefined1 *local_38;
  int iVar15;
  
  if (param_1[0x12] == 0x2160) {
    lVar2 = *(long *)(param_1 + 0x14);
    lVar8 = *(long *)(lVar2 + 8);
    local_38 = (undefined1 *)(lVar8 + 5);
    iVar5 = FUN_100bce9c0(param_1);
    puVar4 = local_38;
    *(char *)(lVar8 + 4) = (char)iVar5;
    puVar11 = local_38 + iVar5;
    iVar13 = iVar5 + 1;
    if ((0x302 < (int)*param_1) && ((*param_1 & 0xffffff00) == 0x300)) {
      puVar1 = local_38 + (long)iVar5 + 2;
      local_38 = puVar11;
      iVar6 = FUN_100bd73f0(param_1,puVar1);
      puVar4[iVar5] = (char)((uint)iVar6 >> 8);
      local_38[1] = (char)iVar6;
      puVar11 = local_38 + (long)(iVar6 + 2) + 2;
      iVar13 = iVar6 + 2 + iVar13;
    }
    local_38 = puVar11 + 2;
    iVar5 = iVar13 + 2;
    lVar8 = FUN_100be7f70(param_1);
    if ((lVar8 == 0) || (iVar6 = FUN_100c60800(lVar8), iVar6 < 1)) {
      uVar14 = 0;
    }
    else {
      iVar6 = 0;
      iVar15 = 0;
      do {
        uVar9 = FUN_100c60820(lVar8,iVar6);
        iVar7 = FUN_100c7c6f0(uVar9,0);
        iVar10 = iVar5 + 6 + iVar7;
        iVar10 = FUN_100c58060(lVar2,(long)iVar10,extraout_RDX,iVar10);
        if (iVar10 == 0) {
          FUN_100c62ee0(0x14,0x96,7,"s3_srvr.c",0x845);
          goto LAB_100bc4df2;
        }
        lVar3 = *(long *)(lVar2 + 8);
        local_38 = (undefined1 *)(lVar3 + 4 + (long)iVar5);
        if ((*(byte *)((long)param_1 + 0x1ab) & 0x20) == 0) {
          *local_38 = (char)((uint)iVar7 >> 8);
          local_38[1] = (char)iVar7;
          local_38 = local_38 + 2;
          FUN_100c7c6f0(uVar9,&local_38);
          iVar7 = iVar7 + 2;
        }
        else {
          lVar12 = (long)iVar5 + 4;
          FUN_100c7c6f0(uVar9,&local_38);
          *(char *)(lVar3 + lVar12) = (char)((uint)(iVar7 + -2) >> 8);
          *(char *)(lVar3 + 1 + lVar12) = (char)(iVar7 + -2);
        }
        iVar5 = iVar5 + iVar7;
        iVar15 = iVar15 + iVar7;
        uVar14 = (undefined2)iVar15;
        iVar6 = iVar6 + 1;
        iVar7 = FUN_100c60800(lVar8);
      } while (iVar6 < iVar7);
    }
    lVar8 = (long)iVar13 + 4 + *(long *)(lVar2 + 8);
    *(char *)((long)iVar13 + 4 + *(long *)(lVar2 + 8)) = (char)((ushort)uVar14 >> 8);
    *(char *)(lVar8 + 1) = (char)uVar14;
    local_38 = (undefined1 *)(lVar8 + 2);
    puVar11 = *(undefined1 **)(lVar2 + 8);
    *puVar11 = 0xd;
    puVar11[1] = (char)((uint)iVar5 >> 0x10);
    puVar11[2] = (char)((uint)iVar5 >> 8);
    puVar11[3] = (char)iVar5;
    param_1[0x18] = iVar5 + 4;
    param_1[0x19] = 0;
    iVar5 = FUN_100c58060(lVar2,(long)(iVar5 + 8),iVar5 + 8);
    if (iVar5 == 0) {
      FUN_100c62ee0(0x14,0x96,7,"s3_srvr.c",0x869);
LAB_100bc4df2:
      param_1[0x12] = 5;
      return 0xffffffff;
    }
    puVar11 = (undefined1 *)
              (*(long *)(*(long *)(param_1 + 0x14) + 8) + 1 + (long)(int)param_1[0x18]);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x14) + 8) + (long)(int)param_1[0x18]) = 0xe;
    *puVar11 = 0;
    puVar11[1] = 0;
    local_38 = puVar11 + 3;
    puVar11[2] = 0;
    param_1[0x18] = param_1[0x18] + 4;
    param_1[0x12] = 0x2161;
  }
  uVar9 = FUN_100bd30a0(param_1,0x16);
  return uVar9;
}

