
bool FUN_1002b4ca0(long param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  lVar2 = *(long *)(param_1 + 0x106d0);
  if (lVar2 == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x106d8) != 0) goto LAB_1002b4d34;
  local_28 = (QArrayData *)
             QString::fromAscii_helper("VIRTUAL@KEYBOARD@|203a|fffb|full|--|PW3.0",0x29);
  lVar2 = FUN_1002bfd50(lVar2,&local_28);
  *(long *)(param_1 + 0x106d8) = lVar2;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 == 0) {
LAB_1002b4d16:
      QArrayData::deallocate(local_28,2,8);
    }
    else {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if (!(bool)local_1a) goto LAB_1002b4d16;
    }
    lVar2 = *(long *)(param_1 + 0x106d8);
  }
  if (lVar2 == 0) {
    return false;
  }
LAB_1002b4d34:
  FUN_1002dfb00();
  iVar1 = (**(code **)(**(long **)(param_1 + 0x106d8) + 0xb8))();
  return iVar1 != 0;
}

