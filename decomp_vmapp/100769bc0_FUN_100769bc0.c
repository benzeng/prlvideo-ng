
long * FUN_100769bc0(long *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  QArrayData *pQVar5;
  uint uVar6;
  uint uVar7;
  QArrayData *pQVar8;
  void *pvVar9;
  long lVar10;
  QArrayData *local_40;
  undefined1 local_34;
  undefined1 local_32;
  undefined1 local_31;
  
  pQVar8 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar1 = _getfsstat_INODE64(0,0,param_2);
  if (iVar1 < 1) {
    *param_1 = (long)pQVar8;
  }
  else {
    uVar2 = iVar1 + 0x14;
    uVar6 = *(uint *)(pQVar8 + 8) & 0x7fffffff;
    lVar4 = 8;
    uVar3 = uVar2;
    if (((int)uVar2 <= (int)uVar6) && (lVar4 = 0, uVar3 = uVar6, -1 < (int)*(uint *)(pQVar8 + 8))) {
      if ((int)uVar2 < (int)(uVar6 >> 1) && (int)uVar2 < *(int *)(pQVar8 + 4)) {
        uVar3 = uVar2;
      }
      lVar4 = (ulong)((int)uVar2 < (int)(uVar6 >> 1) && (int)uVar2 < *(int *)(pQVar8 + 4)) << 3;
    }
    FUN_10077c880(&local_40,uVar2,uVar3,lVar4);
    iVar1 = 1;
LAB_100769c50:
    pQVar8 = local_40;
    uVar3 = *(uint *)local_40;
    if (iVar1 + -1 < 10) {
      if (1 < uVar3) {
        if ((*(uint *)(local_40 + 8) & 0x7fffffff) == 0) {
          local_40 = (QArrayData *)QArrayData::allocate(0x878,8,0,2);
        }
        else {
          FUN_10077c880(&local_40,*(uint *)(local_40 + 4),*(uint *)(local_40 + 8) & 0x7fffffff,0);
        }
      }
      pQVar8 = local_40;
      uVar3 = _getfsstat_INODE64(local_40 + *(long *)(local_40 + 0x10),
                                 *(uint *)(local_40 + 4) * 0x878,param_2);
      if ((int)uVar3 < 1) {
        *param_1 = (long)PTR_shared_null_100ba20d0;
        goto LAB_100769fc2;
      }
      uVar2 = *(uint *)(pQVar8 + 4);
      if ((int)uVar2 < (int)uVar3) goto code_r0x000100769cdc;
      uVar7 = *(uint *)(pQVar8 + 8) & 0x7fffffff;
      lVar4 = 8;
      uVar6 = uVar3;
      if (((int)uVar3 <= (int)uVar7) && (lVar4 = 0, uVar6 = uVar7, -1 < (int)*(uint *)(pQVar8 + 8)))
      {
        if ((int)uVar3 < (int)(uVar7 >> 1) && (int)uVar3 < (int)uVar2) {
          uVar6 = uVar3;
        }
        lVar4 = (ulong)((int)uVar3 < (int)(uVar7 >> 1) && (int)uVar3 < (int)uVar2) << 3;
      }
      FUN_10077c880(&local_40,uVar3,uVar6,lVar4);
      pQVar8 = local_40;
      if (*(uint *)local_40 == 0xffffffff) goto LAB_100769e8b;
      if (*(uint *)local_40 != 0) {
        LOCK();
        *(uint *)local_40 = *(uint *)local_40 + 1;
        local_32 = *(uint *)local_40 != 0;
        UNLOCK();
        goto LAB_100769e8b;
      }
      if ((int)*(uint *)(local_40 + 8) < 0) {
        lVar4 = QArrayData::allocate(0x878,8,*(uint *)(local_40 + 8) & 0x7fffffff,0);
        *param_1 = lVar4;
        if (lVar4 == 0) {
          qBadAlloc();
        }
        *(byte *)(lVar4 + 0xb) = *(byte *)(lVar4 + 0xb) | 0x80;
      }
      else {
        lVar4 = QArrayData::allocate(0x878,8,(long)(int)*(uint *)(local_40 + 4),0);
        *param_1 = lVar4;
        if (lVar4 == 0) {
          lVar4 = 0;
          qBadAlloc();
        }
      }
      if ((*(uint *)(lVar4 + 8) & 0x7fffffff) == 0) goto LAB_100769fc2;
      lVar10 = (long)(int)*(uint *)(pQVar8 + 4) * 0x878;
      if (lVar10 != 0) {
        pQVar5 = pQVar8 + *(long *)(pQVar8 + 0x10);
        pvVar9 = (void *)(lVar4 + *(long *)(lVar4 + 0x10));
        do {
          _memcpy(pvVar9,pQVar5,0x878);
          lVar10 = lVar10 + -0x878;
          pQVar5 = pQVar5 + 0x878;
          pvVar9 = (void *)((long)pvVar9 + 0x878);
        } while (lVar10 != 0);
        goto LAB_100769fa7;
      }
      goto LAB_100769fb7;
    }
    if (uVar3 == 0xffffffff) {
LAB_100769e8b:
      *param_1 = (long)local_40;
      pQVar8 = local_40;
    }
    else if (uVar3 == 0) {
      if ((int)*(uint *)(local_40 + 8) < 0) {
        lVar4 = QArrayData::allocate(0x878,8,*(uint *)(local_40 + 8) & 0x7fffffff,0);
        *param_1 = lVar4;
        if (lVar4 == 0) {
          qBadAlloc();
        }
        *(byte *)(lVar4 + 0xb) = *(byte *)(lVar4 + 0xb) | 0x80;
      }
      else {
        lVar4 = QArrayData::allocate(0x878,8,(long)(int)*(uint *)(local_40 + 4),0);
        *param_1 = lVar4;
        if (lVar4 == 0) {
          lVar4 = 0;
          qBadAlloc();
        }
      }
      if ((*(uint *)(lVar4 + 8) & 0x7fffffff) != 0) {
        lVar10 = (long)(int)*(uint *)(pQVar8 + 4) * 0x878;
        if (lVar10 != 0) {
          pQVar5 = pQVar8 + *(long *)(pQVar8 + 0x10);
          pvVar9 = (void *)(lVar4 + *(long *)(lVar4 + 0x10));
          do {
            _memcpy(pvVar9,pQVar5,0x878);
            lVar10 = lVar10 + -0x878;
            pQVar5 = pQVar5 + 0x878;
            pvVar9 = (void *)((long)pvVar9 + 0x878);
          } while (lVar10 != 0);
LAB_100769fa7:
          lVar4 = *param_1;
        }
LAB_100769fb7:
        *(uint *)(lVar4 + 4) = *(uint *)(pQVar8 + 4);
      }
    }
    else {
      LOCK();
      *(uint *)local_40 = *(uint *)local_40 + 1;
      local_31 = *(uint *)local_40 != 0;
      UNLOCK();
      *param_1 = (long)local_40;
    }
  }
LAB_100769fc2:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_34 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_34) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar8,0x878,8);
  }
  return param_1;
code_r0x000100769cdc:
  FUN_1008e3970("","HostUtils",0,"[%d/10]: mntsize changed between getfstat() calls (was %d now %d)"
                ,iVar1,uVar2 - 0x14,uVar3);
  uVar6 = *(uint *)(pQVar8 + 4) + 0x14;
  uVar2 = *(uint *)(pQVar8 + 8) & 0x7fffffff;
  uVar3 = uVar2;
  if ((int)uVar2 < (int)uVar6) {
    uVar3 = uVar6;
  }
  iVar1 = iVar1 + 1;
  FUN_10077c880(&local_40,uVar6,uVar3,(ulong)((int)uVar2 < (int)uVar6) << 3);
  goto LAB_100769c50;
}

