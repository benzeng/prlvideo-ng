
int FUN_10057cbb0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x1128);
  iVar1 = 0;
  if (*(long *)(param_1 + 0x1130) != lVar2) {
    uVar3 = 0;
    do {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("CountReclaimed","vdisk",3,"Scanning for the storage[%u]",uVar3);
        lVar2 = *(long *)(param_1 + 0x1128);
      }
      iVar1 = FUN_1005985c0(*(undefined8 *)(lVar2 + uVar3 * 8),param_2);
      if (iVar1 < 0) {
        FUN_1008e3970("CountReclaimed","vdisk",0,
                      "StartBatScanning() failed for storage[%u] with error = 0x%X",uVar3,iVar1);
        break;
      }
      if (*(int *)(param_2 + 0x30) < 0) {
        FUN_1008e3970("CountReclaimed","vdisk",0,"Scanning failed for storage[%u] with error = 0x%X"
                      ,uVar3);
        break;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      lVar2 = *(long *)(param_1 + 0x1128);
    } while (uVar3 < (ulong)(*(long *)(param_1 + 0x1130) - lVar2 >> 3));
  }
  FUN_1005f5ef0(param_2);
  return iVar1;
}

