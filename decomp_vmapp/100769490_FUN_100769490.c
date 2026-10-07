
void FUN_100769490(void)

{
  long lVar1;
  short sVar2;
  int iVar3;
  QArrayData *local_118;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108 [84];
  ushort local_b4;
  undefined1 local_70 [80];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  QString::toUtf8();
  if ((1 < *(uint *)local_118) || (*(long *)(local_118 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_118,*(uint *)(local_118 + 4) + 1,*(uint *)(local_118 + 8) >> 0x1f);
  }
  iVar3 = _FSPathMakeRef(local_118 + *(long *)(local_118 + 0x10),local_70,&local_10a);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_109 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_109) goto LAB_100769541;
    }
    QArrayData::deallocate(local_118,1,8);
  }
LAB_100769541:
  if (((iVar3 == 0) && (sVar2 = _FSGetCatalogInfo(local_70,0x800,local_108,0,0,0), sVar2 == 0)) &&
     ((local_b4 & 0x2000) == 0)) {
    local_b4 = local_b4 | 0x2000;
    _FSSetCatalogInfo(local_70,0x800,local_108);
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

