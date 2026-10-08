
void FUN_1007e56a0(long param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  double local_48 [2];
  double local_38;
  double local_30;
  int local_28;
  int local_24;
  
  if (DAT_1023109b8 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_100759600(pvVar3);
    DAT_102271308 = 1;
    DAT_1023109b8 = pvVar3;
  }
  FUN_1007596c0(local_48,DAT_1023109b8);
  if (0.0 <= local_48[0]) {
    iVar2 = (int)(local_48[0] + DAT_100e110f0);
  }
  else {
    iVar2 = (int)((local_48[0] - (double)(int)(DAT_100e110e0 + local_48[0])) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + local_48[0]);
  }
  if (0.0 <= local_38) {
    iVar4 = (int)(local_38 + DAT_100e110f0);
  }
  else {
    iVar4 = (int)((local_38 - (double)(int)(DAT_100e110e0 + local_38)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + local_38);
  }
  if (0.0 <= local_30) {
    local_24 = (int)(local_30 + DAT_100e110f0);
  }
  else {
    local_24 = (int)((local_30 - (double)(int)(DAT_100e110e0 + local_30)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + local_30);
  }
  local_24 = local_24 + -1;
  lVar1 = *(long *)(*(QPoint **)(param_1 + 0x10) + 0x28);
  local_28 = ((iVar2 + 0x59 + iVar4 / 2) - *(int *)(lVar1 + 0x1c)) + *(int *)(lVar1 + 0x14);
  QWidget::move(*(QPoint **)(param_1 + 0x10));
  return;
}

