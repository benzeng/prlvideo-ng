
void FUN_1003a2f40(long param_1)

{
  char cVar1;
  
  FUN_1003b0ad0(param_1 + 0x20);
  cVar1 = CMappingModel::isSubmiting();
  if (cVar1 != '\0') {
    return;
  }
  QWidget::close();
  return;
}

