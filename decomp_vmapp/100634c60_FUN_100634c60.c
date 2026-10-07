
bool FUN_100634c60(long param_1)

{
  long lVar1;
  
  lVar1 = QFileInfo::size();
  return *(int *)(param_1 + 0x18) <= lVar1;
}

