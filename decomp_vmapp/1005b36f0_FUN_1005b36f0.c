
int FUN_1005b36f0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (*(int *)(param_1 + 0x34) != -1) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","IDIB_INVALID_ID == m_Layer",
                  "BlockGroup.cpp",0x831,"ClearDirtyBlocks");
  }
  local_20 = 0;
  local_28 = 0;
  local_30 = *(undefined4 *)(param_1 + 0x118);
  local_38 = param_2;
  iVar1 = FUN_1005b1220(param_1 + 0x48,FUN_1005b36a0,&local_38);
  if (iVar1 < 0) {
    FUN_1008e3970("","vdisk",0,"Scannig failed, err = 0x%X",iVar1);
  }
  return iVar1;
}

