
void FUN_100107830(void)

{
  undefined *puVar1;
  QString QVar2;
  
  CVmConfiguration::getVmSettings();
  QVar2.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmSettings::getVmRuntimeOptions();
  puVar1 = PTR_shared_null_100ba20d0;
  CVmRunTimeOptions::setSystemFlags(QVar2);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
  return;
}

