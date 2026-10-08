
void FUN_10061e2c0(long param_1)

{
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_10061e1d0(param_1,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_10061e31a;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10061e31a:
  FUN_10061da90(param_1,0);
  FUN_10061d400(*(undefined8 *)(param_1 + 0x30),0,0);
  FUN_10061d400(*(undefined8 *)(param_1 + 0x30),0,1);
  QLineEdit::clear();
  QWidget::hide();
  return;
}

