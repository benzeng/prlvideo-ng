
undefined1 FUN_10010e760(undefined8 param_1)

{
  int iVar1;
  Data *pDVar2;
  undefined1 uVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  Data *pDVar10;
  long lVar11;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("ccd",3);
  local_48 = pQVar4;
  FUN_1000341d0(&local_40,&local_48);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("iso",3);
  local_50 = pQVar5;
  FUN_1000341d0(&local_40,&local_50);
  pQVar6 = (QArrayData *)QString::fromAscii_helper("dmg",3);
  local_58 = pQVar6;
  FUN_1000341d0(&local_40,&local_58);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("cue",3);
  local_60 = pQVar7;
  FUN_1000341d0(&local_40,&local_60);
  pQVar8 = (QArrayData *)QString::fromAscii_helper("cdr",3);
  local_68 = pQVar8;
  FUN_1000341d0(&local_40,&local_68);
  pQVar9 = (QArrayData *)QString::fromAscii_helper("img",3);
  local_70 = pQVar9;
  FUN_1000341d0(&local_40,&local_70);
  uVar3 = FUN_10010e680(param_1,&local_40);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010e89b;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_10010e89b:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010e8c8;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_10010e8c8:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010e8f3;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10010e8f3:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010e922;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10010e922:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010e94e;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10010e94e:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010e97a;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10010e97a:
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar11 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar4 == 0) {
LAB_10010e9e0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar4 = *(QArrayData **)pDVar10;
            goto LAB_10010e9e0;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return uVar3;
}

