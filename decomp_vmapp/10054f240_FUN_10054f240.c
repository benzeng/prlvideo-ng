
undefined1
FUN_10054f240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,void *param_5)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  char *pcVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = FUN_10054f540(param_1 + 8);
  if (uVar3 == 0) {
    return 0;
  }
  if ((*(code **)(param_1 + 0x60) == (code *)0x0) ||
     (cVar2 = (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x68),param_5,uVar3,param_3,1)
     , cVar2 != '\0')) {
    pvVar4 = (void *)FUN_10054f360(param_1,uVar1,uVar3,0);
    if (pvVar4 != (void *)0x0) {
      _memcpy(pvVar4,param_5,(ulong)uVar3);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + (ulong)uVar3;
      return 1;
    }
    pcVar5 = "CCompressedFileMapped::put_data() failed";
  }
  else {
    pcVar5 = "CCompressedFileMapped::put_data() cancelled";
  }
  FUN_1008e3970("","TransMem",0,pcVar5);
  return 0;
}

