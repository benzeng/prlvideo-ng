
void FUN_10009db20(long *param_1,char param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  puVar1 = (undefined8 *)*param_1;
  *(char *)(puVar1 + 5) = param_2;
  if (param_2 != '\0') {
    uVar4 = FUN_100319cd0(*puVar1);
    lVar2 = puVar1[2];
    lVar3 = *(long *)(lVar2 + 0x90);
    uVar6 = 0;
    if (*(long *)(lVar3 + 0x10) != 0) {
      lVar5 = *(long *)(lVar3 + 0x20);
      uVar6 = 0;
      while (lVar5 != lVar3 + 8) {
        uVar6 = uVar6 | *(uint *)(lVar5 + 0x20);
        lVar5 = QMapNodeBase::nextNode();
        lVar3 = *(long *)(lVar2 + 0x90);
      }
    }
    FUN_100347390(uVar4,uVar6);
    return;
  }
  return;
}

