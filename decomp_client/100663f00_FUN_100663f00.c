
void FUN_100663f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  QString local_28;
  undefined1 local_1a;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_100665900(uVar1,uVar2);
  QLabel::text();
  QString::operator=((QString *)(param_1 + 0x50),&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

