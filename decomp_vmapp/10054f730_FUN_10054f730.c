
undefined1 FUN_10054f730(long param_1,long param_2,long *param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x10) <= uVar6) {
    *param_3 = -1;
    return 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  *param_3 = (ulong)*(uint *)(param_2 + 8) * (ulong)*(uint *)(lVar2 + (ulong)uVar6 * 8);
  iVar1 = *(int *)(lVar2 + 4 + (ulong)uVar6 * 8);
  *param_4 = iVar1;
  if (iVar1 == 0) {
    pcVar5 = "CompressedStorage::get_data_len() zero block size";
  }
  else {
    uVar6 = iVar1 + 0xfffU & 0xfffff000;
    if (*(uint *)(param_2 + 0xc) < uVar6) {
      FUN_1008e3970("","TransMem",0,
                    "CompressedStorage::get_data_len() block size %u doesn\'t fit the buffer size %u"
                    ,uVar6);
      return 0;
    }
    if (uVar6 == 0) {
      return 0;
    }
    uVar4 = FUN_100761880(*(undefined8 *)(param_1 + 0x30),FUN_1007617a0,0,param_5,(ulong)uVar6);
    if (uVar4 == uVar6) {
      if ((*(code **)(param_1 + 0x38) == (code *)0x0) ||
         (cVar3 = (**(code **)(param_1 + 0x38))
                            (*(undefined8 *)(param_1 + 0x40),param_5,uVar6,*param_3,0),
         cVar3 != '\0')) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (ulong)uVar6;
        return 1;
      }
      pcVar5 = "CCompressedFile::get_data() cancelled";
    }
    else {
      pcVar5 = "CCompressedFile::get_data() read failed";
    }
  }
  FUN_1008e3970("","TransMem",0,pcVar5);
  return 0;
}

