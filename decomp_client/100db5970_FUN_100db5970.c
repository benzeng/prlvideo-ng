
void FUN_100db5970(undefined1 param_1)

{
  undefined8 *puVar1;
  
  QMutex::lock();
  FUN_100df99c0("","AbstractFile",0,"### HPWrap: Maximum handles count = %u",DAT_1023119b8);
  FUN_100df99c0("","AbstractFile",0,"### HPWrap: Currently opened handles = %u",DAT_1023119b4);
  if (DAT_1023119b0 == 0) {
    QMutex::unlock();
    FUN_100df99c0("","AbstractFile",0,"HPWrap: No disk descriptors");
    return;
  }
  FUN_100df99c0("","AbstractFile",0,"### HPWrap: Disk descriptors [%u]:");
  puVar1 = DAT_1023119a0;
  if ((undefined8 **)DAT_1023119a0 != &DAT_1023119a0) {
    do {
      FUN_100db5c80(puVar1,param_1);
      puVar1 = (undefined8 *)*puVar1;
    } while ((undefined8 **)puVar1 != &DAT_1023119a0);
  }
  QMutex::unlock();
  return;
}

