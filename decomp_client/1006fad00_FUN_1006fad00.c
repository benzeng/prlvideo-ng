
void FUN_1006fad00(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  CMacUserShortcutsStorage *this;
  QArrayData *local_38;
  
  puVar1 = PTR_m_instance_1021e1450;
  this = *(CMacUserShortcutsStorage **)PTR_m_instance_1021e1450;
  if (this == (CMacUserShortcutsStorage *)0x0) {
    this = operator_new(0x18);
    CMacUserShortcutsStorage::CMacUserShortcutsStorage(this);
    *(CMacUserShortcutsStorage **)puVar1 = this;
    DAT_102274b30 = 1;
  }
  QVariant::toString();
  CMacUserShortcutsStorage::setActionText((int)this,(QString *)(ulong)param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

