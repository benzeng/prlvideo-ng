
undefined8 * FUN_1005fc190(undefined8 *param_1,long param_2)

{
  CAppliance *pCVar1;
  int iVar2;
  long lVar3;
  QObject *this;
  long lVar4;
  long lVar5;
  bool bVar6;
  QObject *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar3 = FUN_1005ec990(param_2 + 0x38);
  lVar3 = *(long *)(lVar3 + 0xa0);
  local_58 = *(Data **)(lVar3 + 0x98);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      lVar3 = *(long *)(lVar3 + 0x98);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      pCVar1 = *(CAppliance **)local_50;
      if (pCVar1 != (CAppliance *)0x0) {
        CAppliance::getType();
        iVar2 = QString::compare_helper
                          (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),
                           PTR_s_ModernIE_102275038,0xffffffff,1);
        if (iVar2 == 0) {
          iVar2 = CAppliance::getApplianceOsVer();
          bVar6 = iVar2 != 0;
        }
        else {
          bVar6 = false;
        }
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005fc2dd;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_1005fc2dd:
        if (bVar6) {
          this = operator_new(0x158);
          QObject::QObject(this,(QObject *)0x0);
          *(undefined ***)this = &PTR_FUN_1021f4ce0;
          CAppliance::CAppliance((CAppliance *)(this + 0x10),pCVar1);
          local_68 = this;
          FUN_1000630f0(param_1,&local_68);
        }
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
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

