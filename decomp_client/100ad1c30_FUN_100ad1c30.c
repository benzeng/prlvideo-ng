
undefined8 FUN_100ad1c30(long param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  cVar2 = FUN_100addd70(param_1 + 0x920);
  if (cVar2 == '\0') {
    plVar3 = (long *)FUN_100adb590(param_1 + 0x100,*(undefined4 *)(param_1 + 0x910));
    lVar1 = *plVar3;
    lVar4 = FUN_100adc640(param_1 + 0x100,*(undefined4 *)(param_1 + 0x910));
    uVar6 = 0;
    if (((lVar1 != 0) && (lVar4 != 0)) && ((*(uint *)(lVar1 + 0x18) & 1) == 0)) {
      uVar6 = *(undefined4 *)(lVar4 + 8);
    }
    bVar7 = true;
    if (*(char *)(*(long *)(param_1 + 0xa30) + 0x10) == '\0') {
      bVar7 = *(char *)(param_1 + 0xaa6) != '\0';
    }
    uVar5 = FUN_100adca00(*(undefined8 *)(param_1 + 0x9b8),uVar6,bVar7);
  }
  else {
    *(undefined1 *)(param_1 + 0x978) = 1;
    uVar5 = 0;
  }
  return uVar5;
}

