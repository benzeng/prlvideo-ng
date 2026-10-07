
void FUN_10052fd70(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  QArrayData *pQVar7;
  QArrayData *local_a0;
  QArrayData *local_98;
  int *local_90;
  long *local_88;
  long *local_80;
  undefined4 local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_100532f40(&local_58,param_3);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  iVar6 = 0xc;
  if (local_58[2] != local_58[3]) {
    iVar6 = 0xc;
    do {
      local_40 = 1;
      QString::toUtf8();
      QString::toUtf8();
      iVar1 = *(int *)(local_68 + 4);
      iVar2 = *(int *)(local_60 + 4);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10052fe58;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_10052fe58:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10052fe88;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_10052fe88:
      iVar6 = iVar1 + 0x10 + iVar6 + iVar2;
      local_50 = local_50 + 2;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10052fed4;
    }
    FUN_100533160(&local_58,local_58);
  }
LAB_10052fed4:
  QByteArray::QByteArray((QByteArray *)&local_70,iVar6,'\0');
  if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
  }
  pQVar7 = local_70;
  lVar5 = *(long *)(local_70 + 0x10);
  *(undefined4 *)(local_70 + lVar5) = param_4;
  *(undefined4 *)(local_70 + lVar5 + 4) = param_5;
  *(int *)(local_70 + lVar5 + 8) = *(int *)(*param_3 + 0xc) - *(int *)(*param_3 + 8);
  FUN_100532f40(&local_90);
  local_88 = (long *)(local_90 + (long)local_90[2] * 2 + 4);
  local_80 = (long *)(local_90 + (long)local_90[3] * 2 + 4);
  if (local_90[2] != local_90[3]) {
    pQVar7 = pQVar7 + lVar5 + 0xc;
    do {
      local_78 = 1;
      lVar5 = *local_88;
      QString::toUtf8();
      QString::toUtf8();
      *(undefined4 *)pQVar7 = *(undefined4 *)(lVar5 + 0x10);
      *(undefined4 *)(pQVar7 + 4) = *(undefined4 *)(lVar5 + 0x14);
      *(uint *)(pQVar7 + 8) = *(uint *)(local_98 + 4);
      if ((1 < *(uint *)local_98) || (*(long *)(local_98 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_98,*(uint *)(local_98 + 4) + 1,*(uint *)(local_98 + 8) >> 0x1f);
      }
      _memcpy(pQVar7 + 0xc,local_98 + *(long *)(local_98 + 0x10),(long)(int)*(uint *)(local_98 + 4))
      ;
      uVar3 = *(uint *)(local_98 + 4);
      *(uint *)(pQVar7 + (long)(int)uVar3 + 0xc) = *(uint *)(local_a0 + 4);
      if ((1 < *(uint *)local_a0) || (*(long *)(local_a0 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_a0,*(uint *)(local_a0 + 4) + 1,*(uint *)(local_a0 + 8) >> 0x1f);
      }
      lVar5 = (long)(int)uVar3 + 0x10;
      _memcpy(pQVar7 + lVar5,local_a0 + *(long *)(local_a0 + 0x10),
              (long)(int)*(uint *)(local_a0 + 4));
      iVar6 = *(int *)(local_a0 + 4);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100530091;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
LAB_100530091:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005300c7;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_1005300c7:
      pQVar7 = pQVar7 + iVar6 + lVar5;
      local_88 = local_88 + 1;
    } while (local_88 != local_80);
  }
  local_78 = 1;
  if (*local_90 != -1) {
    if (*local_90 != 0) {
      LOCK();
      *local_90 = *local_90 + -1;
      local_31 = *local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053011d;
    }
    FUN_100533160(&local_90,local_90);
  }
LAB_10053011d:
  if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
  }
  uVar4 = FUN_100519800(param_1,param_2,local_70 + *(long *)(local_70 + 0x10),
                        *(uint *)(local_70 + 4),0,0);
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","VmCliPathResolverHost",3,"sendAnswer result = %d",uVar4);
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_70,1,8);
  }
  return;
}

