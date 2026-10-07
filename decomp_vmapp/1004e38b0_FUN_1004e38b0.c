
undefined8
FUN_1004e38b0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,uint param_6)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar12;
  QArrayData *local_138;
  QArrayData *local_130;
  ulong local_128 [3];
  undefined1 local_110 [4];
  ushort local_10c;
  long local_c0;
  long local_b8;
  uint local_9c;
  undefined1 local_79;
  long local_78 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar8 = 0;
  if ((param_6 != 0) && (uVar8 = param_6 & 0xfffffffe, (param_6 & 0x10) == 0)) {
    uVar8 = param_6;
  }
  if ((param_3 < 1) && (0 < param_5)) {
    bVar1 = true;
LAB_1004e3946:
    iVar4 = _fstat_INODE64(*(undefined4 *)(param_1 + 0x10),local_110);
    if (iVar4 == -1) {
      piVar6 = ___error();
      iVar4 = *piVar6;
      if (iVar4 < 0x3f) {
        lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
        uVar12 = 0xf0000019;
        switch(iVar4) {
        case 1:
          uVar12 = 0xf0000007;
          break;
        case 2:
          break;
        default:
          goto switchD_1004e3a0d_caseD_3;
        case 5:
          uVar12 = 0xf000001c;
          break;
        case 9:
          uVar12 = 0xf0000012;
          break;
        case 0xd:
        case 0x1e:
          uVar12 = 0xf0000007;
          break;
        case 0xe:
          uVar12 = 0xf0000006;
          break;
        case 0x11:
          uVar12 = 0xf0000017;
          break;
        case 0x14:
          uVar12 = 0xf0000015;
          break;
        case 0x16:
        case 0x1d:
          uVar12 = 0xf0000003;
          break;
        case 0x17:
        case 0x18:
          uVar12 = 0xf000001b;
          break;
        case 0x1c:
          uVar12 = 0xf000000c;
        }
      }
      else {
        lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
        if (iVar4 == 0x3f) {
          uVar12 = 0xf0000018;
          goto switchD_1004e3a0d_caseD_2;
        }
        if (iVar4 == 0x42) {
          uVar12 = 0xf000000b;
          goto switchD_1004e3a0d_caseD_2;
        }
switchD_1004e3a0d_caseD_3:
        uVar12 = 0xf000001c;
      }
      goto switchD_1004e3a0d_caseD_2;
    }
  }
  else {
    bVar1 = (param_5 < 1 && param_3 < 1) && 0 < param_4;
    if ((param_6 != 0) || (bVar1)) goto LAB_1004e3946;
    bVar1 = false;
  }
  local_128[1] = 0;
  local_128[2] = 0;
  local_128[0] = 5;
  if (param_3 < 1) {
    uVar5 = 0;
    uVar9 = 0;
    if (bVar1) {
      local_78[1] = local_b8;
      local_78[0] = local_c0;
      goto LAB_1004e3a3c;
    }
  }
  else {
    local_78[0] = (param_3 + -0x19db1ded53e8000) / 10000000;
    local_78[1] = ((param_3 + -0x19db1ded53e8000) % 10000000) * 100;
LAB_1004e3a3c:
    local_128[0] = 0x20000000005;
    uVar9 = 1;
    uVar5 = 0x200;
  }
  uVar10 = uVar5;
  if (0 < param_5) {
    local_78[uVar9 * 2] = (param_5 + -0x19db1ded53e8000) / 10000000;
    local_78[uVar9 * 2 + 1] = ((param_5 + -0x19db1ded53e8000) % 10000000) * 100;
    uVar10 = uVar5 | 0x400;
    local_128[0] = CONCAT44(uVar5,(undefined4)local_128[0]) | 0x40000000000;
    uVar9 = (ulong)((int)uVar9 + 1);
  }
  iVar4 = (int)uVar9;
  if (0 < param_4) {
    lVar7 = (long)iVar4;
    iVar4 = iVar4 + 1;
    local_78[lVar7 * 2] = (param_4 + -0x19db1ded53e8000) / 10000000;
    local_78[lVar7 * 2 + 1] = ((param_4 + -0x19db1ded53e8000) % 10000000) * 100;
    local_128[0] = CONCAT44(uVar10,(undefined4)local_128[0]) | 0x100000000000;
  }
  puVar11 = (uint *)(local_78 + (long)iVar4 * 2);
  uVar12 = 0;
  if (param_6 == 0) {
    cVar2 = '\0';
  }
  else {
    if ((local_10c & 0xf000) == 0x4000) {
      local_130 = (QArrayData *)QString::fromAscii_helper("/$RECYCLE.BIN",0xd);
      cVar2 = QString::endsWith(param_1,&local_130,1);
      cVar3 = '\x01';
      if (cVar2 == '\0') {
        local_138 = (QArrayData *)QString::fromAscii_helper("/RECYCLER",9);
        cVar3 = QString::endsWith(param_1,&local_138,1);
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_79 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_1004e3bc9;
          }
          QArrayData::deallocate(local_138,2,8);
        }
      }
