
undefined8 * FUN_1000f08f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (0 < param_3) {
    lVar5 = 0;
    do {
      uVar2 = _CFArrayGetValueAtIndex(*param_2,lVar5);
      lVar3 = _LSSharedFileListItemCopyResolvedURL(uVar2,3,0);
      if (lVar3 != 0) {
        cVar1 = _CFURLHasDirectoryPath(lVar3);
        if ((cVar1 == '\0') && (lVar4 = _CFURLCopyFileSystemPath(lVar3,0), lVar4 != 0)) {
          FUN_100deed00(&local_40,lVar4);
          FUN_1000341d0(param_1,&local_40);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000f09aa;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1000f09aa:
          _CFRelease(lVar4);
        }
        _CFRelease(lVar3);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_3);
  }
  return param_1;
}

