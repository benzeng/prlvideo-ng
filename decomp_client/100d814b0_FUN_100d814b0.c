
undefined8 * FUN_100d814b0(undefined8 *param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  QArrayData *local_78;
  QDir local_70 [8];
  QString local_68;
  QFileInfo local_60 [8];
  QFileInfo local_58 [8];
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar4 = _CFBundleGetMainBundle();
  if ((lVar4 != 0) && (lVar5 = _CFBundleCopyBundleURL(lVar4), lVar5 != 0)) {
    lVar6 = _CFURLCopyFileSystemPath(lVar5,0);
    if (lVar6 != 0) {
      FUN_100deed00(&local_48,lVar6);
      QString::operator=(&local_40,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d81552;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_100d81552:
      _CFRelease(lVar6);
    }
    _CFRelease(lVar5);
    if (*(int *)(local_40.field0_0x0 + 4) != 0) {
      if (param_2 != '\0') {
        lVar4 = _CFBundleCopyExecutableURL(lVar4);
        if (lVar4 == 0) {
LAB_100d81709:
          bVar1 = false;
        }
        else {
          lVar5 = _CFURLCopyFileSystemPath(lVar4,0);
          if (lVar5 == 0) {
LAB_100d816ef:
            bVar2 = false;
          }
          else {
            FUN_100deed00(&local_50,lVar5);
            if (*(int *)(local_50.field0_0x0 + 4) == 0) {
LAB_100d816b1:
              bVar1 = false;
            }
            else {
              QFileInfo::QFileInfo(local_58,&local_50);
              QDir::QDir(local_70,&local_40);
              QFileInfo::fileName();
              QDir::absoluteFilePath(&local_68);
              QFileInfo::QFileInfo(local_60,&local_68);
              cVar3 = QFileInfo::operator==(local_60,local_58);
              QFileInfo::~QFileInfo(local_60);
              if (*(int *)local_68.field0_0x0 != -1) {
                if (*(int *)local_68.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                  local_31 = *(int *)local_68.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d8164b;
                }
                QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
              }
LAB_100d8164b:
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_31 = *(int *)local_78 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d8167b;
                }
                QArrayData::deallocate(local_78,2,8);
              }
LAB_100d8167b:
              QDir::~QDir(local_70);
              if (cVar3 != '\0') {
                *param_1 = PTR_shared_null_1021e1288;
              }
              QFileInfo::~QFileInfo(local_58);
              bVar1 = true;
              if (cVar3 == '\0') goto LAB_100d816b1;
            }
            if (*(int *)local_50.field0_0x0 != -1) {
              if (*(int *)local_50.field0_0x0 != 0) {
                LOCK();
                *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
                local_31 = *(int *)local_50.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d816e4;
              }
              QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
            }
LAB_100d816e4:
            bVar2 = true;
            if (!bVar1) goto LAB_100d816ef;
          }
          if (lVar5 != 0) {
            _CFRelease(lVar5);
          }
          bVar1 = true;
          if (!bVar2) goto LAB_100d81709;
        }
        if (lVar4 != 0) {
          _CFRelease(lVar4);
        }
        if (bVar1) goto LAB_100d81742;
      }
      *param_1 = local_40.field0_0x0;
      if (1 < *(int *)local_40.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
      }
      goto LAB_100d81742;
    }
  }
  *param_1 = PTR_shared_null_1021e1288;
LAB_100d81742:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

