
QString * FUN_1007685c0(QString *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  undefined1 local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  long local_38;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_68 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_1007d6bd0(&local_48);
  uVar2 = ((uint)local_47 + ((uint)local_48 * 0x401 >> 6 ^ (uint)local_48 * 0x401)) * 0x401;
  uVar2 = ((uint)local_46 + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_45 + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_44 + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_43 + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_42 + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_41 + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_40 + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_3f + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_3e + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_3d + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_3c + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_3b + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_3a + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = ((uint)local_39 + (uVar2 >> 6 ^ uVar2)) * 0x401;
  uVar2 = (uVar2 >> 6 ^ uVar2) * 9;
  uVar3 = (uVar2 >> 0xb ^ uVar2) * 0x8001;
  uVar2 = uVar3 >> 0x10;
  if ((char)(uVar3 >> 8) == '\0' && (char)uVar3 == '\0') {
    uVar2 = uVar2 & 0xef | 0x10;
  }
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  if (param_2 == 1) {
    QString::fromUtf8_helper((char *)&local_58,0xaf336c);
    QString::operator=(&local_70,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_49 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10076880f;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
  else if (param_2 == 0) {
    QString::fromUtf8_helper((char *)&local_60,0xaf3365);
    QString::operator=(&local_70,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_49 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10076880f;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_10076880f:
  QString::sprintf((char *)&local_68,"%02X%02X%02X",(ulong)(uVar3 & 0xff),(ulong)(uVar3 >> 8 & 0xff)
                   ,(ulong)(uVar2 & 0xff));
  param_1->field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_49 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_49 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100768885;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100768885:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_49 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1007688b5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007688b5:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

