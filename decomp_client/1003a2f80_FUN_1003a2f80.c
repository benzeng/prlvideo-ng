
void FUN_1003a2f80(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_1003b0b30(param_1 + 0x20);
  if (cVar1 != '\0') {
    return;
  }
  FUN_1003b0ad0(param_1 + 0x20);
  CMappingModel::submit();
  return;
}

