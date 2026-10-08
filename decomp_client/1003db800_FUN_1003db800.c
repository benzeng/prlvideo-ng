
void FUN_1003db800(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  QArrayData *local_68;
  QVariant local_60;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar7 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1350);
  if (lVar7 == 0) {
    return;
  }
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  iVar6 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"Custom",
                     0xffffffff,1);
  if (iVar6 == 0) {
    cVar1 = '\x01';
  }
  else {
    iVar6 = QString::compare_helper
                      (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"Manual",
                       0xffffffff,1);
    auVar10 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    cVar1 = FUN_1003dbb20(iVar6 != 0,auVar10._0_8_,auVar10._8_8_,iVar6 != 0);
  }
  puVar9 = (undefined8 *)(param_1 + 0x18);
  uVar8 = FUN_1003b0af0(*puVar9);
  local_68 = (QArrayData *)QString::fromAscii_helper("Settings.SasProfile.Custom",0x1a);
  FUN_1003e1800(&local_60,uVar8,&local_68,0);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003db947;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003db947:
  iVar6 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"Custom",
                     0xffffffff,1);
  if (iVar6 == 0) {
    bVar4 = 1;
    if (cVar2 != '\0') goto LAB_1003dba1f;
    uVar8 = FUN_1003b0af0(*puVar9);
    cVar3 = FUN_1003dbb20(1,uVar8);
    if (cVar3 != '\0') {
      uVar8 = FUN_1003b0b10(*puVar9);
      cVar3 = FUN_1003bec40(uVar8);
      if (cVar3 == '\0') goto LAB_1003dba1f;
    }
  }
  if (cVar2 == '\0' && cVar1 == '\x01') {
    iVar6 = QString::compare_helper
                      (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"Manual",
                       0xffffffff,1);
    bVar4 = 1;
    if (iVar6 != 0) {
      iVar6 = QString::compare_helper
                        (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                         "Silent",0xffffffff,1);
      if (iVar6 == 0) {
        uVar8 = FUN_1003b0b10(*puVar9);
        bVar4 = FUN_1003bec40(uVar8);
      }
      else {
        bVar4 = 0;
      }
    }
  }
  else {
    bVar4 = 0;
  }
LAB_1003dba1f:
  bVar5 = QAbstractButton::isChecked();
  if ((bVar5 ^ bVar4) == 1) {
    QAbstractButton::setChecked(SUB81(lVar7,0));
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

