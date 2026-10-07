
undefined1 FUN_10054d010(long param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    pcVar3 = "CGuestMemoryCompressor::compress() not valid";
  }
  else if (*(long *)(param_1 + 0x48) == 0) {
    puVar1 = *(undefined2 **)(param_1 + 0x28);
    if (*(long *)(puVar1 + 0xc) == 0) {
      *puVar1 = 1;
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","TransMem",2,"CGuestMemoryCompressor::compress() v.%d (%d, %d), %u workers"
                      ,1,*(undefined1 *)(puVar1 + 1),*(undefined1 *)((long)puVar1 + 3),
                      *(undefined4 *)(param_1 + 0x50));
      }
      cVar2 = FUN_10054ca20(param_1,param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      cVar2 = FUN_10054ccb0(param_1,param_2);
      if ((cVar2 == '\0') || (cVar2 = FUN_10054d390(param_1), cVar2 == '\0')) {
        FUN_10054d150(param_1,param_2);
        return 0;
      }
      uVar5 = 1;
      if (DAT_1011b55f8 < 2) {
        return 1;
      }
      pcVar3 = "CGuestMemoryCompressor::compress() completed";
      uVar4 = 2;
      goto LAB_10054d082;
    }
    pcVar3 = "CGuestMemoryCompressor::compress() new file required";
  }
  else {
    pcVar3 = "CGuestMemoryCompressor::compress() not clear";
  }
  uVar5 = 0;
  uVar4 = 0;
LAB_10054d082:
  FUN_1008e3970("","TransMem",uVar4,pcVar3);
  return uVar5;
}

