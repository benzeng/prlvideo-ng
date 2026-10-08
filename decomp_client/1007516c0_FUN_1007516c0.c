
undefined8 * FUN_1007516c0(undefined8 *param_1,undefined8 param_2,QString *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  QFileInfo *pQVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_88;
  QFileInfo local_80 [8];
  Data *local_78;
  QFileInfo *local_70;
  QFileInfo *local_68;
  uint local_60;
  Data *local_58;
  QDir local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("vpc6",4);
  cVar2 = QString::endsWith(param_3,&local_40,1);
  cVar3 = '\x01';
  if (cVar2 == '\0') {
    local_48 = (QArrayData *)QString::fromAscii_helper("vpc7",4);
    cVar3 = QString::endsWith(param_3,&local_48,1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10075175b;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10075175b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075178b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10075178b:
  if (cVar3 != '\0') {
    pQVar1 = param_3->field0_0x0;
    *param_1 = pQVar1;
    if (*(int *)pQVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
    return param_1;
  }
  QDir::QDir(local_50,param_3);
  QDir::entryInfoList(&local_58,local_50,0x600a,0xffffffff);
  FUN_100055060(&local_78,&local_58);
  local_70 = (QFileInfo *)(local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10);
  local_68 = (QFileInfo *)(local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10);
  local_60 = 1;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      QFileInfo::QFileInfo(local_80,local_70);
      iVar8 = 5;
      if (local_60 != 0) {
        QFileInfo::suffix();
        iVar4 = QString::compare_helper
                          (local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),"vmx"
                           ,0xffffffff,1);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10075189a;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_10075189a:
        if (iVar4 == 0) {
          iVar8 = 1;
          QFileInfo::absoluteFilePath();
        }
        else {
          local_60 = 0;
        }
      }
      QFileInfo::~QFileInfo(local_80);
      if (iVar8 != 5) goto LAB_1007518fb;
      local_70 = local_70 + 8;
      uVar6 = local_60 ^ 1;
      bVar10 = local_60 != 1;
      local_60 = uVar6;
    } while ((bVar10) && (local_70 != local_68));
  }
  iVar8 = 2;
LAB_1007518fb:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075195a;
    }
    iVar4 = *(int *)(local_78 + 0xc);
    if (iVar4 != *(int *)(local_78 + 8)) {
      lVar9 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar4 * -8;
      pQVar7 = (QFileInfo *)(local_78 + (long)iVar4 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_78);
  }
LAB_10075195a:
  if (iVar8 == 2) {
    uVar5 = QString::fromAscii_helper("",0);
    *param_1 = uVar5;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007519da;
    }
    iVar8 = *(int *)(local_58 + 0xc);
    if (iVar8 != *(int *)(local_58 + 8)) {
      lVar9 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar8 * -8;
      pQVar7 = (QFileInfo *)(local_58 + (long)iVar8 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_1007519da:
  QDir::~QDir(local_50);
  return param_1;
}

