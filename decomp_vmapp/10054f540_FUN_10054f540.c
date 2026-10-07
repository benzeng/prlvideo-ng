
uint FUN_10054f540(long *param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 < *(uint *)(param_1 + 1)) {
    if ((param_3 & *(uint *)(param_2 + 8) - 1) == 0) {
      lVar1 = *param_1;
      *(int *)(lVar1 + (ulong)uVar2 * 8) = (int)(param_3 / *(uint *)(param_2 + 8));
      *(int *)(lVar1 + 4 + (ulong)uVar2 * 8) = param_4;
      uVar2 = param_4 + 0xfffU & 0xfffff000;
      if (uVar2 <= *(uint *)(param_2 + 0xc)) {
        return uVar2;
      }
      FUN_1008e3970("","TransMem",0,
                    "CompressedStorage::put_data_len() block size %u doesn\'t fit the buffer size %u"
                    ,uVar2);
      return 0;
    }
    pcVar3 = "CompressedStorage::put_data_len() invalid offset";
  }
  else {
    pcVar3 = "CompressedStorage::put_data_len() no room for data";
  }
  FUN_1008e3970("","TransMem",0,pcVar3);
  return 0;
}

