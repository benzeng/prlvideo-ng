
undefined8 FUN_1005a71d0(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  
  FUN_1005b5af0(local_38);
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != param_1 + 0x58) {
    do {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x160))(*(long **)(lVar2 + 0x10),param_2,local_38);
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != param_1 + 0x58);
  }
  cVar1 = FUN_1005b5c60(local_38);
  uVar3 = 0;
  if (cVar1 == '\0') {
    uVar3 = 0x80019020;
    FUN_1008e3970("","vdisk",0,"Not enough space found");
  }
  FUN_1005b5b70(local_38);
  return uVar3;
}

