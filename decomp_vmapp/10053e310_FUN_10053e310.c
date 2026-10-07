
QString * FUN_10053e310(QString *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  QArrayData *local_450;
  QString local_448;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_38 = lVar1;
  lVar3 = _CFBundleGetMainBundle();
  if (lVar3 == 0) goto LAB_10053e4ed;
  lVar3 = _CFBundleCopyAuxiliaryExecutableURL(lVar3,&cf_ParallelsInverseSharing_app);
  if (lVar3 == 0) {
    FUN_1008e3970("","InvSharingHost",0,"failed to get Parallels Inverse Sharing.app url");
    goto LAB_10053e4ed;
  }
  lVar4 = _CFBundleCreate(0,lVar3);
  _CFRelease(lVar3);
  if (lVar4 == 0) {
    FUN_1008e3970("","InvSharingHost",0,"failed to create bundle");
    goto LAB_10053e4ed;
  }
  lVar3 = _CFBundleCopyExecutableURL(lVar4);
  _CFRelease(lVar4);
  if (lVar3 == 0) {
    FUN_1008e3970("","InvSharingHost",0,"failed to get executable from a bundle");
    goto LAB_10053e4ed;
  }
  cVar2 = _CFURLGetFileSystemRepresentation(lVar3,1,local_438,0x400);
  if (cVar2 != '\0') {
    _strlen(local_438);
    QString::fromUtf8_helper((char *)&local_450,(int)local_438);
    QString::normalized(&local_448,&local_450,1,0);
    QString::operator=(param_1,&local_448);
    if (*(int *)local_448.field0_0x0 != -1) {
      if (*(int *)local_448.field0_0x0 != 0) {
        LOCK();
        *(int *)local_448.field0_0x0 = *(int *)local_448.field0_0x0 + -1;
        local_439 = *(int *)local_448.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_10053e449;
      }
      QArrayData::deallocate((QArrayData *)local_448.field0_0x0,2,8);
    }
LAB_10053e449:
    if (*(int *)local_450 != -1) {
      if (*(int *)local_450 != 0) {
        LOCK();
        *(int *)local_450 = *(int *)local_450 + -1;
        local_439 = *(int *)local_450 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_10053e485;
      }
      QArrayData::deallocate(local_450,2,8);
    }
  }
LAB_10053e485:
  _CFRelease(lVar3);
LAB_10053e4ed:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

