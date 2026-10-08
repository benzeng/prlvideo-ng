
void FUN_1000de600(undefined8 param_1,long param_2)

{
  undefined8 local_88;
  undefined4 local_80;
  
  if (((*(int *)(param_2 + 0x30) != 0) || (*(int *)(param_2 + 0x34) != 0)) &&
     ((*(uint *)(param_2 + 0x20) & 4) != 0)) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    local_88 = 4;
    local_80 = 0;
    FUN_1000c4970(param_2 + 0x30,0x77,&local_88,0x80);
  }
  return;
}

