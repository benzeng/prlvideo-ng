
/* WARNING: Removing unreachable block (ram,0x000100a1f115) */
/* WARNING: Removing unreachable block (ram,0x000100a1f123) */
/* WARNING: Removing unreachable block (ram,0x000100a1f12c) */

void FUN_100a1f070(long param_1)

{
  int *piVar1;
  void *pvVar2;
  Data_conflict local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_21;
  
  local_40 = 0x80000000;
  local_48.field7 = 0;
  local_38 = 1;
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (pvVar2 = *(void **)(param_1 + 0x10), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  QVariant::operator=((QVariant *)(param_1 + 0x30),(QVariant *)&local_48);
  *(undefined1 *)(param_1 + 0x40) = local_38;
  QVariant::~QVariant((QVariant *)&local_48);
  QObject::deleteLater();
  return;
}

