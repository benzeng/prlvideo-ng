
void FUN_1002621e0(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined1 local_1038 [4104];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 0x18;
  *(byte *)((long)param_1 + 0x13e) = *(byte *)((long)param_1 + 0x13e) & 0xf0 | 3;
  local_30 = lVar1;
  (**(code **)(*(long *)param_1[5] + 0x28))((long *)param_1[5],param_1 + 0x25);
  if (*(char *)((long)param_1 + 0x151) != '\0') {
    do {
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_1038,0x1000);
      if (iVar2 < 1) break;
      (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],local_1038,(long)iVar2);
    } while (*(char *)((long)param_1 + 0x151) != '\0');
  }
  *(byte *)((long)param_1 + 0x13e) = *(byte *)((long)param_1 + 0x13e) & 0xf0;
  (**(code **)(*(long *)param_1[5] + 0x28))((long *)param_1[5],param_1 + 0x25);
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

