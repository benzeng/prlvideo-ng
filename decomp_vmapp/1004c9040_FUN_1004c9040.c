
undefined4 FUN_1004c9040(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint *puVar4;
  QArrayData *pQVar5;
  long lVar6;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar2 = 0xf0000003;
  if ((((*(short *)(param_2 + 0x14) == 0x54) && (*(short *)(param_2 + 0x16) == 1)) &&
      (lVar3 = FUN_1002a6120(param_2,0,0), lVar3 != 0)) &&
     ((0x25 < *(uint *)(lVar3 + 8) && (puVar4 = (uint *)FUN_1002a6010(param_2), *puVar4 < 4)))) {
    FUN_1004ceea0(param_1,puVar4 + 1);
    uVar1 = *(uint *)(lVar3 + 8);
    lVar6 = (long)(int)uVar1;
    if (lVar6 < 1) {
      local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
      pQVar5 = (QArrayData *)PTR_shared_null_100ba20d0;
    }
    else {
      pQVar5 = (QArrayData *)QArrayData::allocate(1,8,lVar6,0);
      local_40 = pQVar5;
      if (pQVar5 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar5 + 4) = uVar1;
      ___bzero(pQVar5 + *(long *)(pQVar5 + 0x10),lVar6);
    }
    if (1 < *(uint *)pQVar5) {
      if ((*(uint *)(pQVar5 + 8) & 0x7fffffff) == 0) {
        pQVar5 = (QArrayData *)QArrayData::allocate(1,8,0,2);
        local_40 = pQVar5;
      }
      else {
        FUN_1004d6790(&local_40,*(uint *)(pQVar5 + 4),*(uint *)(pQVar5 + 8) & 0x7fffffff,0);
        pQVar5 = local_40;
      }
    }
    FUN_1002a5990(lVar3,0,pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(lVar3 + 8));
    if (1 < *(uint *)pQVar5) {
      if ((*(uint *)(pQVar5 + 8) & 0x7fffffff) == 0) {
        pQVar5 = (QArrayData *)QArrayData::allocate(1,8,0,2);
        local_40 = pQVar5;
      }
      else {
        FUN_1004d6790(&local_40,*(uint *)(pQVar5 + 4),*(uint *)(pQVar5 + 8) & 0x7fffffff,0);
        pQVar5 = local_40;
      }
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uVar2 = FUN_1004cedf0(param_1,pQVar5 + *(long *)(pQVar5 + 0x10),&local_98);
    _memcpy(puVar4 + 4,&local_98,0x44);
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[0] = 0;
    puVar4[1] = 0;
    if (local_58._4_1_ != '\0') {
      *puVar4 = 0x80000000;
      *(undefined8 *)(puVar4 + 1) = uStack_50;
    }
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) {
          return uVar2;
        }
      }
      QArrayData::deallocate(pQVar5,1,8);
    }
  }
  return uVar2;
}

