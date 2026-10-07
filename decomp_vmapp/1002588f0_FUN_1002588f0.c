
void FUN_1002588f0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  undefined8 local_a0;
  char local_98 [104];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *(long *)(param_1 + 0x70);
  lVar7 = *(long *)(param_1 + 0x70);
  local_30 = lVar2;
  if ((*(uint *)(lVar3 + 0x24) & *(int *)(lVar3 + 0x14) - *(int *)(lVar3 + 0x10)) != 0) {
    do {
      iVar5 = FUN_1007d7490(lVar7 + 0x10,&local_a0);
      (**(code **)(param_1 + 0x78))(local_a0,iVar5);
      lVar3 = *(long *)(param_1 + 0x70);
      *(uint *)(lVar3 + 0x10) = iVar5 + *(int *)(lVar3 + 0x10) & *(uint *)(lVar3 + 0x24);
      lVar3 = *(long *)(param_1 + 0x70);
      lVar7 = *(long *)(param_1 + 0x70);
    } while ((*(uint *)(lVar3 + 0x24) & *(int *)(lVar3 + 0x14) - *(int *)(lVar3 + 0x10)) != 0);
  }
  LOCK();
  uVar1 = *(uint *)(lVar7 + 4);
  *(uint *)(lVar7 + 4) = 0;
  UNLOCK();
  if (uVar1 != 0) {
    _sprintf(local_98,"\nLOG OVERFLOW DETECTED=%d\n",(ulong)uVar1);
    pcVar4 = *(code **)(param_1 + 0x78);
    sVar6 = _strlen(local_98);
    (*pcVar4)(local_98,sVar6 & 0xffffffff);
  }
  if (lVar2 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

