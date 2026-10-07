
void FUN_100406760(long param_1,char param_2)

{
  long lVar1;
  char cVar2;
  size_t sVar3;
  QArrayData *local_438;
  undefined1 local_429;
  char local_428 [1024];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(char *)(param_1 + 0x24) != '\0') && (param_2 == '\x01')) {
    local_428[0] = '\0';
    cVar2 = FUN_100405dd0(0,local_428);
    if ((local_428[0] != '\0') && (cVar2 == '\x01')) {
      sVar3 = _strlen(local_428);
      local_438 = (QArrayData *)QString::fromAscii_helper(local_428,(int)sVar3);
      FUN_100785e80(&local_438);
      if (*(int *)local_438 != -1) {
        if (*(int *)local_438 != 0) {
          LOCK();
          *(int *)local_438 = *(int *)local_438 + -1;
          local_429 = *(int *)local_438 != 0;
          UNLOCK();
          if ((bool)local_429) goto LAB_100406833;
        }
        QArrayData::deallocate(local_438,2,8);
      }
    }
  }
LAB_100406833:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

