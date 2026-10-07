
undefined8 FUN_100506a50(long param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar2 = *(long *)(lVar3 + 0x20);
    while (lVar2 != lVar3 + 8) {
      puVar1 = (uint *)(*(long *)(param_1 + 8) + 0x34);
      *puVar1 = *puVar1 | *(uint *)(lVar2 + 0x18);
      uVar4 = FUN_100506820(param_1,param_2,lVar2 + 0x20);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      lVar2 = QMapNodeBase::nextNode();
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
  return 0;
}

