
undefined8 FUN_100199b90(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  long local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = 0;
  _PrlApi_CreateStringsList(&local_40);
  local_60 = (Data *)*param_3;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = *(int *)(local_60 + 8);
      if (iVar1 != *(int *)(local_60 + 0xc)) {
        puVar5 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
        pDVar6 = local_60 + (long)iVar1 * 8 + 0x10;
        lVar3 = (long)*(int *)(local_60 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *(int **)pDVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar6 = pDVar6 + 8;
          puVar5 = puVar5 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      lVar3 = local_40;
      local_48 = 1;
      QString::toUtf8();
      _PrlStrList_AddItem(lVar3,local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100199cbc;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_100199cbc:
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  pDVar6 = local_60;
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100199d61;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar3 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_60 + (long)iVar1 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100199d40:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100199d40;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100199d61:
  FUN_10018c250(&local_70,param_1);
  lVar3 = local_70;
  QString::toUtf8();
  uVar4 = _PrlVm_InternalCommand(lVar3,local_78 + *(long *)(local_78 + 0x10),local_40);
  local_80 = 0x80000000;
  local_88.field7 = 0;
  uVar4 = FUN_100191960(param_1,uVar4,0x888,&local_88);
  QVariant::~QVariant((QVariant *)&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100199df0;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100199df0:
  if (local_70 != 0) {
    _PrlHandle_Free();
  }
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return uVar4;
}

