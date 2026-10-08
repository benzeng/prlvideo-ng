
undefined8 * FUN_100598c60(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  _func_void_Node_ptr *local_38;
  undefined1 local_29;
  
  if (DAT_1022743dc == 0) {
    DAT_1022743dc = FUN_100598590("Shortcuts::ShortcutsMap",0xffffffffffffffff,1);
  }
  uVar3 = DAT_1022743dc;
  uVar5 = QVariant::userType();
  puVar2 = PTR_shared_null_1021e15d0;
  if (uVar3 == uVar5) {
    uVar6 = QVariant::constData();
    FUN_100598800(param_1,uVar6);
  }
  else {
    local_38 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    cVar4 = QVariant::convert(param_2,(void *)(ulong)uVar3);
    if (cVar4 == '\0') {
      *param_1 = puVar2;
    }
    else {
      FUN_100598800(param_1,&local_38);
    }
    if (*(int *)(local_38 + 0x10) != -1) {
      if (*(int *)(local_38 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_38 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      QHashData::free_helper(local_38);
    }
  }
  return param_1;
}

