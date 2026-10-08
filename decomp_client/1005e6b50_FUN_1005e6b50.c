
ulong FUN_1005e6b50(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x18) + 8) < *(int *)(*(long *)(param_1 + 0x18) + 0xc)) {
    uVar3 = 0;
    do {
      lVar2 = QMetaObject::cast((QObject *)&DAT_1021f4710);
      cVar1 = operator==((QString *)(lVar2 + 0x58),(QString *)(param_2 + 0x48));
      if (cVar1 != '\0') {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 <
             (long)*(int *)(*(long *)(param_1 + 0x18) + 0xc) -
             (long)*(int *)(*(long *)(param_1 + 0x18) + 8));
  }
  return 0xffffffff;
}

