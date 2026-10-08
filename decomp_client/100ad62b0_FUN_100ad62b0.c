
void FUN_100ad62b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  Data *pDVar3;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  int local_50 [2];
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  FUN_100adc460(&local_40,param_1 + 0x100);
  if (*(int *)(local_40 + 0xc) - *(int *)(local_40 + 8) != 0) {
    local_48 = (QArrayData *)PTR_shared_null_1021e1288;
    local_50[0] = *(int *)(local_40 + 0xc) - *(int *)(local_40 + 8);
    QByteArray::append((char *)&local_48,(int)local_50);
    if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
      pDVar3 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
      do {
        lVar1 = *(long *)pDVar3;
        local_58 = 0;
        local_78 = 0x100000001;
        _uStack_70 = CONCAT44(*(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x5c));
        local_68 = (ulong)*(uint *)(lVar1 + 0x48);
        uStack_60 = *(undefined8 *)(lVar1 + 0x60);
        QByteArray::append((char *)&local_48,(int)&local_78);
        *(undefined8 *)(lVar1 + 0x60) = 0;
        *(undefined8 *)(lVar1 + 0x58) = 0;
        pDVar3 = pDVar3 + 8;
      } while (pDVar3 != local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f)
      ;
    }
    FUN_100acb230(uVar2,0x11,local_48 + *(long *)(local_48 + 0x10),*(uint *)(local_48 + 4));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ad6419;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_100ad6419:
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

