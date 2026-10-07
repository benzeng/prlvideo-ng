
ulong FUN_10008cf50(long param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar1 = QIODevice::isOpen();
  uVar3 = 0;
  if (cVar1 != '\0') {
    cVar1 = QIODevice::isWritable();
    uVar3 = 0;
    if (cVar1 != '\0') {
      lVar2 = FUN_10008c320(param_1,0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),0,0);
      if (lVar2 != 0) {
        uVar3 = QIODevice::write(param_2,lVar2);
        return uVar3;
      }
      uVar3 = 0;
      while( true ) {
        uVar4 = uVar3;
        if ((0xafffffff < uVar3) && (uVar4 = uVar3 - 0x50000000, uVar3 < 0x100000000)) {
          uVar4 = 0xffffffffffffffff;
        }
        lVar2 = FUN_10008c320(param_1,uVar4,0x200000,0,0);
        if (lVar2 == 0) break;
        lVar2 = QIODevice::write(param_2,lVar2);
        uVar3 = uVar3 + lVar2;
        if (lVar2 != 0x200000) {
          return uVar3;
        }
        if (*(ulong *)(*(long *)(param_1 + 0x60) + 0x10) <= uVar3) {
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

