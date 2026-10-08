
void FUN_10039b0a0(long param_1)

{
  QString *pQVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QLabel::clear();
  QWidget::hide();
  QWidget::hide();
  pQVar1 = *(QString **)(param_1 + 0x68);
  FUN_1001c7700(&local_28,PTR_s_This_copy_of___PRODUCT_NAME_is_c_10226e1f8);
  QLabel::setText(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

