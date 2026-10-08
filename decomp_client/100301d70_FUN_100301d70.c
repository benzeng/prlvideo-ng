
undefined1 FUN_100301d70(CMessageInfo *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  
  piVar2 = (int *)CMessageInfo::data();
  iVar1 = *piVar2;
  uVar7 = 1;
  if (((iVar1 != -0x7ffffaad) && (iVar1 != -0x7ffcbfff)) && (iVar1 != -0x7ffcbffc)) {
    uVar3 = FUN_100152280();
    lVar4 = CMessageInfo::data();
    lVar4 = FUN_1001548f0(uVar3,lVar4 + 8);
    bVar9 = 1;
    if (lVar4 != 0) {
      lVar5 = CMessageInfo::data();
      if ((*(char *)(lVar5 + 0x30) != '\0') && (cVar8 = FUN_10018ecf0(lVar4), cVar8 == '\0')) {
        return 1;
      }
      bVar9 = FUN_10018ff50(lVar4);
      bVar9 = bVar9 ^ 1;
    }
    puVar6 = (undefined4 *)CMessageInfo::data();
    cVar8 = FUN_100244e90(*puVar6);
    if (((bVar9 == 0) && (cVar8 == '\0')) &&
       ((lVar4 = CMessageInfo::data(), *(int *)(lVar4 + 0x10) != 3 &&
        (lVar4 = CMessageInfo::data(), *(int *)(lVar4 + 0x10) != 2)))) {
      return 1;
    }
    uVar7 = CMessageProcessor::isMessageShouldBeSkipped(param_1);
  }
  return uVar7;
}

