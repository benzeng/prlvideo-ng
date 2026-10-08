
void FUN_1001324d0(long param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = QAction::isCheckable();
  if ((cVar1 == '\0') && ((param_2 & 0xff) == *(uint *)(param_1 + 0x10))) {
    return;
  }
  *(uint *)(param_1 + 0x10) = param_2 & 0xff;
  QAction::setChecked(SUB81(param_1,0));
  FUN_1007f9de0(param_1,*(int *)(param_1 + 0x10) == 1);
  return;
}

