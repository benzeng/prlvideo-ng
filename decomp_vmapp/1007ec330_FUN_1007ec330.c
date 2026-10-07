
undefined8 FUN_1007ec330(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_1007ec150();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58) = *(undefined8 *)(param_2 + 0x62);
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0xc) = *(undefined8 *)(param_2 + 0x6a);
    lVar1 = *(long *)(param_1 + 0xe8);
    uVar3 = *(undefined8 *)(param_2 + 0x42);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x4a);
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    lVar1 = *(long *)(param_1 + 0xd0);
    uVar3 = *(undefined8 *)(param_2 + 0x52);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x5a);
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined4 *)(lVar1 + 0xe8) = 1;
    uVar3 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
  }
  return uVar3;
}

