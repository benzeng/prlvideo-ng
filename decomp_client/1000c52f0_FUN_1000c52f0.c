
void FUN_1000c52f0(void)

{
  int iVar1;
  QArrayData *local_40;
  cfstringStruct *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("lnk",3);
  FUN_1000c5530(&local_20,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000c534b;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000c534b:
  local_30 = (QArrayData *)QString::fromAscii_helper("com.parallels.SharedAppLink.Agent",0x21);
  iVar1 = QString::compare(&local_20,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000c53a1;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000c53a1:
  if (iVar1 != 0) {
    local_38 = &cf_com_parallels_SharedAppLink_Agent;
    local_40 = (QArrayData *)QString::fromAscii_helper("lnk",3);
    FUN_1000c5610(&local_38,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_11 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1000c5402;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1000c5402:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

