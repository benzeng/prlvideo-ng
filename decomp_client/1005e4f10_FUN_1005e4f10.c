
void FUN_1005e4f10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QLocale local_98 [8];
  QArrayData *local_90;
  QUrl local_88 [8];
  QArrayData *local_80;
  undefined1 local_78 [48];
  undefined1 local_48 [47];
  undefined1 local_19;
  
  uVar1 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  local_80 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar1 = FUN_1005b8a40(uVar1,&local_80);
  FUN_100746cb0(local_78,uVar1,param_2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005e4f91;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005e4f91:
  QLocale::QLocale(local_98);
  FUN_100d3f730(&local_90,local_48,local_98);
  QUrl::QUrl(local_88,&local_90,0);
  QDesktopServices::openUrl(local_88);
  QUrl::~QUrl(local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005e500e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005e500e:
  QLocale::~QLocale(local_98);
  FUN_100252e70(local_78);
  return;
}

