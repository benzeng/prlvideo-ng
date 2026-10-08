
void FUN_1009c9c90(long *param_1)

{
  long lVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(int *)(*param_1 + 4) == 0) goto LAB_1009c9daf;
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","PTProblemReporting",2,"Creating crash handler, report tool \'%s\'",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009c9d1c;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_1009c9d1c:
  QString::normalized(&local_28,param_1,0,0);
  QString::toUtf8();
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009c9d6b;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009c9d6b:
  std::string::assign(&DAT_102313728);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009c9daf;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1009c9daf:
  lVar1 = FUN_1009ccd50(0,FUN_1009cd860,FUN_1009c9ec0,FUN_1009cee40);
  if (lVar1 == 0) {
    FUN_100df99c0("","PTProblemReporting",0,"Error : Failed to create application crash handler.");
  }
  return;
}

