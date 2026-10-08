
void FUN_100ac41f0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  Data *pDVar9;
  ulong uVar10;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  QRegion local_88 [8];
  QRegion local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  QRegion local_60 [8];
  QArrayData *local_58;
  undefined4 local_4c;
  long local_48;
  Data *local_40;
  undefined1 local_31;
  
  pDVar9 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100d7b0d0(&local_48);
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    plVar7 = (long *)(local_48 + 0x10 + (long)*(int *)(local_48 + 8) * 8);
    do {
      FUN_100129840(&local_40,*plVar7 + 4);
      plVar7 = plVar7 + 1;
      pDVar9 = local_40;
    } while (plVar7 != (long *)(local_48 + 0x10 + (long)*(int *)(local_48 + 0xc) * 8));
  }
  if (*(int *)(pDVar9 + 0xc) == *(int *)(pDVar9 + 8)) {
    local_58 = (QArrayData *)PTR_shared_null_1021e1288;
    local_4c = FUN_100d7b000(&local_58);
    FUN_100129840(&local_40,&local_4c);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ac42b5;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_100ac42b5:
  QRegion::QRegion(local_60);
  uVar1 = *(uint *)(param_1 + 0x900);
  if ((ulong)uVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x908);
    uVar10 = 0;
    do {
      plVar7 = (long *)FUN_100adb590(param_1 + 0x100,*(undefined4 *)(lVar3 + uVar10 * 4));
      lVar4 = *plVar7;
      if (((lVar4 != 0) && ((*(ushort *)(lVar4 + 0x18) & 0x4061) == 0)) &&
         (iVar6 = FUN_100d7b300(*(undefined4 *)(lVar4 + 0x48)), -1 < iVar6)) {
        local_78 = *(undefined8 *)(lVar4 + 0x28);
        uStack_70 = *(undefined8 *)(lVar4 + 0x30);
        iVar2 = *(int *)(local_40 + 8);
        if (iVar2 != *(int *)(local_40 + 0xc)) {
          pDVar9 = local_40 + (long)iVar2 * 8 + 0x10;
          lVar8 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar2 * -8;
          do {
            if (*(int *)pDVar9 == iVar6) {
              cVar5 = QRegion::intersects((QRect *)local_60);
              if (cVar5 != '\0') {
                QRegion::QRegion(local_88,&local_78,0);
                QRegion::subtracted(local_80);
                QRegion::operator=(local_60,local_80);
                QRegion::~QRegion(local_80);
                QRegion::~QRegion(local_88);
                local_98 = *(undefined4 *)(lVar4 + 8);
                local_94 = 0;
                local_90 = 0;
                local_8c = 0;
                FUN_100acb230(*(undefined8 *)(param_1 + 0x10),4,&local_98,0x10);
              }
              goto LAB_100ac4370;
            }
            pDVar9 = pDVar9 + 8;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
        QRegion::operator+=(local_60,(QRect *)&local_78);
      }
LAB_100ac4370:
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar1);
  }
  QRegion::~QRegion(local_60);
  FUN_100ac9ea0(&local_48);
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

