
void FUN_1005fc690(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  QString local_40;
  undefined1 local_32;
  
  if (param_2 != 1) goto LAB_1005fc73e;
  lVar2 = FUN_1005ec990(param_1 + 0x38);
  puVar1 = PTR_s_ModernIE_102275038;
  iVar5 = -1;
  if (PTR_s_ModernIE_102275038 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_ModernIE_102275038);
    iVar5 = (int)sVar3;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5);
  QString::operator=((QString *)(lVar2 + 0x98),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1005fc72e;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005fc72e:
  uVar4 = FUN_1005ec990(param_1 + 0x38);
  FUN_1005bb920(uVar4);
LAB_1005fc73e:
  CAbstractWizardPage::leavePage(param_1,param_2);
  return;
}

