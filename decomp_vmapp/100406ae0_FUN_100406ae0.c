
undefined4 FUN_100406ae0(long *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ssize_t sVar5;
  undefined1 local_228 [512];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  local_28 = lVar1;
  cVar2 = (**(code **)(*(long *)param_1[1] + 0x98))();
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 3) = 2;
    if (*(char *)((long)param_1 + 0x24) != '\0') {
      (**(code **)(*param_1 + 0x10))(param_1,param_1 + 2,0,1);
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x24) != '\0') {
      if (*(uint *)(param_1 + 3) == 2) {
        (**(code **)(*param_1 + 0x18))(param_1,1);
        (**(code **)(*param_1 + 0x10))(param_1,param_1 + 2,0,1);
      }
      else if (*(uint *)(param_1 + 3) < 2) {
        iVar3 = (**(code **)(*(long *)param_1[1] + 0xa0))((long *)param_1[1],0,0,0);
        sVar5 = _read(iVar3,local_228,0x200);
        if ((int)sVar5 == -1) {
          *(undefined4 *)(param_1 + 3) = 2;
          (**(code **)(*(long *)param_1[1] + 0x28))();
        }
      }
    }
    uVar4 = FUN_100768f60();
    *(undefined4 *)(param_1 + 4) = uVar4;
  }
  if (lVar1 == local_28) {
    return (int)param_1[3];
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

