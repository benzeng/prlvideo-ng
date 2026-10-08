
void FUN_1002190d0(long *param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  
  if (param_2 < 0) {
    COsInstallationInfo::setInstallationType(param_1 + 0x29,0);
    COsInstallationInfo::save();
    piVar1 = (int *)param_1[0x27];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (pvVar2 = (void *)param_1[0x27], pvVar2 != (void *)0x0)) {
        operator_delete(pvVar2);
      }
      param_1[0x28] = 0;
      param_1[0x27] = 0;
    }
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

