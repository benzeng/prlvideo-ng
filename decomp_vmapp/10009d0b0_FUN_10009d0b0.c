
void FUN_10009d0b0(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  QArrayData *pQVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  QString *pQVar10;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  long *local_40;
  undefined1 local_31;
  
  FUN_100090a50(&local_40,DAT_1011c3698);
  plVar2 = *(long **)(local_40[2] + 0x188);
  local_60 = (Data *)*plVar2;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar7 = (long)*(int *)(local_60 + 8);
      lVar3 = *plVar2;
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_60 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_60 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar7 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar8 * 8);
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
      local_48 = 1;
      plVar2 = *(long **)local_58;
      (**(code **)(*plVar2 + 0xb8))(&local_68,plVar2);
      iVar5 = QString::compare_helper
                        (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),
                         "Default printer",0xffffffff,1);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10009d1fe;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10009d1fe:
      if (iVar5 != 0) {
        if (*(int *)(DAT_1011c3698 + 0x5c0) - 0x80cU < 5) {
          pQVar6 = (QArrayData *)QString::fromAscii_helper("TAG2",4);
        }
        else {
          pQVar6 = (QArrayData *)QString::fromAscii_helper("TAG1",4);
        }
        (**(code **)(*plVar2 + 0xb8))(&local_80,plVar2);
        FUN_10009d990(&local_78,&local_80);
        if (1 < *(int *)pQVar6 + 1U) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + 1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
        }
        local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar6;
        QString::append(&local_70);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10009d2c7;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_10009d2c7:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10009d2f7;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10009d2f7:
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10009d326;
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_10009d326:
        lVar3 = *param_2;
        iVar5 = *(int *)(lVar3 + 8);
        pQVar10 = (QString *)(lVar3 + 0x10 + (long)iVar5 * 8);
        iVar1 = *(int *)(lVar3 + 0xc);
        if (iVar5 == iVar1) {
LAB_10009d380:
          if (pQVar10 != (QString *)(lVar3 + 0x10 + (long)iVar1 * 8)) {
            FUN_10009aa90(param_1,8,plVar2);
          }
        }
        else {
          lVar7 = (long)iVar1 * 8 + (long)iVar5 * -8;
          do {
            cVar4 = operator==(pQVar10,&local_70);
            if (cVar4 != '\0') goto LAB_10009d380;
            pQVar10 = pQVar10 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10009d3d6;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
      }
LAB_10009d3d6:
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009d419;
    }
    QListData::dispose(local_60);
  }
LAB_10009d419:
  if ((*(long *)(param_1 + 0x38) == 0) || (*(long *)(*(long *)(param_1 + 0x38) + 0x10) == 0))
  goto LAB_10009d61c;
  if (*(int *)(DAT_1011c3698 + 0x5c0) - 0x80cU < 5) {
    pQVar6 = (QArrayData *)QString::fromAscii_helper("TAG2",4);
  }
  else {
    pQVar6 = (QArrayData *)QString::fromAscii_helper("TAG1",4);
  }
  (**(code **)(**(long **)(*(long *)(param_1 + 0x38) + 0x10) + 0xb8))(&local_98);
  FUN_10009d990(&local_90,&local_98);
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar6;
  QString::append(&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009d50c;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10009d50c:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009d542;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10009d542:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009d56d;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10009d56d:
  lVar3 = *param_2;
  iVar5 = *(int *)(lVar3 + 8);
  pQVar10 = (QString *)(lVar3 + 0x10 + (long)iVar5 * 8);
  iVar1 = *(int *)(lVar3 + 0xc);
  if (iVar5 == iVar1) {
LAB_10009d5bb:
    if (pQVar10 != (QString *)(lVar3 + 0x10 + (long)iVar1 * 8)) {
      uVar9 = 0;
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
      }
      FUN_10009aa90(param_1,8,uVar9);
    }
  }
  else {
    lVar7 = (long)iVar1 * 8 + (long)iVar5 * -8;
    do {
      cVar4 = operator==(pQVar10,&local_88);
      if (cVar4 != '\0') goto LAB_10009d5bb;
      pQVar10 = pQVar10 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009d61c;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10009d61c:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}

