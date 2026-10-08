
int _xmlDictReference(xmlDictPtr dict)

{
  int iVar1;
  int local_14;
  
  if ((DAT_1023136b0 == 0) && (iVar1 = FUN_100975f04(), iVar1 == 0)) {
    return -1;
  }
  if (dict == (xmlDictPtr)0x0) {
    local_14 = -1;
  }
  else {
    _xmlRMutexLock(DAT_1023136a8);
    *(int *)dict = *(int *)dict + 1;
    _xmlRMutexUnlock(DAT_1023136a8);
    local_14 = 0;
  }
  return local_14;
}

