
void FUN_100773540(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  QArrayData *local_90;
  QString local_88;
  QVariant local_80;
  undefined *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined *local_28;
  undefined *local_20;
  undefined1 local_11;
  
  local_28 = PTR_shared_null_1021e1288;
  if (param_2 == (char *)0x0) {
    return;
  }
  local_70 = PTR_shared_null_1021e1288;
  iVar2 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_11 = *(int *)local_28 != 0;
    UNLOCK();
    iVar2 = *(int *)local_28;
  }
  local_68._8_4_ = (int)local_28;
  local_68._0_8_ = local_28;
  local_68._12_4_ = (int)((ulong)local_28 >> 0x20);
  local_20 = PTR_shared_null_1021e15d0;
  local_58 = local_68;
  local_48 = local_68;
  local_38 = local_68;
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007735d1;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1007735d1:
  cVar1 = FUN_10076d530(&local_70);
  if (cVar1 == '\0') goto LAB_10077369d;
  local_90 = (QArrayData *)QString::fromAscii_helper("Info",4);
  FUN_10073e510(&local_88,&local_70,&local_90);
  QVariant::QVariant(&local_80,&local_88);
  QObject::setProperty(param_2,(QVariant *)"infoText");
  QVariant::~QVariant(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_11 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100773667;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100773667:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_11 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10077369d;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10077369d:
  FUN_100252e70(&local_70);
  return;
}

