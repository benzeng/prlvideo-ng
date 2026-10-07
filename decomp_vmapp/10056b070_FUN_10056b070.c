
void FUN_10056b070(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_10059c480();
  if (cVar1 != '\0') {
    QFile::setPermissions(param_1,0x6666);
    return;
  }
  return;
}

