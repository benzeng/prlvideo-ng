
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042dd60(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (((*(long *)(param_1 + 0xf8) != 0) && (*(int *)(*(long *)(param_1 + 0xf8) + 4) != 0)) &&
     (*(long *)(param_1 + 0x100) != 0)) {
    uVar1 = CVmHardDisk::getSize();
    auVar2._8_4_ = (int)((ulong)uVar1 >> 0x20);
    auVar2._0_8_ = uVar1;
    auVar2._12_4_ = _UNK_100e11114;
    QDoubleSpinBox::setValue
              ((((double)CONCAT44(_DAT_100e11110,(int)uVar1) - _DAT_100e11120) +
               (auVar2._8_8_ - _UNK_100e11128)) * DAT_100e14d10);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    CVmHardDisk::getDiskType();
    QAbstractButton::setChecked(SUB81(uVar1,0));
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    CVmHardDisk::isSplitted();
    QAbstractButton::setChecked(SUB81(uVar1,0));
    return;
  }
  return;
}

