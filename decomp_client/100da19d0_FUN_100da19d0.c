
bool FUN_100da19d0(QString *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  bool bVar7;
  QArrayData *local_260;
  QFileInfo local_258 [8];
  QArrayData *local_250;
  QArrayData *local_248;
  undefined1 local_239;
  char local_238 [520];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar2;
  QFileInfo::QFileInfo(local_258,param_1);
  QFileInfo::fileName();
  QString::toUtf8();
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0;
  lVar5 = _IOBSDNameMatching(uVar1,0,local_248 + *(long *)(local_248 + 0x10));
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_239 = *(int *)local_248 != 0;
      UNLOCK();
      if ((bool)local_239) goto LAB_100da1a89;
    }
    QArrayData::deallocate(local_248,1,8);
  }
LAB_100da1a89:
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_239 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_239) goto LAB_100da1ac5;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_100da1ac5:
  QFileInfo::~QFileInfo(local_258);
  if ((lVar5 != 0) && (iVar3 = _IOServiceGetMatchingService(uVar1,lVar5), iVar3 != 0)) {
    iVar4 = _IORegistryEntryGetPath(iVar3,"IOService",local_238);
    _IOObjectRelease(iVar3);
    if (iVar4 == 0) {
      sVar6 = _strlen(local_238);
      local_260 = (QArrayData *)QString::fromLatin1_helper(local_238,(int)sVar6);
      iVar3 = QString::indexOf(&local_260,param_2,0,1);
      bVar7 = iVar3 != -1;
      if (*(int *)local_260 != -1) {
        if (*(int *)local_260 != 0) {
          LOCK();
          *(int *)local_260 = *(int *)local_260 + -1;
          local_239 = *(int *)local_260 != 0;
          UNLOCK();
          if ((bool)local_239) goto LAB_100da1b0d;
        }
        QArrayData::deallocate(local_260,2,8);
      }
      goto LAB_100da1b0d;
    }
  }
  bVar7 = false;
LAB_100da1b0d:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar7;
}

