
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100d3f730(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if ((DAT_102318860 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102318860), iVar2 != 0)) {
    _DAT_102318858 = QString::fromAscii_helper("@LOCALE@",8);
    ___cxa_atexit(FUN_100054e40,&DAT_102318858,0x100000000);
    ___cxa_guard_release(&DAT_102318860);
  }
  iVar2 = QString::indexOf(param_2,&DAT_102318858,0,1);
  if (iVar2 == -1) {
    piVar1 = (int *)*param_2;
    *param_1 = piVar1;
    if (*piVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return param_1;
  }
  local_30 = (QArrayData *)*param_2;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QLocale::name();
  puVar3 = (undefined8 *)QString::replace(&local_30,&DAT_102318858,&local_38,1);
  piVar1 = (int *)*puVar3;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d3f841;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d3f841:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

