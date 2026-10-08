
bool FUN_100d2de40(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  local_30 = (QArrayData *)QString::fromAscii_helper("Firmware",8);
  QDomNode::firstChildElement(&local_28);
  local_38 = (QArrayData *)QString::fromAscii_helper("type",4);
  cVar1 = FUN_100d2d080();
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    local_40 = (QArrayData *)QString::fromAscii_helper("EFI",3);
    iVar2 = QString::compare(&local_20,&local_40,1);
    bVar3 = iVar2 == 0;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_11 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100d2df4e;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100d2df4e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d2df7e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d2df7e:
  QDomNode::~QDomNode((QDomNode *)&local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d2dfb7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d2dfb7:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return bVar3;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return bVar3;
}

