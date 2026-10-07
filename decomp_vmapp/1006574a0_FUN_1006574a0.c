
void FUN_1006574a0(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  QString this;
  QArrayData *pQVar5;
  long lVar6;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QTypedArrayData<unsigned_short> *local_60;
  uint *local_58;
  uint *local_50;
  uint *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_100ba2188;
  local_48 = (uint *)PTR_shared_null_100ba2188;
  local_50 = (uint *)PTR_shared_null_100ba2188;
  local_58 = (uint *)PTR_shared_null_100ba2188;
  FUN_100643320();
  uVar4 = local_50[2];
  uVar1 = local_50[3];
  if ((local_48[3] - local_48[2] != uVar1 - uVar4) ||
     (local_48[3] - local_48[2] != local_58[3] - local_58[2])) {
    FUN_1008e3970("","pvsHostInfo",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "names.size() == ids.size() && ids.size() == resolutiuons.size()",
                  "CHostInfo_mac.cpp",0x4d4,"GetSharedCameraList");
    uVar4 = local_50[2];
    uVar1 = local_50[3];
  }
  puVar3 = PTR_nothrow_100ba21c8;
  if ((int)uVar4 < (int)uVar1) {
    lVar6 = 0;
    do {
      this.field0_0x0 = operator_new(0xc0,(nothrow_t *)puVar3);
      if (this.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
        local_60 = (QTypedArrayData<unsigned_short> *)0x0;
        if (1 < *local_48) {
          FUN_100022c80(&local_48,local_48[1]);
        }
        QString::toUtf8();
        pQVar5 = local_68 + *(long *)(local_68 + 0x10);
        if (1 < *local_50) {
          FUN_100022c80(&local_50,local_50[1]);
        }
        QString::toUtf8();
        FUN_1008e3970("","pvsHostInfo",0,"Error allocating memory for shared camera info: %s ID %s",
                      pQVar5,local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100657818;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_100657818:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100657850;
          }
          QArrayData::deallocate(local_68,1,8);
        }
      }
      else {
        CHwSharedCamera::CHwSharedCamera((CHwSharedCamera *)this.field0_0x0);
        pcVar2 = *(code **)(*(long *)this.field0_0x0 + 0xa0);
        local_60 = this.field0_0x0;
        if (1 < *local_48) {
          FUN_100022c80(&local_48,local_48[1]);
        }
        local_78 = *(QArrayData **)(local_48 + ((int)local_48[2] + lVar6) * 2 + 4);
        if (1 < *(int *)local_78 + 1U) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + 1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
        }
        (*pcVar2)(this.field0_0x0,&local_78);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100657643;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100657643:
        pcVar2 = *(code **)(*(long *)this.field0_0x0 + 0xb0);
        if (1 < *local_50) {
          FUN_100022c80(&local_50,local_50[1]);
        }
        local_80 = *(QArrayData **)(local_50 + ((int)local_50[2] + lVar6) * 2 + 4);
        if (1 < *(int *)local_80 + 1U) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + 1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
        }
        (*pcVar2)(this.field0_0x0,&local_80);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006576c1;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1006576c1:
        if (1 < *local_58) {
          FUN_100022c80(&local_58,local_58[1]);
        }
        pQVar5 = *(QArrayData **)(local_58 + ((int)local_58[2] + lVar6) * 2 + 4);
        if (1 < *(int *)pQVar5 + 1U) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + 1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
        }
        CHwSharedCamera::setResolutions(this);
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100657737;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_100657737:
        FUN_10065c6f0(&local_40,&local_60);
      }
LAB_100657850:
      lVar6 = lVar6 + 1;
    } while (lVar6 < (long)(int)local_50[3] - (long)(int)local_50[2]);
  }
  FUN_10065c750(param_1,&local_40,*(undefined8 *)(*(long *)(param_1 + 0x18) + 400));
  FUN_100013180(&local_58);
  FUN_100013180(&local_50);
  FUN_100013180(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

