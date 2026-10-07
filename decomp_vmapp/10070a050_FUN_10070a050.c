
void FUN_10070a050(long param_1)

{
  undefined8 *puVar1;
  
  FUN_1008e3970("","AbstractFile",0,"HPWrap[%p] --- Entry info ---",param_1);
  FUN_1008e3970("","AbstractFile",0,"HPWrap[%p] handle (%p):",param_1,param_1 + 0x10);
  FUN_10070a950(param_1 + 0x10);
  FUN_1008e3970("","AbstractFile",0,"HPWrap[%p] disk descriptor = %p",param_1,
                *(undefined8 *)(param_1 + 0x50));
  QMutex::lock();
  FUN_1008e3970("","AbstractFile",0,"HPWrap[%p] --- Pool info ---",param_1);
  FUN_1008e3970("","AbstractFile",0,"HPWrap[%p] Maximum handles count = %u",param_1,DAT_1011ccb28);
  FUN_1008e3970("","AbstractFile",0,"HPWrap[%p] Opened disks count = %u",param_1,DAT_1011ccb20);
  FUN_1008e3970("","AbstractFile",0,"HPWrap[%p] Currently opened handles = %u",param_1,DAT_1011ccb24
               );
  FUN_1008e3970("","AbstractFile",0,"HPWrap[%p] Disk descriptors [%u]:",param_1,DAT_1011ccb20);
  for (puVar1 = DAT_1011ccb10; (undefined8 **)puVar1 != &DAT_1011ccb10;
      puVar1 = (undefined8 *)*puVar1) {
    FUN_10070ab50(puVar1,1);
  }
  QMutex::unlock();
  return;
}

