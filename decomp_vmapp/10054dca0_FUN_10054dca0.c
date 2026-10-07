
undefined1 FUN_10054dca0(long param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 in_RAX;
  long lVar7;
  int *piVar8;
  undefined4 local_34;
  
  local_34 = (undefined4)((ulong)in_RAX >> 0x20);
  cVar3 = FUN_100751370(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x80),
                        *(undefined8 *)(param_1 + 0x90));
  if (cVar3 == '\0') {
    FUN_1008e3970("","TransMem",0,"Uncompress guest memory: failed");
  }
  else {
    if (*(long *)(*(long *)(param_1 + 0x88) + 0x30) != 0) {
      return 1;
    }
    piVar8 = (int *)(param_1 + 0x30);
    if (param_3 != '\0') {
      piVar8 = (int *)(param_1 + 0x34);
    }
    iVar1 = *piVar8;
    iVar5 = (**(code **)(**(long **)(param_1 + 0x80) + 0x28))();
    if (iVar5 == iVar1) {
      cVar3 = (**(code **)(**(long **)(param_1 + 0x88) + 0x10))
                        (*(long **)(param_1 + 0x88),&local_34);
      if ((1 < DAT_1011b55f8) && (cVar3 == '\x01')) {
        FUN_1008e3970("","TransMem",2,"Uncompress guest memory: %u zero pages skipped",local_34);
      }
      lVar2 = *(long *)(param_1 + 0x48);
      lVar7 = (**(code **)(**(long **)(param_1 + 0x80) + 0x38))();
      *(ulong *)(param_1 + 0x48) = lVar2 + 0xffff + lVar7 & 0xffffffffffff0000;
      FUN_10054dc10(param_1);
      if (param_3 == '\0') {
        lVar2 = *(long *)(param_1 + 0x48);
        lVar7 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),lVar2,0);
        if (lVar7 == lVar2) {
          uVar4 = FUN_10054d910(param_1,param_2);
          return uVar4;
        }
      }
      else {
        if (*(long *)(param_1 + 0x48) == *(long *)(*(long *)(param_1 + 0x28) + 0x18)) {
          if (DAT_1011b55f8 < 2) {
            return 1;
          }
          FUN_1008e3970("","TransMem",2,"Uncompress guest memory: completed");
          return 1;
        }
        FUN_1008e3970("","TransMem",0,
                      "Uncompress guest memory: index offset %#llx doesn\'t match data size %#llx");
      }
    }
    else {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x80) + 0x28))();
      FUN_1008e3970("","TransMem",0,"Uncompress guest memory: only %u out of %u blocks processed",
                    uVar6,iVar1);
    }
  }
  FUN_10054dc10(param_1);
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}

