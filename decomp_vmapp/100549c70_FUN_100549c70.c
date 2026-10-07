
undefined8 FUN_100549c70(long *param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d0 [6];
  undefined1 local_a0 [112];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::open_existing(%s)",
                local_e0 + *(long *)(local_e0 + 0x10));
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      UNLOCK();
      if (*(int *)local_e0 != 0) goto LAB_100549d0c;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_100549d0c:
  *(undefined1 *)(param_1 + 0xc) = 1;
  QString::toUtf8();
  cVar2 = FUN_100546b20(param_1 + 0xd,local_e8 + *(long *)(local_e8 + 0x10),1,0,1,0,0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) goto LAB_100549d89;
    }
    QArrayData::deallocate(local_e8,1,8);
  }
LAB_100549d89:
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::open_existing(%s) failed to open file",
                  local_f0 + *(long *)(local_f0 + 0x10));
    uVar4 = 1;
    if (*(int *)local_f0 == -1) goto LAB_100549f06;
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      UNLOCK();
      if (*(int *)local_f0 != 0) goto LAB_100549f06;
    }
    uVar3 = 1;
    local_d0[0] = local_f0;
  }
  else {
    FUN_100544d60((int)param_1[0xd],1,0);
    *(undefined1 *)(param_1 + 0xf) = 1;
    cVar2 = FUN_100548fe0(param_1,0);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,0);
      uVar4 = 4;
      goto LAB_100549f06;
    }
    FUN_10054fe20(local_d0,param_1 + 1,param_1[2],param_1[3],param_1[6]);
    cVar2 = FUN_100550950(local_d0,param_1);
    uVar4 = 0;
    if (cVar2 != '\0') {
      cVar2 = FUN_100550d10(local_d0);
      if ((cVar2 == '\0') || (cVar2 = FUN_100550df0(local_d0), cVar2 == '\0')) {
        uVar4 = 2;
        (**(code **)(*param_1 + 0x20))(param_1,0);
      }
      else {
        *(undefined1 *)(param_1 + 0x17) = 1;
      }
    }
    FUN_100554680(local_a0);
    if (*(int *)local_d0[0] == -1) goto LAB_100549f06;
    if (*(int *)local_d0[0] != 0) {
      LOCK();
      *(int *)local_d0[0] = *(int *)local_d0[0] + -1;
      UNLOCK();
      if (*(int *)local_d0[0] != 0) goto LAB_100549f06;
    }
    uVar3 = 2;
  }
  QArrayData::deallocate(local_d0[0],uVar3,8);
LAB_100549f06:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

