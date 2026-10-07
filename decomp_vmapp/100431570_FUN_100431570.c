
undefined8 FUN_100431570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 local_20 [16];
  
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x28)) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0;
  }
  else {
    if (((int)param_3 < (int)param_2) ||
       ((int)((ulong)param_3 >> 0x20) < (int)((ulong)param_2 >> 0x20))) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
    else {
      local_20._0_8_ = param_2;
      local_20._8_8_ = param_3;
      local_20 = QRect::operator&((QRect *)(param_1 + 0x28),(QRect *)local_20);
      if (local_20._8_4_ < local_20._0_4_) {
        return 0;
      }
      if (local_20._12_4_ < local_20._4_4_) {
        return 0;
      }
      auVar2 = QRect::operator|((QRect *)(param_1 + 8),(QRect *)local_20);
      uVar1 = auVar2._0_8_;
      *(undefined1 (*) [16])(param_1 + 8) = auVar2;
    }
    uVar1 = CONCAT71((int7)((ulong)uVar1 >> 8),1);
  }
  return uVar1;
}

