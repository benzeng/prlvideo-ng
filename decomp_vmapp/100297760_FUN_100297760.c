
undefined8 FUN_100297760(long param_1,char param_2,undefined2 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  QArrayData *local_c0;
  undefined1 local_b1;
  undefined1 local_b0 [40];
  undefined1 local_88 [48];
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = (ulong)*(ushort *)(param_1 + 0xfee) * 0x300 + *(long *)(param_1 + 0x1000);
  lVar5 = (ulong)*(ushort *)(param_1 + 0xff0) * 0x80;
  puVar1 = (undefined8 *)(lVar5 + 0x4690 + lVar4);
  local_38 = lVar3;
  if (param_2 == '\0') {
    FUN_1003fe1b0(param_1 + 0x13928);
    *(undefined8 *)(lVar5 + 0x46a8 + lVar4) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(lVar5 + 0x46f4 + lVar4) = 1;
    *(undefined2 *)(lVar5 + 0x46f8 + lVar4) = 0;
    *(undefined4 *)(lVar5 + 0x4704 + lVar4) = 0x200;
    uVar6 = 0;
    goto LAB_100297973;
  }
  uVar6 = 0x80000001;
  if (*(long *)(param_1 + 0x141c0) == 0) goto LAB_100297973;
  FUN_100098d30(local_b0);
  (**(code **)(**(long **)(param_1 + 0x141c0) + 0x178))(&local_c0);
  iVar2 = FUN_10059ae20(&local_c0,local_b0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_b1 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_1002978b9;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1002978b9:
  uVar6 = 0x80000001;
  if (-1 < iVar2) {
    if (param_3 != (undefined2 *)0x0) {
      *(undefined2 *)(lVar5 + 0x46f8 + lVar4) = *param_3;
    }
    uVar6 = 0;
    FUN_1003fae80(local_b0,puVar1,*(undefined2 *)(param_1 + 0xff0));
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_b1 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_10029792a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10029792a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_b1 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_100297960;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100297960:
  FUN_100098f20(local_88);
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100297973:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

