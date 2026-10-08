
QPixmap * FUN_1003057c0(QPixmap *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  size_t sVar2;
  int iVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  puVar1 = PTR_s___pixmaps_VmIcons_vm_removed_96x_102270f88;
  if ((param_3 - 0x36ccU < 0x13) && ((0x40003U >> (param_3 - 0x36ccU & 0x1f) & 1) != 0)) {
    iVar3 = -1;
    if (PTR_s___pixmaps_VmIcons_vm_removed_96x_102270f88 != (undefined *)0x0) {
      sVar2 = _strlen(PTR_s___pixmaps_VmIcons_vm_removed_96x_102270f88);
      iVar3 = (int)sVar2;
    }
    local_28 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    QPixmap::QPixmap(param_1,&local_28,0,0);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return param_1;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  else {
    CMessageDataProvider::getPixmapForMessage(param_1);
  }
  return param_1;
}

