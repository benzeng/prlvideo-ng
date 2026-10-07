
bool FUN_1005d8170(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","VMDK.isValid()",
                  "VMwareDiskDescriptor.cpp",0xdb,"IsChildVMDKWillBeEmbedded");
    lVar2 = *param_1;
    if (lVar2 != 0) goto LAB_1005d81d5;
  }
  else {
LAB_1005d81d5:
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 != 0) goto LAB_1005d8227;
  }
  FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","VMDK.isValid()",
                "VMwareDiskDescriptor.cpp",0xe2,"ChildVMDKType");
  lVar2 = *(long *)(*param_1 + 0x10);
LAB_1005d8227:
  uVar1 = *(int *)(lVar2 + 0x240) - 0x5a;
  if (3 < uVar1) {
    FUN_1008e3970("","vdisk",0,"Error: unknown VMDK type %u");
  }
  return uVar1 < 2;
}

