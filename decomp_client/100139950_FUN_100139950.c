
undefined8 FUN_100139950(QEvent *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_68;
  QKeyEvent local_60 [71];
  undefined1 local_19;
  
  if ((*(short *)(param_2 + 0x10) != 6) || (1 < *(int *)(param_2 + 0x28) + 0xfeffffffU)) {
    uVar2 = QLineEdit::event(param_1);
    return uVar2;
  }
  *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 4;
  uVar1 = QKeyEvent::modifiers();
  local_68 = *(QArrayData **)(param_2 + 0x20);
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_19 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QKeyEvent::QKeyEvent(local_60,6,0x1000001,uVar1,&local_68,0,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001399f7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001399f7:
  (**(code **)(*(long *)param_1 + 0xc0))(param_1,local_60);
  QKeyEvent::~QKeyEvent(local_60);
  return 1;
}

