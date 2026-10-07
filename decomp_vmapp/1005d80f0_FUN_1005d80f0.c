
undefined8 FUN_1005d80f0(long *param_1)

{
  long lVar1;
  
  if ((*param_1 == 0) || (lVar1 = *(long *)(*param_1 + 0x10), lVar1 == 0)) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","VMDK.isValid()",
                  "VMwareDiskDescriptor.cpp",0xd4,"IsVMDKEmbedded");
    lVar1 = *(long *)(*param_1 + 0x10);
  }
  return CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0x240) == 0x5b);
}

