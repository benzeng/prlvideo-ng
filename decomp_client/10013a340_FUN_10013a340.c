
void FUN_10013a340(QWidget *param_1)

{
  FUN_1001397c0();
  *(undefined ***)param_1 = &PTR_FUN_1021faf20;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fb250;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FontUtils::setSmallFont(param_1,false);
  QTreeView::setItemsExpandable(SUB81(param_1,0));
  return;
}

