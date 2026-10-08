
undefined4 FUN_100a4a6c0(undefined8 param_1,undefined4 param_2,int param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  QArrayData *pQVar9;
  QArrayData *local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_58 = (int *)*param_4;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar8 = local_58[2];
      if (iVar8 != local_58[3]) {
        puVar6 = (undefined8 *)(*param_4 + 0x10 + (long)*(int *)(*param_4 + 8) * 8);
        piVar7 = local_58 + (long)iVar8 * 2 + 4;
        lVar4 = (long)local_58[3] * 8 + (long)iVar8 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  iVar8 = 0xc;
  if (local_58[2] != local_58[3]) {
    iVar8 = 0xc;
    do {
      local_40 = 1;
      QString::toUtf8();
      iVar1 = *(int *)(local_60 + 4);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a4a7dc;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_100a4a7dc:
      iVar8 = iVar8 + 4 + iVar1;
      local_50 = local_50 + 2;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  FUN_100036370(&local_58);
  QByteArray::QByteArray((QByteArray *)&local_68,iVar8,'\0');
  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
  }
  pQVar9 = local_68;
  lVar4 = *(long *)(local_68 + 0x10);
  *(undefined4 *)(local_68 + lVar4) = param_2;
  *(uint *)(local_68 + lVar4 + 4) = (param_3 == 0) + 1;
  local_88 = (int *)*param_4;
  *(int *)(local_68 + lVar4 + 8) = local_88[3] - local_88[2];
  if (*local_88 != -1) {
    if (*local_88 == 0) {
      QListData::detach((int)&local_88);
      iVar8 = local_88[2];
      if (iVar8 != local_88[3]) {
        puVar6 = (undefined8 *)(*param_4 + 0x10 + (long)*(int *)(*param_4 + 8) * 8);
        piVar7 = local_88 + (long)iVar8 * 2 + 4;
        lVar5 = (long)local_88[3] * 8 + (long)iVar8 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_88 = *local_88 + 1;
      local_31 = *local_88 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)local_88[2] * 2 + 4;
  local_78 = local_88 + (long)local_88[3] * 2 + 4;
  if (local_88[2] != local_88[3]) {
    pQVar9 = pQVar9 + lVar4 + 0xc;
    do {
      local_70 = 1;
      QString::toUtf8();
      *(uint *)pQVar9 = *(uint *)(local_90 + 4);
      if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
      }
      _memcpy(pQVar9 + 4,local_90 + *(long *)(local_90 + 0x10),(long)(int)*(uint *)(local_90 + 4));
      iVar8 = *(int *)(local_90 + 4);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a4a9a8;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_100a4a9a8:
      pQVar9 = pQVar9 + (long)iVar8 + 4;
      local_80 = local_80 + 2;
    } while (local_80 != local_78);
  }
  local_70 = 1;
  FUN_100036370(&local_88);
  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
  }
  uVar3 = FUN_100a4a170(param_1,local_68 + *(long *)(local_68 + 0x10),*(uint *)(local_68 + 4));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,1,8);
  }
  return uVar3;
}

