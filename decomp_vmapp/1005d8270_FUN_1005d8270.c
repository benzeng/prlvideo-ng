
undefined4 FUN_1005d8270(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((*param_1 == 0) || (lVar3 = *(long *)(*param_1 + 0x10), lVar3 == 0)) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","VMDK.isValid()",
                  "VMwareDiskDescriptor.cpp",0xe2,"ChildVMDKType");
    lVar3 = *(long *)(*param_1 + 0x10);
  }
  uVar1 = *(int *)(lVar3 + 0x240) - 0x5a;
  if (uVar1 < 4) {
    uVar2 = *(undefined4 *)(&DAT_100b477c0 + (long)(int)uVar1 * 4);
  }
  else {
    FUN_1008e3970("","vdisk",0,"Error: unknown VMDK type %u");
    uVar2 = 0;
  }
  return uVar2;
}

