
char FUN_100600480(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QFileInfo::suffix();
  iVar2 = QString::compare_helper
                    (local_28 + *(long *)(local_28 + 0x10),*(undefined4 *)(local_28 + 4),"hds",
                     0xffffffff,1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006004ee;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006004ee:
  if (iVar2 == 0) {
    return '\x01';
  }
  QFileInfo::fileName();
  local_38 = (QArrayData *)QString::fromAscii_helper("DiskDescriptor.xml",0x12);
  cVar1 = QString::startsWith(&local_30,&local_38,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100600560;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100600560:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100600590;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100600590:
  if (cVar1 != '\0') {
    return '\x02';
  }
  QFileInfo::suffix();
  iVar2 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"drh",
                     0xffffffff,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100600600;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100600600:
  if (iVar2 == 0) {
    return '\x03';
  }
  QFileInfo::suffix();
  iVar2 = QString::compare_helper
                    (local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(local_48 + 4),"hdd",
                     0xffffffff,1);
  if (iVar2 == 0) {
    lVar3 = QFileInfo::size();
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006006af;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1006006af:
    if (lVar3 == 0) {
      return '\x04';
    }
  }
  else if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006006b9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006006b9:
  QFileInfo::suffix();
  iVar2 = QString::compare_helper
                    (local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(local_50 + 4),"cache",
                     0xffffffff,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_10060071c;
      local_19 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10060071c:
  return (iVar2 == 0) * '\x05';
}

