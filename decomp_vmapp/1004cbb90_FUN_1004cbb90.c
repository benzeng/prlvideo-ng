
int FUN_1004cbb90(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  QArrayData *pQVar5;
  uint uVar6;
  QArrayData *local_90;
  uint local_84;
  long *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined1 local_31;
  
  if (*(short *)(param_2 + 0x16) != 2) {
    return -0xffffffd;
  }
  if (*(short *)(param_2 + 0x14) != 0) {
    return -0xffffffd;
  }
  lVar3 = FUN_1002a6120(param_2,0,1);
  if (lVar3 == 0) {
    return -0xffffffd;
  }
  if (*(uint *)(lVar3 + 8) < 0x18) {
    return -0xffffff7;
  }
  FUN_1002a5990(lVar3,0,&local_58,0x18);
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  local_68 = local_48 >> 0xf & 4 |
             (local_48 & 0x10000) << 8 |
             local_48 >> 6 & 0x100 |
             local_48 << 7 & 0x100000 |
             local_48 >> 2 & 0x80 |
             local_48 >> 6 & 4 |
             local_48 >> 4 & 8 |
             (local_48 & 0x40) << 4 |
             (local_48 & 0x20) << 0xc |
             local_48 << 7 & 0x800 | (local_48 & 8) << 6 | local_48 >> 1 & 3;
  FUN_1004cef90(&local_80,*param_1 + 0x48);
  if (local_80 == (long *)0x0) {
    return -0xffffffd;
  }
  lVar4 = FUN_1002a6120(param_2,1,1);
  iVar2 = -0xffffffd;
  if (lVar4 != 0) {
    uVar6 = 0x1000;
    if (*(uint *)(lVar4 + 8) < 0x1001) {
      uVar6 = *(uint *)(lVar4 + 8);
    }
    local_84 = uVar6;
    if ((int)uVar6 < 1) {
      local_90 = (QArrayData *)PTR_shared_null_100ba20d0;
      pQVar5 = (QArrayData *)PTR_shared_null_100ba20d0;
    }
    else {
      pQVar5 = (QArrayData *)QArrayData::allocate(1,8,(long)(int)uVar6,0);
      local_90 = pQVar5;
      if (pQVar5 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar5 + 4) = uVar6;
      ___bzero(pQVar5 + *(long *)(pQVar5 + 0x10),(long)(int)uVar6);
    }
    if (1 < *(uint *)pQVar5) {
      if ((*(uint *)(pQVar5 + 8) & 0x7fffffff) == 0) {
        pQVar5 = (QArrayData *)QArrayData::allocate(1,8,0,2);
        local_90 = pQVar5;
      }
      else {
        FUN_1004d6790(&local_90,*(uint *)(pQVar5 + 4),*(uint *)(pQVar5 + 8) & 0x7fffffff,0);
        pQVar5 = local_90;
      }
    }
    iVar2 = FUN_1004e0d00(local_80,&local_78,pQVar5 + *(long *)(pQVar5 + 0x10),&local_84);
    if (iVar2 == 0) {
      FUN_1002a5a50(lVar4,0,pQVar5 + *(long *)(pQVar5 + 0x10),local_84);
      *(uint *)(lVar4 + 0x10) = local_84;
      local_58 = local_78;
      uStack_54 = uStack_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      local_48 = (local_68 & 4) << 0xf |
                 local_68 >> 8 & 0x10000 |
                 (local_68 & 0x100) << 6 |
                 local_68 >> 7 & 0x2000 |
                 local_68 * 4 & 0x200 |
                 (local_68 & 4) << 6 |
                 (local_68 & 8) << 4 |
                 local_68 >> 4 & 0x40 |
                 local_68 >> 0xc & 0x20 |
                 local_68 >> 7 & 0x10 | local_68 >> 6 & 8 | local_68 * 2 & 6;
      FUN_1002a5a50(lVar3,0,&local_58,0x18);
    }
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004cbea8;
      }
      QArrayData::deallocate(pQVar5,1,8);
    }
  }
LAB_1004cbea8:
  LOCK();
  plVar1 = local_80 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)(*local_80 + 0x10))();
  }
  return iVar2;
}

