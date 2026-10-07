
void FUN_10070a840(undefined1 param_1)

{
  undefined8 *puVar1;
  
  QMutex::lock();
  FUN_1008e3970("","AbstractFile",0,"### HPWrap: Maximum handles count = %u",DAT_1011ccb28);
  FUN_1008e3970("","AbstractFile",0,"### HPWrap: Currently opened handles = %u",DAT_1011ccb24);
  if (DAT_1011ccb20 == 0) {
    QMutex::unlock();
    FUN_1008e3970("","AbstractFile",0,"HPWrap: No disk descriptors");
    return;
  }
  FUN_1008e3970("","AbstractFile",0,"### HPWrap: Disk descriptors [%u]:");
  puVar1 = DAT_1011ccb10;
  if ((undefined8 **)DAT_1011ccb10 != &DAT_1011ccb10) {
    do {
      FUN_10070ab50(puVar1,param_1);
      puVar1 = (undefined8 *)*puVar1;
    } while ((undefined8 **)puVar1 != &DAT_1011ccb10);
  }
  QMutex::unlock();
  return;
}

