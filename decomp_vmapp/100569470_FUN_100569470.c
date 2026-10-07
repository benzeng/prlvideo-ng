
int FUN_100569470(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_100575610();
  if (iVar1 < 0) {
    FUN_1008e3970("Compact","vdisk",0,"Trim tracker creation failed 0x%x",iVar1);
  }
  else {
    DAT_1011cc9b8 = FUN_1007da520("devices.hdd.compact_threshold",0x5000);
    pvVar2 = operator_new(0x78,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pvVar2 == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x12d8) = 0;
      FUN_1008e3970("Compact","vdisk",0,"Error allocating memory for CompactContext");
      iVar1 = -0x7ffffffe;
    }
    else {
      FUN_100576f60(pvVar2,param_1);
      *(void **)(param_1 + 0x12d8) = pvVar2;
      iVar1 = 0;
    }
  }
  return iVar1;
}

