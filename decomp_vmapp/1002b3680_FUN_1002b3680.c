
bool FUN_1002b3680(long param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0xd8) != 0) goto LAB_1002b3732;
  local_30 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MOUSE@|203a|fffc|full|--|PW3.0",0x26);
  lVar2 = FUN_1002bfd50(lVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1002b3704;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002b3704:
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    return false;
  }
  lVar2 = ___dynamic_cast(lVar2,&PTR_vtable_100bb4580,&PTR_vtable_100bb4690,0);
  *(long *)(param_1 + 0xd8) = lVar2;
  if (lVar2 == 0) {
    return false;
  }
LAB_1002b3732:
  FUN_1002dfb00();
  iVar1 = (**(code **)(**(long **)(param_1 + 0xd8) + 0xb8))();
  return iVar1 != 0;
}

