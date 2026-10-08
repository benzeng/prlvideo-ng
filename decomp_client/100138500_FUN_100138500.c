
ulong FUN_100138500(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  QArrayData *local_58;
  undefined8 local_50;
  undefined8 local_48;
  QFontMetrics local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  QLineEdit::text();
  QFontMetrics::QFontMetrics(local_40,(QFont *)(*(long *)(param_1 + 0x28) + 0x38));
  local_50 = 0;
  local_48 = 0xffffffffffffffff;
  QLineEdit::text();
  auVar2 = QFontMetrics::boundingRect
                     ((QRect *)local_40,(int)&local_50,(QString *)0x100,(int)&local_58,(int *)0x0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10013859d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10013859d:
  uVar1 = QLineEdit::minimumSizeHint();
  QFontMetrics::~QFontMetrics(local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1001385e7;
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001385e7:
  return uVar1 & 0xffffffff00000000 | (auVar2._8_8_ + 1) - auVar2._0_8_ & 0xffffffffU;
}