LAB_1004e3bc9:
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_79 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_79) goto LAB_1004e3bff;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_1004e3bff:
      if (cVar3 == '\0') {
        uVar8 = uVar8 & 0xfffffffd;
      }
      else {
        uVar8 = uVar8 | 2;
      }
    }
    uVar5 = local_9c & 0xffff7fff;
    if ((uVar8 & 2) != 0) {
      uVar5 = local_9c | 0x8000;
    }
    uVar10 = (uint)local_10c;
    if ((uVar8 & 1) == 0) {
      uVar5 = uVar5 & 0xfffffffd;
      uVar8 = uVar10 & 0xe49 | 0x1a4;
LAB_1004e3c9e:
      if (uVar8 == (uVar10 & 0xfff)) goto LAB_1004e3ca8;
      *puVar11 = uVar8;
      local_128[0] = local_128[0] | 0x2000000000000;
      if ((local_9c & 2) == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = (char)((uVar5 & 2) >> 1);
      }
      uVar9 = 1;
    }
    else {
      if ((uVar10 & 0xf000) != 0x4000) {
        uVar8 = uVar10 & 0xe49 | 0x124;
        goto LAB_1004e3c9e;
      }
LAB_1004e3ca8:
      cVar2 = '\0';
      uVar9 = 0;
    }
    if ((cVar2 != '\0') || (uVar5 != local_9c)) {
      puVar11[uVar9] = uVar5;
      local_128[0] = local_128[0] | 0x4000000000000;
      uVar9 = (ulong)((int)uVar9 + 1);
    }
    puVar11 = puVar11 + (int)uVar9;
  }
  if ((uint *)local_78 != puVar11) {
    if (cVar2 != '\0') {
      _fchflags(*(int *)(param_1 + 0x10),local_9c & 0xfffffffd);
    }
    uVar12 = 0;
    iVar4 = _fsetattrlist(*(int *)(param_1 + 0x10),local_128,local_78,(long)puVar11 - (long)local_78
                          ,0);
    if (iVar4 == -1) {
      piVar6 = ___error();
      iVar4 = *piVar6;
      if (iVar4 < 0x3f) {
        uVar12 = 0xf0000019;
        switch(iVar4) {
        case 1:
          uVar12 = 0xf0000007;
          break;
        case 2:
          break;
        default:
switchD_1004e3d67_caseD_3:
          uVar12 = 0xf000001c;
          break;
        case 9:
          uVar12 = 0xf0000012;
          break;
        case 0xd:
        case 0x1e:
          uVar12 = 0xf0000007;
          break;
        case 0xe:
          uVar12 = 0xf0000006;
          break;
        case 0x11:
          uVar12 = 0xf0000017;
          break;
        case 0x14:
          uVar12 = 0xf0000015;
          break;
        case 0x16:
        case 0x1d:
          uVar12 = 0xf0000003;
          break;
        case 0x17:
        case 0x18:
          uVar12 = 0xf000001b;
          break;
        case 0x1c:
          uVar12 = 0xf000000c;
        }
      }
      else if (iVar4 == 0x3f) {
        uVar12 = 0xf0000018;
      }
      else {
        if (iVar4 != 0x42) goto switchD_1004e3d67_caseD_3;
        uVar12 = 0xf000000b;
      }
    }
  }
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
switchD_1004e3a0d_caseD_2:
  if (lVar7 == local_38) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

