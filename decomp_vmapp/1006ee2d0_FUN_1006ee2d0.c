
void FUN_1006ee2d0(QString *param_1)

{
  undefined *puVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  int iVar5;
  undefined1 auVar6 [16];
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_100ba20d0;
  auVar6._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar6._0_8_ = PTR_shared_null_100ba20d0;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar6;
  param_1[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  pQVar2 = operator_new(0x18);
  puVar1 = PTR_s_prl_disp_service_10116d848;
  iVar5 = -1;
  if (PTR_s_prl_disp_service_10116d848 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_prl_disp_service_10116d848);
    iVar5 = (int)sVar3;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  FUN_100703190(pQVar2);
  param_1[3].field0_0x0 = pQVar2;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ee37f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006ee37f:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
  QString::operator=(param_1,&local_48);
  QString::operator=(param_1 + 1,(QString *)&DAT_1011ccb00);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ee3e8;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006ee3e8:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ee418;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006ee418:
  QString::operator=(param_1 + 2,(QString *)&DAT_1011ccb00);
  return;
}

