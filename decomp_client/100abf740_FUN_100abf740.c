
undefined8 FUN_100abf740(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(long *)(lVar1 + 0x10) != 0) && (lVar4 = *(long *)(lVar1 + 0x20), lVar4 != lVar1 + 8)) {
    do {
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      local_48 = 0;
      local_44 = 0;
      local_40 = 0xffffffff;
      local_3c = 0xffffffff;
      cVar3 = FUN_100ac03f0(uVar2,(QPoint *)&local_48);
      if ((cVar3 != '\0') &&
         (local_38 = param_2, local_34 = param_3,
         cVar3 = QRect::contains((QPoint *)&local_48,SUB81(&local_38,0)), cVar3 != '\0')) {
        return uVar2;
      }
      lVar4 = QMapNodeBase::nextNode();
    } while (lVar4 != *(long *)(param_1 + 8) + 8);
  }
  return 0;
}

