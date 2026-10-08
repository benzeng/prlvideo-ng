
undefined8 * FUN_1001c22d0(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  uid_t uVar5;
  ulong uVar6;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  QArrayData *local_90;
  long local_88;
  undefined1 local_80 [79];
  undefined1 local_31;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  puStack_a0 = (undefined *)0x1001c22f5;
  local_30 = lVar1;
  uVar5 = _getuid();
  local_88 = 0;
  puStack_a0 = (undefined *)0x1001c2309;
  uVar6 = _sysconf(0x47);
  if ((int)uVar6 == -1) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    lVar3 = -((uVar6 & 0xffffffff) + 0xf & 0xfffffffffffffff0);
    *(undefined8 *)(auStack_98 + lVar3 + -8) = 0x1001c2337;
    _getpwuid_r(uVar5,local_80,auStack_98 + lVar3,uVar6 & 0xffffffff,&local_88);
    if (local_88 == 0) {
      *(undefined8 *)(auStack_98 + lVar3 + -8) = 0x1001c23e4;
      FUN_100df99c0("","prl_client_app",0,"(!)Error: getpwuid_r failed.");
      *param_1 = PTR_shared_null_1021e1288;
    }
    else {
      pcVar2 = *(char **)(local_88 + 0x28);
      if (pcVar2 != (char *)0x0) {
        *(undefined8 *)(auStack_98 + lVar3 + -8) = 0x1001c235a;
        _strlen(pcVar2);
      }
      *(undefined8 *)(auStack_98 + lVar3 + -8) = 0x1001c236c;
      QString::fromUtf8_helper((char *)&local_90,(int)pcVar2);
      *(undefined8 *)(auStack_98 + lVar3 + -8) = 0x1001c2382;
      QString::normalized(param_1,&local_90,1,0);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001c23f1;
        }
        *(undefined8 *)(auStack_98 + lVar3 + -8) = 0x1001c23b8;
        QArrayData::deallocate(local_90,2,8);
      }
    }
  }
LAB_1001c23f1:
  puVar4 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_80[0] = *(int *)puVar4 != 0;
      UNLOCK();
      if ((bool)local_80[0]) goto LAB_1001c2427;
    }
    puStack_a0 = (undefined *)0x1001c2427;
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1001c2427:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    puStack_a0 = &UNK_1001c2483;
    ___stack_chk_fail();
  }
  return param_1;
}

