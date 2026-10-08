
void FUN_100db5180(long param_1)

{
  undefined8 *puVar1;
  
  FUN_100df99c0("","AbstractFile",0,"HPWrap[%p] --- Entry info ---",param_1);
  FUN_100df99c0("","AbstractFile",0,"HPWrap[%p] handle (%p):",param_1,param_1 + 0x10);
  FUN_100db5a80(param_1 + 0x10);
  FUN_100df99c0("","AbstractFile",0,"HPWrap[%p] disk descriptor = %p",param_1,
                *(undefined8 *)(param_1 + 0x50));
  QMutex::lock();
  FUN_100df99c0("","AbstractFile",0,"HPWrap[%p] --- Pool info ---",param_1);
  FUN_100df99c0("","AbstractFile",0,"HPWrap[%p] Maximum handles count = %u",param_1,DAT_1023119b8);
  FUN_100df99c0("","AbstractFile",0,"HPWrap[%p] Opened disks count = %u",param_1,DAT_1023119b0);
  FUN_100df99c0("","AbstractFile",0,"HPWrap[%p] Currently opened handles = %u",param_1,DAT_1023119b4
               );
  FUN_100df99c0("","AbstractFile",0,"HPWrap[%p] Disk descriptors [%u]:",param_1,DAT_1023119b0);
  for (puVar1 = DAT_1023119a0; (undefined8 **)puVar1 != &DAT_1023119a0;
      puVar1 = (undefined8 *)*puVar1) {
    FUN_100db5c80(puVar1,1);
  }
  QMutex::unlock();
  return;
}

