
int FUN_1005b35d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulong local_28;
  
  if (*(int *)(param_1 + 0x34) != -1) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","IDIB_INVALID_ID == m_Layer",
                  "BlockGroup.cpp",0x7ff,"GetCacheFileChangedBlocks");
  }
  local_38 = *(undefined4 *)(param_1 + 0x118);
  local_28 = (ulong)*(uint *)(param_1 + 0x114);
  local_40 = param_2;
  local_30 = param_3;
  iVar1 = FUN_1005b1220(param_1 + 0x48,FUN_1005b34b0,&local_40);
  if (iVar1 < 0) {
    FUN_1008e3970("","vdisk",0,"Scannig failed, err = 0x%X",iVar1);
  }
  return iVar1;
}

