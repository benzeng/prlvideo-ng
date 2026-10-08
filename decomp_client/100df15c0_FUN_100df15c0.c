
void FUN_100df15c0(long param_1)

{
  long lVar1;
  short sVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = 0x4100000001;
  local_20 = lVar1;
  FUN_100df1680(&local_28,param_1);
  local_30 = 0x200000006;
  FUN_100df1680(&local_30,param_1 + 0x40);
  sVar2 = _Gestalt(0x73797331,&local_3c);
  if (sVar2 == 0) {
    sVar2 = _Gestalt(0x73797332,&local_38);
    if (sVar2 == 0) {
      sVar2 = _Gestalt(0x73797333,&local_34);
      if (sVar2 == 0) {
        *(undefined4 *)(param_1 + 0x80) = local_3c;
        *(undefined4 *)(param_1 + 0x84) = local_38;
        *(undefined4 *)(param_1 + 0x88) = local_34;
      }
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

