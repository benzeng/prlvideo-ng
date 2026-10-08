
void FUN_100105220(undefined8 param_1,char *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QDir local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  if (param_2 != (char *)0x0) {
    _strlen(param_2);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)param_2);
  QFileInfo::QFileInfo(local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010529a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10010529a:
  QFileInfo::dir();
  QDir::path();
  QDir::~QDir(local_58);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_60,&local_68);
  QDir::mkpath(&local_60);
  QDir::~QDir((QDir *)&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010531b;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10010531b:
  QFileInfo::fileName();
  QString::toUtf8();
  lVar2 = _CFStringCreateWithCString(0,local_70 + *(long *)(local_70 + 0x10),0x8000100);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010537c;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10010537c:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001053ac;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001053ac:
  if (lVar2 == 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("PXAPPCORE","prl_client_app",1,"CFStringCreateWithCString() err");
    }
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_1021e1790,0);
  }
  if (param_3 == 1) {
    QString::toUtf8();
    iVar1 = _FSPathCopyObjectSync(param_1,local_88 + *(long *)(local_88 + 0x10),lVar2,0,0);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100105479;
      }
      QArrayData::deallocate(local_88,1,8);
    }
  }
  else {
    iVar1 = 0;
    if (param_3 == 0) {
      QString::toUtf8();
      iVar1 = _FSPathMoveObjectSync(param_1,local_80 + *(long *)(local_80 + 0x10),lVar2,0,0);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100105479;
        }
        QArrayData::deallocate(local_80,1,8);
      }
    }
  }
LAB_100105479:
  _CFRelease(lVar2);
  if (iVar1 != 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("PXAPPCORE","prl_client_app",1,
                    "FSPathXXXObjectSync() err %i, src=\"%s\", dst=\"%s\"",iVar1,param_1,param_2);
    }
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_1021e1790,0);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001054ba;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001054ba:
  QFileInfo::~QFileInfo(local_40);
  return;
}

