
void FUN_100468cd0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  uVar2 = FUN_10044b340(param_1);
  uVar2 = FUN_1003b0b00(uVar2);
  FUN_100459010(&local_40,param_1);
  FUN_1003ad9b0(uVar2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100468d4f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100468d4f:
  uVar2 = FUN_10044e560(param_1);
  FUN_100459010(&local_60,param_1);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_29 = *(int *)local_60 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1df1f84);
  QString::append(&local_58);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100468dd1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100468dd1:
  FUN_1003e1800(&local_50,uVar2,&local_58,0);
  iVar1 = QVariant::toUInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100468e2a;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100468e2a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100468e5a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100468e5a:
  if (((iVar1 == 1) && (lVar3 = FUN_100458c00(param_1), lVar3 != 0)) &&
     (lVar3 = ___dynamic_cast(lVar3,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1648,0), lVar3 != 0)) {
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    FUN_100459010(&local_68,param_1);
    FUN_1003ad980(uVar2,&local_68,lVar3,1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
  return;
}

