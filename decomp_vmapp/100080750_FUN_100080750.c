
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100080750(void **param_1,long *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined *puVar4;
  Data *pDVar5;
  uint *puVar6;
  BootDevice *this;
  long lVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  undefined1 auVar12 [16];
  QArrayData *local_68;
  BootDevice *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  puVar6 = *param_1;
  iVar11 = (int)param_1;
  if (1 < *puVar6) {
    uVar1 = puVar6[2];
    pDVar5 = (Data *)QListData::detach(iVar11);
    pvVar2 = *param_1;
    lVar7 = (long)*(int *)((long)pvVar2 + 8);
    if ((puVar6 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar2 + lVar7 * 8)) &&
       (lVar8 = *(int *)((long)pvVar2 + 0xc) - lVar7,
       lVar8 != 0 && lVar7 <= *(int *)((long)pvVar2 + 0xc))) {
      _memcpy((void *)((long)pvVar2 + lVar7 * 8 + 0x10),puVar6 + (long)(int)uVar1 * 2 + 4,lVar8 * 8)
      ;
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        local_31 = *(int *)pDVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000807d5;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_1000807d5:
  puVar10 = *param_1;
  puVar6 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
LAB_1000807f7:
  if (1 < *puVar10) {
    uVar1 = puVar10[2];
    pDVar5 = (Data *)QListData::detach(iVar11);
    pvVar2 = *param_1;
    lVar7 = (long)*(int *)((long)pvVar2 + 8);
    if ((puVar10 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar2 + lVar7 * 8)) &&
       (lVar8 = *(int *)((long)pvVar2 + 0xc) - lVar7,
       lVar8 != 0 && lVar7 <= *(int *)((long)pvVar2 + 0xc))) {
      _memcpy((void *)((long)pvVar2 + lVar7 * 8 + 0x10),puVar10 + (long)(int)uVar1 * 2 + 4,lVar8 * 8
             );
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        local_31 = *(int *)pDVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100080870;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_100080870:
  if (puVar6 != (uint *)((long)*param_1 + (long)*(int *)((long)*param_1 + 0xc) * 8 + 0x10)) {
    lVar7 = FUN_100080d20(*(undefined8 *)puVar6,param_2);
    if (lVar7 == 0) {
      if (*(long **)puVar6 != (long *)0x0) {
        (**(code **)(**(long **)puVar6 + 0x20))();
      }
      puVar6 = *param_1;
      if (1 < *puVar6) {
        uVar1 = puVar6[2];
        pDVar5 = (Data *)QListData::detach(iVar11);
        pvVar2 = *param_1;
        lVar7 = (long)*(int *)((long)pvVar2 + 8);
        if ((puVar6 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar2 + lVar7 * 8)) &&
           (lVar8 = *(int *)((long)pvVar2 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)((long)pvVar2 + 0xc))) {
          _memcpy((void *)((long)pvVar2 + lVar7 * 8 + 0x10),puVar6 + (long)(int)uVar1 * 2 + 4,
                  lVar8 * 8);
        }
        if (*(int *)pDVar5 != -1) {
          if (*(int *)pDVar5 != 0) {
            LOCK();
            *(int *)pDVar5 = *(int *)pDVar5 + -1;
            local_31 = *(int *)pDVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100080937;
          }
          QListData::dispose(pDVar5);
        }
      }
LAB_100080937:
      puVar6 = (uint *)QListData::erase(param_1);
      puVar10 = *param_1;
    }
    else {
      puVar6 = puVar6 + 2;
      puVar10 = *param_1;
    }
    goto LAB_1000807f7;
  }
  local_58 = (Data *)*param_2;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar8 = (long)*(int *)(local_58 + 8);
      lVar7 = *param_2;
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_58 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_58 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar8 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  puVar4 = PTR_DAT_100ba22f0;
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      uVar3 = *(undefined8 *)local_50;
      lVar7 = FUN_100080d20(uVar3,param_1);
      if (lVar7 == 0) {
        this = operator_new(0xd8);
        BootDevice::BootDevice(this);
        auVar12._8_4_ = (int)this;
        auVar12._0_8_ = this;
        auVar12._12_4_ = (int)((ulong)this >> 0x20);
        lVar7 = auVar12._8_8_ + _UNK_100b2d898;
        *(BootDevice **)(this + 0xb8) = this + _DAT_100b2d890;
        *(long *)(this + 0xc0) = lVar7;
        lVar7 = auVar12._8_8_ + _UNK_100b2d8a8;
        *(BootDevice **)(this + 200) = this + _DAT_100b2d8a0;
        *(long *)(this + 0xd0) = lVar7;
        *(undefined **)this = puVar4 + 0x10;
        *(undefined **)(this + 0x10) = puVar4 + 200;
        local_60 = this;
        CBaseNode::toString(SUB81((QTypedArrayData<unsigned_short> *)&local_68,0),
                            (bool)((char)uVar3 + '\x10'));
        CBaseNode::fromString
                  ((CBaseNode *)(this + 0x10),(QTypedArrayData<unsigned_short> *)&local_68,false,
                   (QString *)0x0,(int *)0x0,(int *)0x0);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100080abf;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100080abf:
        FUN_100080e30(param_1,&local_60);
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

