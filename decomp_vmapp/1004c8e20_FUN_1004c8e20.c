
undefined4 FUN_1004c8e20(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  void *pvVar5;
  ulong uVar6;
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
  if (((*(short *)(param_2 + 0x14) == 0x44) && (*(short *)(param_2 + 0x16) == 1)) &&
     (lVar3 = FUN_1002a6120(param_2,0,0), lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 8);
    uVar6 = (ulong)(int)uVar1;
    if (0x25 < uVar6) {
      if ((int)uVar1 < 1) {
        local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
        pQVar4 = (QArrayData *)PTR_shared_null_100ba20d0;
      }
      else {
        pQVar4 = (QArrayData *)QArrayData::allocate(1,8,uVar6,0);
        local_40 = pQVar4;
        if (pQVar4 == (QArrayData *)0x0) {
          qBadAlloc();
        }
        *(uint *)(pQVar4 + 4) = uVar1;
        ___bzero(pQVar4 + *(long *)(pQVar4 + 0x10),uVar6);
      }
      if (1 < *(uint *)pQVar4) {
        if ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == 0) {
          pQVar4 = (QArrayData *)QArrayData::allocate(1,8,0,2);
          local_40 = pQVar4;
        }
        else {
          FUN_1004d6790(&local_40,*(uint *)(pQVar4 + 4),*(uint *)(pQVar4 + 8) & 0x7fffffff,0);
          pQVar4 = local_40;
        }
      }
      FUN_1002a5990(lVar3,0,pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(lVar3 + 8));
      if (1 < *(uint *)pQVar4) {
        if ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == 0) {
          pQVar4 = (QArrayData *)QArrayData::allocate(1,8,0,2);
          local_40 = pQVar4;
        }
        else {
          FUN_1004d6790(&local_40,*(uint *)(pQVar4 + 4),*(uint *)(pQVar4 + 8) & 0x7fffffff,0);
          pQVar4 = local_40;
        }
      }
      lVar3 = *(long *)(pQVar4 + 0x10);
      pvVar5 = (void *)FUN_1002a6010(param_2);
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
      uVar2 = FUN_1004cedf0(param_1,pQVar4 + lVar3,&local_98);
      _memcpy(pvVar5,&local_98,0x44);
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) {
            return uVar2;
          }
        }
        QArrayData::deallocate(pQVar4,1,8);
      }
    }
  }
  return uVar2;
}

