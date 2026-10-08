
QString * FUN_1000463e0(QString *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  string local_88;
  char local_87 [7];
  uint local_80;
  char *local_78;
  QArrayData *local_70;
  string local_68;
  undefined1 local_67 [15];
  undefined1 *local_58;
  QArrayData *local_50;
  string local_48;
  undefined1 local_47 [15];
  undefined1 *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QString::toUtf8();
  FUN_100ab9e30(&local_48,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100046443;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100046443:
  QString::toUtf8();
  FUN_100ab9ec0(&local_68,local_70 + *(long *)(local_70 + 0x10));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100046490;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_100046490:
  if (((byte)local_48 & 1) == 0) {
    local_38 = local_47;
  }
  if (((byte)local_68 & 1) == 0) {
    local_58 = local_67;
  }
  FUN_100ab9f70(&local_88,local_38,local_58);
  if (((byte)local_88 & 1) == 0) {
    local_80 = (uint)((byte)local_88 >> 1);
    local_78 = local_87;
  }
  if ((local_78 != (char *)0x0) && (local_80 == 0xffffffff)) {
    _strlen(local_78);
  }
  QString::fromUtf8_helper((char *)param_1,(int)local_78);
  if (param_4 != '\0') {
    QString::fromUtf8_helper((char *)&local_30,0x1db6c55);
    QString::append(param_1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100046549;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_100046549:
  std::string::~string(&local_88);
  std::string::~string(&local_68);
  std::string::~string(&local_48);
  return param_1;
}

