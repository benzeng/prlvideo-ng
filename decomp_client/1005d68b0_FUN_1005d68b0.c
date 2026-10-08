
undefined1 FUN_1005d68b0(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  undefined1 uVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QRegExp local_28 [15];
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("^[a-z][-a-z0-9]*$",0x11);
  QRegExp::QRegExp(local_28,&local_30,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005d691a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005d691a:
  QLineEdit::text();
  puVar1 = PTR_s_root_10226f240;
  if (*(int *)(local_38 + 4) == 0) {
    *param_2 = 0x80015172;
    uVar4 = 0;
  }
  else {
    iVar2 = -1;
    if (PTR_s_root_10226f240 != (undefined *)0x0) {
      sVar3 = _strlen(PTR_s_root_10226f240);
      iVar2 = (int)sVar3;
    }
    local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
    iVar2 = QString::compare(&local_38,&local_40,1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005d69a8;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1005d69a8:
    if (iVar2 == 0) {
      *param_2 = 0x80015382;
      uVar4 = 0;
    }
    else {
      QString::trimmed();
      iVar2 = QRegExp::indexIn(local_28,&local_48,0,0);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_19 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1005d69fc;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1005d69fc:
      if (iVar2 == 0) {
        *param_2 = 0;
        uVar4 = 1;
      }
      else {
        *param_2 = 0x80015173;
        uVar4 = 0;
      }
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005d6a5a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005d6a5a:
  QRegExp::~QRegExp(local_28);
  return uVar4;
}

