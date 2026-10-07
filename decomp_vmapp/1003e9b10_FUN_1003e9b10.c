
int FUN_1003e9b10(long param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  wstring local_78 [4];
  undefined1 local_74 [12];
  int local_68;
  QArrayData *local_60;
  wstring local_58 [4];
  undefined1 local_54 [12];
  int local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  iVar3 = *(int *)local_30.field0_0x0;
  local_38.field0_0x0 = local_30.field0_0x0;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
    iVar3 = *(int *)local_38.field0_0x0;
  }
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  iVar3 = QString::lastIndexOf(&local_30,0x2e,0xffffffff,1);
  QString::remove((int)&local_30,iVar3);
  _wcslen(L".img");
  std::wstring::__init((wchar_t *)local_58,0x100b40620);
  if (((byte)local_58[0] & 1) == 0) {
    local_48 = (int)local_54;
  }
  QString::fromUcs4((uint *)&local_40,local_48);
  QString::append(&local_30);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003e9bfe;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003e9bfe:
  std::wstring::~wstring(local_58);
  iVar3 = (**(code **)(**(long **)(param_1 + 0x128) + 0x10))(*(long **)(param_1 + 0x128),param_2);
  if (iVar3 != -1) {
    FUN_1003e10b0(param_1,&local_30);
    cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x98))();
    if (cVar1 != '\0') {
      iVar3 = QString::lastIndexOf(&local_38,0x2e,0xffffffff,1);
      QString::remove((int)&local_38,iVar3);
      _wcslen(L".sub");
      std::wstring::__init((wchar_t *)local_78,0x100b40634);
      if (((byte)local_78[0] & 1) == 0) {
        local_68 = (int)local_74;
      }
      QString::fromUcs4((uint *)&local_60,local_68);
      QString::append(&local_38);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_21 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1003e9cfe;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1003e9cfe:
      std::wstring::~wstring(local_78);
      (**(code **)(**(long **)(param_1 + 0x138) + 0x18))
                (*(long **)(param_1 + 0x138),&local_38,1,1,0,4);
    }
  }
  bVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x98))();
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003e9d6f;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1003e9d6f:
  iVar3 = (int)((uint)(byte)~bVar2 << 0x1f) >> 0x1f;
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return iVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return iVar3;
}

