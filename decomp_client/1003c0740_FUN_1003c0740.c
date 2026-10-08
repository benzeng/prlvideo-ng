
ulong FUN_1003c0740(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  QArrayData *local_30;
  QVariant local_28;
  undefined1 local_11;
  
  uVar3 = FUN_1003b0af0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  local_30 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.IsolatedVm",0x19);
  FUN_1003e1800(&local_28,uVar3,&local_30,0);
  uVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_28);
  uVar1 = *(uint *)local_30;
  uVar4 = (ulong)uVar1;
  if (uVar1 != 0xffffffff) {
    if (uVar1 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1003c07c7;
      local_11 = 0;
    }
    uVar4 = QArrayData::deallocate(local_30,2,8);
  }
LAB_1003c07c7:
  return CONCAT71((int7)(uVar4 >> 8),uVar2) ^ 1;
}

