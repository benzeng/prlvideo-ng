
undefined8 FUN_100574d30(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (3 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",4,"[%p]Compact: trim for lba 0x%llX, # sectors %u (0x%X)",param_1,
                  param_2,param_3,param_3);
  }
  if (*(int *)(param_1 + 0x12c8) != 0) {
    for (puVar1 = *(undefined8 **)(param_1 + 0x1200); puVar1 != (undefined8 *)(param_1 + 0x1200);
        puVar1 = (undefined8 *)*puVar1) {
      (**(code **)puVar1[-1])(puVar1 + -1,param_2,param_3);
    }
    lVar2 = *(long *)(param_1 + 0x12d8);
    if (lVar2 == 0) {
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","m_CompactContext != NULL",
                    "DiskStatesImp.cpp",0x11f6,"Trim");
      lVar2 = *(long *)(param_1 + 0x12d8);
    }
    FUN_100574e40(lVar2,param_3);
  }
  return 0;
}

